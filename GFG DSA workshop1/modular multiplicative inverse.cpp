/*Given two integers ‘a’ and ‘m’. The task is to find the smallest modular multiplicative inverse of ‘a’ under modulo ‘m’.*/



class Solution{
    public:
    //Complete this function
    int modInverse(int a, int m)
    {
        //Your code here
        int x;
        for(int i=1;i<=m;i++)
        {
        x= (i*a)%m;
        if(x==1)
        {
            return i;
            
        }
        }
        return -1;
    }
};
