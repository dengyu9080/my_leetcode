class Solution:
    # @return a tuple, (index1, index2)
    def twoSum(self, num, target):
        d = {}
        for i, e in enumerate(num):
            if e in d:
                return d[e] + 1, i + 1
        d[target - e] = i



def twoSum(num, target):
    d = {}
    for i, e in enumerate(num):
        if e in d:
            return d[e] + 1, i + 1
        d[target - e] = i
        print(d)



def mytwoSum(num, target):
    numlen = len(num)
    for i in range(numlen):
        for j in range(i+1,numlen):
            if target == (num[i]+num[j]):
                return i+1,j+1



