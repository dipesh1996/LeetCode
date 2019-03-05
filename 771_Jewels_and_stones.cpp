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