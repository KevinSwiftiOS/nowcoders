#include<iostream>
using namespace std;
int Fibonacci(int n) {
  int a[39];
  a[0] = 0;
  a[1] = 1;
  for(int i = 2; i <= n;i++)
  a[i] = a[i - 1] + a[i - 2];
  return a[n];      
    }
    int main() {
    cout<<Fibonacci(3);	
	}
