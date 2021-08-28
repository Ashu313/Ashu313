/*Given two strings 'str1' and 'str2', check if these two strings are isomorphic to each other.
Two strings str1 and str2 are called isomorphic if there is a one to one mapping possible for every character of str1 to every character of str2 while preserving the order.
Note: All occurrences of every character in ‘str1’ should map to the same character in ‘str2’*/







class solution
{
    public:
    //Function to check if two strings are isomorphic.
    bool areIsomorphic(string str1, string str2)
    {
        
        // Your code here
        int freq[256]={0};
         int freq1[256]={0};
        if(str1.length()!=str2.length())
        {
            return false;

        }
        
        for(int i=0;i<str1.length();i++)
        {
            freq[str1[i]]++;
            freq1[str2[i]]++;
            
            if(freq[str1[i]]!=freq1[str2[i]])
            {
                return false;
            }
        }
        return true;
    }
};
