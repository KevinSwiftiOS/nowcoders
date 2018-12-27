#include<iostream>
#include<cmath>
using namespace std;
int main() {
	long long int a[100],n,i;
	a[0] = 0;
	a[1] = 1;
	for( i = 2;i < 40;i++)
	a[i] = a[i - 1] + a[i - 2];
    cin>>n;
    for( i = 0; i < 40;i++){
     if(a[i] <= n && a[i + 1] >= n)
    	break;
	}
	cout<<min(n - a[i],a[i + 1] - n);
	return 0;
} 
