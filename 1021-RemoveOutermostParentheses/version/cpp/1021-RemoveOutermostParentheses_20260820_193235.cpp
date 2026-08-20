// Last updated: 8/20/2026, 7:32:35 PM
1class Solution {
2public:
3    string removeOuterParentheses(string s) {
4        string result;
5        int balance=0;
6        for(int i=0;i<s.size();i++){
7            if(s[i]=='('){
8                if (balance>0){
9                    result+=s[i];
10                }
11                 balance++;
12        }else{
13            balance--;
14            if(balance>0){
15                result+=s[i];
16            }
17           
18            }
19        }
20        return result;
21    }
22};