#include<iostream>
#include<queue>
#include<map>
using namespace std;
typedef long long llint;
const llint base = 1000000007LL;
 


int solve(int x0){
	//�洢ģ
	queue<int> q;
	//�洢{ģ: ����}
	map<int, int>m;
	q.push(x0);
	m[x0] = 0;
	while (!q.empty()){
		llint now = q.front();
		q.pop();
		if (now == 0) //˵�������� 
			return m[now];
		//�����������
		if (m[now] > 100000)
			continue;
		int next0 = (now * 4 + 3) % base;
		if (!m[next0]){
			m[next0] = m[now] + 1;
			q.push(next0);
		}
		int next1 = (now * 8 + 7) % base;
		if (!m[next1]){
			m[next1] = m[now] + 1;
			q.push(next1);
		}
	}
	return -1;
}
int main() {
	int x0;
	while (cin >> x0)
	{
		cout << solve(x0) << endl;
	}
	return 0;
}
