class Node(object):
    def __init__(self, value, parent, left, right):
        self.value = value
        self.left = left
        self.right = right

    def insert(self, data):
        if data < self.value:
            pass
        else:
            pass

    def display(self):
        for node in self.node_list:
            pass
        for element in text:
            pass


encode = 'Ana ama sua nana, sua mana e banana'

def count_frequency(text, rel=True):
    """
        Returns a dictionary with the given frequency for each character.
    """
    frequencies = {}
    for char in text:
        if char not in frequencies:
            counter = 0
            for ch in text:
                if char == ch:
                    counter += 1
            frequencies[char] = counter

    if (rel):
        for key, value in frequencies.items():
            frequencies[key] = value/len(text)

    return frequencies


def huffman_encoding(sequency):
    """
        We are given an array with characters and their proper frequencies,
        and we need to return the Huffman coding to this sequence.
    """
    pass
    


sample_dict = {
    'a': .5,
    'b': .25,
    'c': .125,
    'd': .0625,
    'e': .0625
}

print(encode)
for key, value in count_frequency(encode).items():
    print("{}: {}".format(key, value))