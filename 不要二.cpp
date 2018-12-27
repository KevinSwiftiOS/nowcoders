#include<iostream>
using namespace std;
int main() {
	int W,H;
	cin>>W>>H;
	if(W % 4 == 0 || H % 4 == 0)
	cout << W * H / 2;
	else if(W % 2 == 0 && H % 2 == 0)
	cout<< (W * H / 4 + 1) * 2; 
	else
	cout<< W * H / 2 + 1;
	return 0;
} 
