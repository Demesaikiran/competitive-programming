def findBestSubset(l, k):
    if len(l) < k:
        return None
    result = []

    freq = dict()
    maxele = 0

    for i in range(0, len(l) - 2):
        flag = 0
        for j in range(i, i + k):
            if l[j] in freq.keys():
                break
            else:
                freq[l[j]] = 1
                flag += 1
        if flag == 3:
            temp = sum(freq.keys())
            if maxele < temp:
                maxele = temp
                result = list(freq.keys())

        freq.clear()
    
    print(maxele)
    return result



if __name__ == "__main__":
    n = int(input("Enter the length of the list wanted to give: "))
    l = list(map(int, input().split()))[:n]

    k = int(input("Enter the value of k: "))

    print(findBestSubset(l, k))