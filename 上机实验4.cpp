//#include<iostream>
//using namespace std;
//#include<vector>
//
//void solutions(vector<vector<int>>&arr)
//{
//	int m = arr.size();	//行数
//	int n = arr[0].size();  //列数
//	vector<int> v;
//	int i = 0;  //行
//	int j = 0;  //列
//	v.push_back(arr[i][j]);
//
//	//判断过程
//
//	for (int a=0 ; a < m+n+2; a++)
//	{
//		int s = i + j;
//		if (s % 2 == 0)
//		{
//			if (j + 1 < n && i - 1 >= 0)
//			{
//				j += 1;
//				i -= 1;
//				v.push_back(arr[i][j]);
//			}
//			else
//			{
//				if (j + 1 < n && i + 1 < m)
//				{
//					j += 1;
//					v.push_back(arr[i][j]);
//				}
//				else
//				{
//					i += 1;
//					v.push_back(arr[i][j]);
//				}
//			}
//		}
//		else
//		{
//			if (j - 1 >= 0 && i + 1 < m)
//			{
//				j -= 1;
//				i += 1;
//				v.push_back(arr[i][j]);
//			}
//			else
//			{
//				if (i + 1 < m&&j+1<n)
//				{
//					i += 1;
//					v.push_back(arr[i][j]);
//				}
//				else
//				{
//					j += 1;
//					v.push_back(arr[i][j]);
//				}
//			}
//		}
//	}
//	
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << "  ";
//	}
//}
//
//int main()
//{
//	vector<vector<int>> arr1 = { {1,2,3},
//					{4,5,6},
//					{7,8,9} };
//
//	vector<vector<int>> arr2 = { {1,2,3,4,5},{6,7,8,9,10} };
//
//	solutions(arr1);
//	cout << endl;
//	solutions(arr2);
//
//	system("pause");
//	return 0;
//}