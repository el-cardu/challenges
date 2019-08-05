def is_pangram(sentence):

    sentence = list(map(lambda char: char.lower(), set(sentence)))
    sentence = [ord(c) for c in sentence]

    ascii_alphabet = list(range(ord('a'), ord('{')))

    if all(letter in sentence for letter in ascii_alphabet):
        return True
    else:
        return False
