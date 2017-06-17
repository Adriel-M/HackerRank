def get_word_frequency(mag):
    words_of_mag = {}
    for word in mag:
        if word in words_of_mag:
            words_of_mag[word] += 1
        else:
            words_of_mag[word] = 1
    return words_of_mag

def ransom_note(magazine, ransom):
    words_of_mag = get_word_frequency(magazine)
    for word in ransom:
        if word not in words_of_mag:
            return False
        else:
            if words_of_mag[word] <= 0:
                return False
            else:
                words_of_mag[word] -= 1
    return True

m, n = map(int, input().strip().split(' '))
magazine = input().strip().split(' ')
ransom = input().strip().split(' ')
if (ransom_note(magazine, ransom)):
    print("Yes")
else:
    print("No")
