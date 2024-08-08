listW = []
listcmp = []

while True:
    s = input()

    if s == "XXXXXX":
        break

    listcmp.append(s)

listcmp.sort()
for i in range(len(listcmp)):
    s = sorted(listcmp[i])
    s = ''.join(s)
    listW.append(s)

listA = []
while True:
    x = 0
    s = input()

    if s == "XXXXXX":
        break;

    s = sorted(s)
    s = ''.join(s)

    for i in range(len(listW)):
        if s == listW[i]:
            x = 1
            listA.append(listcmp[i])

    if x != 0:
        listA.append("******")
    else:
        listA.append("NOT A VALID WORD")
        listA.append("******")

for i in range(len(listA)):
    print(listA[i])
