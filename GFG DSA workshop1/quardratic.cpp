/*Given a quadratic equation in the form ax2 + bx + c. Find its roots.

Note: Return the maximum root followed by the minimum root.*/

class Solution {
  public:
    vector<int> quadraticRoots(int a, int b, int c) {
        // code here
        vector<int>vec;
        int x,y;
 double d=(sqrt(b*b-4*a*c));
         if((long long int)d<0)
         {
             vec.push_back(-1); 
             return vec;
             // vec.push_back(-1); 
             // cout<<"Imaginary";
         }
        // vec.clear();
         x=floor((-b+(d))/(2*a));
          y=floor((-b-(d))/(2*a));
          
          if(x>=y)
          {
         vec.push_back(x);
        vec.push_back(y);
          }
          else
          {
               vec.push_back(y);
        vec.push_back(x);
          }
        
    return vec;
    }
//cout<<x<<" "<<y;
};

