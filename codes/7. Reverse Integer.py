class Solution(object):
    def reverse(self, x):
        cc = 1
        if x<0:
            cc = -1
        print(cc)
        x=abs(x) 

        ans=0
        while x>0:
            ans=ans*10+x%10 
            x/=10
        
        ans=ans*cc 


        if ans > 2**31-1 or ans < -(2**31):
            return 0
        return ans

        