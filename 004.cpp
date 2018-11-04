#include<iostream>
using namespace std;
int Fibonacci(int n) {
 int res = 0;
 int num1 = 1;
 int num2 = 1;
 if(n <= 1)
 return 1;
 for(int i = 1;i < n;i++){
 	res = num1 + num2;
 	num1 = num2;
 	num2 = res;
 }
 return res;
    }
    int main() {
    cout<<Fibonacci(3);	
	}
