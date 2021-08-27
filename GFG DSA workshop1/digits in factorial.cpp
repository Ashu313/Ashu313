/*Given an integer N. Find the number of digits that appear in its factorial. 
Factorial is defined as, factorial(n) = 1*2*3*4……..*N and factorial(0) = 1.*/




class Solution{
    public:
    int digitsInFactorial(int N)
    {
        // code here
        double digits;digits=0;
        if(N<=1)
        {
        return 1;
        }

        for(int i=2;i<=N;i++)
        {
            digits=digits+log10(i);
        }
        
    
        return floor(digits)+1;
    }
};
