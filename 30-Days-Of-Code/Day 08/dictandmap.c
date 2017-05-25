#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define HASH_TABLE_SIZE 256
#define MAX_NAME_SIZE 255
#define MAX_NUM_SIZE 8

// https://stackoverflow.com/questions/3301294/scanf-field-lengths-using-a-variable-macro-c-c
#define STRINGIFY(x) STRINGIFY2(x)
#define STRINGIFY2(x) #x

typedef struct entry {
    char key[MAX_NAME_SIZE + 1];
    char value[MAX_NUM_SIZE + 1];
    struct entry *next;
} Entry;

// Hash function found http://www.cse.yorku.ca/~oz/hash.html
unsigned long hash(unsigned char *str) {
    unsigned long hash = 5381;
    int c;

    while (c = *str++)
        hash = ((hash << 5) + hash) + c; /* hash * 33 + c */

    return hash;
}

void insert(Entry **hash_table, char *key, char *value) {
    // Generate entry
    Entry *entry = calloc(1, sizeof(Entry));
    strncpy(entry->key, key, MAX_NAME_SIZE);
    strncpy(entry->value, value, MAX_NUM_SIZE);
    entry->key[MAX_NAME_SIZE] = '\0';
    entry->value[MAX_NUM_SIZE] = '\0';
    // Insert at the front
    unsigned long hash_val = hash(key) % HASH_TABLE_SIZE;
    entry->next = hash_table[hash_val];
    hash_table[hash_val] = entry;
}

char *query(Entry **hash_table, char *key) {
    unsigned long hash_val = hash(key) % HASH_TABLE_SIZE;
    Entry *curr = hash_table[hash_val];
    while (curr != NULL) {
        if (strcmp(curr->key, key) == 0) {
            return curr->value;
        } else {
            curr = curr->next;
        }
    }
    return NULL;
}

void null_table(Entry **hash_table) {
    for (int i = 0; i < HASH_TABLE_SIZE; i++) {
        hash_table[i] = NULL;
    }
}

void free_table(Entry **hash_table) {
    for (int i = 0; i < HASH_TABLE_SIZE; i++) {
        Entry *curr = hash_table[i];
        Entry *tmp;
        while (curr != NULL) {
            tmp = curr;
            curr = curr->next;
            free(tmp);
        }
    }
}

int main() {
    Entry *hash_table[HASH_TABLE_SIZE];
    null_table(hash_table);

    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        char key[MAX_NAME_SIZE + 1];
        char value[MAX_NUM_SIZE + 1];
        scanf("%" STRINGIFY(MAX_NAME_SIZE) "s", key);
        scanf("%" STRINGIFY(MAX_NUM_SIZE) "s", value);
        key[MAX_NAME_SIZE] = '\0';
        value[MAX_NUM_SIZE] = '\0';
        insert(hash_table, key, value);
    }

    char query_name[MAX_NAME_SIZE + 1];
    query_name[MAX_NAME_SIZE] = '\0';

    while (scanf("%" STRINGIFY(MAX_NAME_SIZE) "s", query_name) == 1) {
        char *number = query(hash_table, query_name);
        if (number == NULL) {
            printf("Not found\n");
        } else {
            printf("%s=%s\n", query_name, number);
        }
    }

    free_table(hash_table);
    return 0;
}
