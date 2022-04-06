#include <bits/stdc++.h>

using namespace std;

// Complete the pangrams function below.
string pangrams(string s) {
 vector<bool> mark(26, false); 
 int index; 
  
    for (int i=0; i<s.length(); i++) 
    { 
        if ('A' <= s[i] && s[i] <= 'Z') 
            index = s[i] - 'A'; 
   
        else if('a' <= s[i] && s[i] <= 'z') 
            index = s[i] - 'a'; 
  
        mark[index] = true; 
    } 
  
    for (int i=0; i<=25; i++) 
        if (mark[i] == false) 
            return "not pangram";

    return "pangram";
}

int main()
{
    string s;
    getline(cin, s);
    string result = pangrams(s);
    cout << result << "\n";
    return 0;
}

