
/*Given a positive integer value N. The task is to find how many numbers less than or equal to N have numbers of divisors exactly equal to 3.*/





class Solution{
    public:
    int exactly3Divisors(int N)
    {
        //Your code here
        int c;c=0;
        for(int i=2;i*i<=N;i++)
        {
            if(isprime(i))
            {
                c++;
            }
        }
        return c;
    }
    
    
    bool isprime(int N)
    {
        for(int i=2;i*i<=N;i++)
        {
            if(N%i==0)
            {
                return false;
            }
        }
        return true;
    }
};
