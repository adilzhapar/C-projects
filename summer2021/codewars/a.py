# Mumbling
def accum(s):
    t = ""
    for i, j in enumerate(s):
        if(i==len(s)-1):
            test = j.upper() + j.lower() * i
            t += test
        else:
            test = j.upper() + j.lower() * i + '-'
            t += test
    return t

print(accum("aZipAr"))