if __name__ == "__main__":
    str = list(input())
    counts = {}
    count = 0
    for i in str:
        if i not in counts:
            counts[i] = 1
        else:
            counts[i] += 1
    for i in counts:
        print(i,"=",counts[i])