/*Given a string S, find the length of its longest substring that does not have any repeating characters.

Example 1:

Input:
S = geeksforgeeks
Output: 7
Explanation: The longest substring
without repeated characters is "ksforge".*/

//simple 0(n)
//auxillary space o(1);
//Initial Template for C++
#include <bits/stdc++.h>
using namespace std;




 // } Driver Code Ends
//User function Template for C++

class Solution{
  public:
    // s is the given string
    int SubsequenceLength (string s)
    {

int freq[26]={0};
        int low;low=0;
        int result;result=0;
        int start;start=0;
    while(start<s.length())
        {
            if(freq[s[start]-'a']==0)
            {
                freq[s[start]-'a']++;
            }
            else
            {
                freq[s[start]-'a']++;
                while(freq[s[start]-'a']>1)
                {
                    freq[s[low]-'a']--;
                    low++;
                }
            }
         result=max(result,start-low+1);
          start++;
        }

        return result;
    }
};

// { Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    cin>>ws;
    while(t--)
    {
        string str;
        getline(cin,str);
        Solution obj;
        cout<<obj.SubsequenceLength(str)<<"\n";
    }
    return 0;
}
  // } Driver Code Ends
