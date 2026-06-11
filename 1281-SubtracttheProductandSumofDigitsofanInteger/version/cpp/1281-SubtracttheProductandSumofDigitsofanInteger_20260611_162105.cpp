// Last updated: 6/11/2026, 4:21:05 PM
1class Solution {
2public:
3    int subtractProductAndSum(int n) {
4        int prod=1;
5        int sum=0;
6
7        while(n!=0){
8            int digit =n%10;
9            prod=prod*digit;
10            sum=sum+digit;
11
12            n=n/10;
13
14        }
15        int answer=prod-sum;
16        return answer;
17    }
18};