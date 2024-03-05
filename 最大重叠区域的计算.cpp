//#include<iostream>
//
//using namespace std;
//
//int main()
//{
//	int m;
//	cin >> m;
//	int a[1000000]={0};
//	for (int i = 0; i < m; i++)
//	{
//		int a1, b;
//		cin >> a1 >> b;
//		a[a1]++;
//		a[b]--;
//	}
//	int num = 0;
//	int maxnum = 0;
//	for (int i = 0; i < 1000000; i++)
//	{
//		num += a[i];
//		if (num > maxnum)
//			maxnum = num;
//	}
//	cout << maxnum;
//
//
//	return 0;
//}