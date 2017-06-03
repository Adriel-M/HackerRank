"""
With the assumption that there won't be a quote for the last sentence.
Need to improve abbreviation detection.

Overall, this is not a good implementation as there are too much assumptions
with no basis.
"""

entry = input().strip()

def is_abbreviation(sentence):
    """
    Evaluate a word to be an abbreviation if the immediate word before the
    period contains a capital letter and not a single word sentence.
    """
    sentence_split = sentence.split(" ")
    if len(sentence_split) == 1:
        return False
    elif len(sentence_split[-1]) <= 3 and \
            any(x.isupper() for x in sentence_split[-1]):
        return True
    else:
        return False



sentences = []
curr_sentence = ""
sentence_break = "?!."
in_quote = False
quote_chars = ['"', "'"]
curr_quote_char = ""

num_of_chars = len(entry)
for i in range(num_of_chars):
    char = entry[i]
    if curr_sentence == "" and char == " ":
        continue
    curr_sentence += char
    if not in_quote and char in quote_chars:
        if char == "'" and entry[i + 1].isupper():
            in_quote = True
            curr_quote_char = "'"
        elif char == '"':
            in_quote = True
            curr_quote_char = '"'
    elif in_quote:
        if char == curr_quote_char:
            in_quote = False
            curr_quote_char = ""
            if entry[i - 1] in sentence_break and \
               any(x.isupper() for x in entry[i + 1: i + 3]):
                sentences.append(curr_sentence)
                curr_sentence = ""
    elif char in sentence_break:
        if char == "." and is_abbreviation(curr_sentence):
            continue
        sentences.append(curr_sentence)
        curr_sentence = ""

# print out sentences
for sentence in sentences:
    print(sentence)

