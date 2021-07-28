# spinning words
def spin_words(sentence):
    if sentence.find(' ') == -1:
        return sentence if len(sentence) < 5 else sentence[::-1]
    else:
        arr = list(sentence.split())
        for i in range(len(arr)):
            if len(arr[i]) >= 5:
                arr[i] = arr[i][::-1]
        return " ".join(arr)
s = input()

print(spin_words(s))