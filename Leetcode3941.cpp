#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int passwordStrength(string password) {
        int score=0;
        unordered_set<char> st(password.begin(),password.end());
        password.assign(st.begin(),st.end());
        for(int i=0;i<password.size();i++)
        {
            if(password[i]>='a' && password[i]<='z')
            {
                score+=1;
            }
            else if(password[i]>='A' && password[i]<='Z')
            {
                score+=2;
            }
            else if(password[i]>='0' && password[i]<='9')
            {
                score+=3;
            }
            else if(password[i]=='!' || password[i]=='@' || password[i]=='#' || password[i]=='$')
            {
                score+=5;
            }
        }
        return score;
    }
};