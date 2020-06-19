//------------------------------Approach I in C++ ---------------------------------------------
#include <iostream>
using namespace std;
class Solution
{
   public:
     int numJewelsInStones(string J, string S)
     {
          int count = 0;
          for (int i = 0; i < J.size(); i++)
          {
               for (int b = 0; b < S.size(); b++)
               {
                    if (J[i] == S[b])
                         count++;
               }
          }
          return count;
     }
};
int main()
{
     Solution S;
     cout << S.numJewelsInStones("aA", "aAAbbbb");
     return 0;
}


//------------------------------Approach II in JAVA---------------------------------------------
// class Solution {
//     public int numJewelsInStones(String J, String S) {
//         HashMap<Character, Integer> hmap = new HashMap<>(); 
//         int count = 0;
//         for(int i=0;i<S.length();i++)
//         {
//             if(!hmap.containsKey(S.charAt(i)))
//                 hmap.put(S.charAt(i), 1);
//             else
//                 hmap.put(S.charAt(i), hmap.get(S.charAt(i)) + 1);
//         }
//         for(int i=0;i<J.length();i++)
//         {
//             if(hmap.containsKey(J.charAt(i)))
//                 count += hmap.get(J.charAt(i));
//         }
//     return count;
//     }
// }
