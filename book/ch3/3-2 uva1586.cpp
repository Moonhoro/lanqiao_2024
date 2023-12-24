//
// Created by 1 on 2023/12/24.
//
#include <iostream>
#include <string>
#include <iomanip>

using namespace std;
int n;
float ans=0;
float sum=0;
float r[4]={12.01,1.008,16.00,14.01};

float find(char c)
{
    if(c=='C')return r[0];
    else if(c=='H')return r[1];
    else if(c=='O')return r[2];
    else if(c=='N')return r[3];
}
bool is_number(char ch)
{
    if (ch >= '0' && ch <= '9') return true;
    else return false;
}
int main()
{

    cin>>n;
    string s;
    while(n--)
    {
        cin>>s;
        ans=0;
        int k=s.length();
        for(int i=0;i<k;++i)
        {
            if(is_number(s[i]))continue;
            else if(!is_number(s[i+1]))ans+=find(s[i]);
            else
            {
                int x=0;
               for(int j=i+1;j<k;++j) {
                   if (is_number(s[j])) {
                       x = x * 10 + s[j] - '0';
                   } else break;
               }
                ans+=find(s[i])*x;
            }
        }
        printf("%.3lf\n", ans);
    }
}
