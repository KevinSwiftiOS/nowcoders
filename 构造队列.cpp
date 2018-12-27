#include<iostream>
#include<queue>
using namespace std;
int main() {
   int T,n;
   cin>>T;
   while(T-- > 0){
   	cin>>n;
   	deque<int> q;
   	while(n > 0){
   		q.push_front(n);
   		int x = q.back();
   		q.pop_back();
   		q.push_front(x);
   		n--;
	   }
for(int i = 0; i < q.size() - 1;i++)
  cout<<q[i]<<" ";
  cout<<q[q.size() - 1]<<endl;
	
	}
	return 0;
}
//²©¿Íhttp://www.cnblogs.com/qqky/p/6796700.html 
