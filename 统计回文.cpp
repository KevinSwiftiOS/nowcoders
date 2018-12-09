#include<iostream>
#include<cstring>
#include<string>
using namespace std;
bool isHuiWen(string s){
	cout<<s<<endl;
	for(int i = 0; i <s.length() / 2 ;i++)
	if(s[i] != s[s.length() - i - 1])
	return false;
	return true;
} 
int main() {
string a,b;
cin>>a>>b;
int cnt = 0;
for(int i = 0; i<= a.length();i++) {

     string temp = a;
     temp.insert(i,b);
     if(isHuiWen(temp))
     cnt++;
}
cout<<cnt<<endl;
return 0;
}
