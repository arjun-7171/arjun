class Solution {
    public:
     bool isAnagram(string s, string t) {
       if (s.length() != t.length())
         return false;
   
       vector<int> ct(26);
   
       for (const char c : s){

           ++ct[c - 'a'];
        }
   
       for (const char c : t) {
         if (ct[c - 'a'] == 0)
           return false;
         --ct[c - 'a'];
       }
   
       return true;
     }
   };