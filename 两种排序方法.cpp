#include<iostream>
#include<cstring>
#include<string>
using namespace std;
int main() {
	int n;
	string s;
	string temp = "";
	int templength = 0, nowlength, flag = 0, flag1 = 1, flag2 = 1;
	cin >> n;
	while (n--){
		cin >> s;
		//��ʼ��ֵ

		if (temp.length() > s.length()){
			//�������ݳ����������
			flag1 = 0;
		}
		if (temp > s)
			flag2 = 0;
		temp = s;
	}
	if (flag1 && flag2)
		cout << "both";
	else if (!flag1 && flag2)
		cout << "lexicographically";
	else if (flag1 && !flag2)
		cout << "length";
	else
		cout << "none";
	return 0;
}
