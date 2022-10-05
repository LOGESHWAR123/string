#include <bits/stdc++.h>
using namespace std;

int main() 
{
    string s1,s2;
    cin>>s1>>s2;
    int lens1=s1.length();
    int lens2=s2.length();
    if(lens1!=lens2){
      cout<<"Not Anagram";
      exit(0);
    }
    int flag=0;
    sort(s1.begin(),s1.end());
    sort(s2.begin(),s2.end());
    for(int i=0;i<lens1;i++){
      if(s1[i]==s2[i]){
        flag=1;
      }else{
        flag=0;
      }
    }
    if(flag==1){
      cout<<"Anagram";
    }else{
      cout<<"Not Anagram";
    }
    
}