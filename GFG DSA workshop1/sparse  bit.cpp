/*Given a number N. The task is to check whether it is sparse or not. A number is said to be a sparse number if no two or more consecutive bits are set in the binary representation.
Input: N = 2
Output: 1
Explanation: Binary Representation of 2 is 10, 
which is not having consecutive set bits. 
So, it is sparse number.*/
    bool isSparse(int n)
    {
        // Your code
        
        /*method1*/
        if((n&n<<1)==0)
        {
            return true;
        }
        return false;
        /*method 2*/
      int a,t,c;c=0;
      while(n!=0)
       {
           t=n%2;
           if(t==1)
           {
               c++;
           }
           else
           {
               c=0;
           }
           if(c>=2)
           {
               return false;
           }
           n=n/2;
       }
       return true;
    }

