//#include <bits/stdc++.h>
#include<iostream>
using namespace std;
void Pattern(string p, string s1, int m, int n) {

   for (int i = 0; i <= n - m; i++) {
       int j;
       for (j = 0; j < m; j++)
           if (s1[i + j] != p[j])
               break;
      
       if (j == m)
       {
           cout << "The string/pattern is found at the index: " << i << endl;
           return;
       }
   }
   cout << "Oops!!! No match found!" << endl;
}

int main() {
   string s1 = "Design Analysis of Algorithm";
   string p = "Analysis";
   Pattern(p, s1, p.size(), s1.size());
   return 0;
}