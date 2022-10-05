#include <bits/stdc++.h>
using namespace std;
vector<string>vec;
void permutate(string str,int i,int len){
  if(i>=len){
    return;
  }
  for(int j=i;j<len;j++){
    swap(str[i],str[j]);
    if(i==(len-1)){
      vec.push_back(str);
    }
    permutate(str,i+1,len);
  }
}
int main() 
{
    string str;
    cin>>str;
    int len=str.length();
    permutate(str,0,len);
    for(int i=0;i<vec.size();i++){
      cout<<vec[i]<<" "<<endl;
    }
    
}