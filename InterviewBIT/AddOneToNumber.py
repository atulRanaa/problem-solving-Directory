class Solution:
    # @param A : list of integers
    # @return a list of integers
    def plusOne(self, A):
        
        s = ""
        for x in A: s += str(x)
        return [x for x in str(int(s)+1)]