#include <iostream>
using namespace std;


/**
 * 用模板函数，实现通用的排列
 * @param a   [description]
 * @param len [description]
 */
template <typename T>
int sort(T *a, int num) 
{
	T temp;	// 临时元素
	for (int i = 0; i < num; ++i)
	{
		for (int j = i + 1; j < num; ++j)
		{
			if (a[j] < a[i])
			{
				temp = a[j];
				a[j] = a[i];
				a[i] = temp;
			}

		}
	}	
	return 0;
}

// 答应数组的方法
template <class T>
void print(T *a, int num) {
	for (int i = 0; i < num; ++i)
	{
		cout << a[i] << " ";
	}
}

int main(void)
{

	// 排序一个字符串
	char str[] = "dagwaegawgeawgsdfdwgewgwega";
	int len = strlen(str);
	sort<char>(str, len);
	print<char>(str, len);

	// 排序一个int 数组
	int arr[] = {12, 3, 5, 6, 345, 634, 44, 66, 77, 88, 999};
	int arr_len = sizeof(arr)/sizeof(arr[0]);
	sort<int>(arr, arr_len);
	print<int>(arr, arr_len);

	return 0;
}
