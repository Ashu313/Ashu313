/*Given a positive integer N, return its corresponding column title as it would appear in an Excel sheet.
For N =1 we have column A, for 27 we have AA and so on.

Note: The alphabets are all in uppercase.

Example 1:

Input:
N = 51
Output: AY
Your Task:
Complete the function ExcelColumn() which takes N as input and returns output string.

Expected Time Complexity: O(Log(N))
Expected Auxiliary Space: O(Log(N)) */



//o(log(N)
//0(k)

class Solution{
    public:
    string ExcelColumn(int n)
    {
        int x = 64;
        string s = "";        
        int i;       
        while(n >= 1){
            int i = n/26;
            if(n%26 == 0){
                s = 'Z' + s; 
                i--;
                if(i==0)
                    break;
                n = i;
                continue;
            }
                        
            s = (char)(x + n%26) + s;            
            n = i;
        }
        return s;
    }    
};
