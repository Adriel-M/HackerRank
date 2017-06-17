def get_letter_frequency(word):
    chars_dict = {}
    for letter in word:
        if letter in chars_dict:
            chars_dict[letter] += 1
        else:
            chars_dict[letter] = 1
    return chars_dict

def number_of_deletions(a, b):
    count = 0
    chars_of_a = get_letter_frequency(a)
    chars_of_b = get_letter_frequency(b)
    for k, v in chars_of_a.items():
        if k not in chars_of_b:
            count += v
        else:
            count += abs(v - chars_of_b[k])
    for k, v in chars_of_b.items():
        if k not in chars_of_a:
            count += v
    return count

a = input().strip()
b = input().strip()
print(number_of_deletions(a, b))
