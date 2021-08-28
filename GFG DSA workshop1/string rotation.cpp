/*Given two strings s1 and s2. The task is to check if s2 is a rotated version of the string s1. The characters in the strings are in lowercase.
simple kmp algorithm
 

Example 1:

Input:
geeksforgeeks
forgeeksgeeks
Output: 
1
Explanation: s1 is geeksforgeeks, s2 is
forgeeksgeeks. Clearly, s2 is a rotated
version of s1 as s2 can be obtained by
left-rotating s1 by 5 units.*/



class Solution
{
    public:
    //Function to check if two strings are rotations of each other or not.
    bool areRotations(string s1,string s2)
    {
        // Your code here
        if(s1.length()!=s2.length())
        {
            return false;
        }
    string temp=s1+s1;
    if(temp.find(s2)!=string::npos)
    {
        return true;
    }
    
    return false;
    }
};


/*2nd approach using queue data structure*/
class Solution
{
    public:
    //Function to check if two strings are rotations of each other or not.
    bool areRotations(string s1,string s2)
    {
        // Your code here
    queue<char>st;
    queue<char>st1;
    
    if(s1.length()!=s2.length())
    {
        return false;
    }
    for(int i=0;i<s1.length();i++)
    {
        st.push(s1[i]);
    }
    for(int i=0;i<s1.length();i++)
    {
        st1.push(s2[i]);
    }
    int k;
    k=s2.length();
    while(k--)
    {
        int x=st1.front();
        st1.pop();
        st1.push(x);
        if(st1==st)
        {
            return true;
        }
    }
    return false;
    }
};
