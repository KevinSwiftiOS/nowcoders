#include<iostream>
#include<set>
#include<cstring>
#include<string>
using namespace std;
int main() {
	set<string>s1;
	string str,res;
	while(getline(cin,str)){
		res = "";
		for(int i = 0; i < str.length();i++){
			if(str[i] == ' ') {
			 s1.insert(res);
		    
			 res = "";
		     
		}
			 else
			 res += (str[i]);
		}
	
		s1.insert(res);
		

	}
		cout<<s1.size()<<endl;
	return 0;
} 
