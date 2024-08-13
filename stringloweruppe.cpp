#include<iostream>
#include<string>
#include<algorithm>
using namespace std;

int main()
{
    int i;
    string str="hello world how are you";

   for(i=0;i<=str.size();i++){
    if(str[i]>='a'&&str[i]<='z'){
        str[i]-=32;
    }
   }
   cout<<str;
   cout<<endl<<endl<<endl<<endl;
   
   str="HELLO BABY WHAT ARE you DOIng do you KNOW that ";
   for(i=0;i<=str.size();i++){
    if(str[i]>='A'&&str[i]<='Z'){
        str[i]+=32;
    }
   }
   cout<<str<<endl<<endl<<endl;

   //inbuild funcltion transform can be used to interchange between lower to upper and upper to lower

   transform(str.begin(),str.end(),str.begin(), ::toupper);
   cout<<str<<endl<<endl<<endl;


  transform(str.begin(),str.end(),str.begin(), ::toupper);
  cout<<str<<endl<<endl;
  //greater number make by the given numeric string
  string s="47387687977698768";
  sort(s.begin(),s.end(),greater<int>());
    cout<<s<<endl;
    cout<<s.size()<<endl;
    cout<<str.compare(s)<<endl;
    cout<<str.append(s)<<endl;
    cout<<str.find("DO")<<endl;
    cout<<s.insert(5,"  ")<<endl;
    cout<<s.erase(2,14)<<endl;\
    cout<<str.substr(4,12)<<endl;
   // \end{code}

   return 0;
}