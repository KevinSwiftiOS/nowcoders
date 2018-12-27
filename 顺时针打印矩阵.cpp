class Printer {
public:
    vector<int> clockwisePrint(vector<vector<int> > mat, int n, int m) {
        // write code here
          //�洢�����
  // �洢���
         vector<int> result;
         // �߽�����
         if(mat.empty())
             return result;
         // ��ά��������
        
         // Ȧ���ĸ��Ǳ�
         int left = 0;
         int right = m-1;
         int top = 0;
         int btm = n-1;
         // ѭ����ӡȦ
         while(left <= right && top <= btm){             // ѭ��������
             // Ȧ�ĵ�һ��
             for(int i=left;i<=right;++i)                // ��һ��ѭ������
                 result.push_back(mat[top][i]);       // ��һ������
             // Ȧ�ĵڶ���
             if(top<btm)                                 // �ڶ����߽�����
                 for(int i=top+1;i<=btm;++i)             // �ڶ���ѭ������
                     result.push_back(mat[i][right]); // �ڶ�������
             // Ȧ�ĵ�����
             if(top<btm && left<right)                   // �������߽�����
                 for(int i=right-1;i>=left;--i)          // ������ѭ������
                     result.push_back(mat[btm][i]);   // ����������
             // Ȧ�ĵ��Ĳ�
             if(top+1<btm && left<right)                 // ���Ĳ��߽�����
                 for(int i=btm-1;i>=top+1;--i)           // ���Ĳ�ѭ������
                     result.push_back(mat[i][left]);  // ���Ĳ�����
 
             ++left;--right;++top;--btm;
         }
         return result;
    }
};
//�ο����ͣ�https://www.cnblogs.com/wanglei5205/p/8617424.html 
