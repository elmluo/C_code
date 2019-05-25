#include <iostream>
using namespace std;


/**
 * 升序排列
 * @param a   [description]
 * @param len [description]
 */
template <typename T>
void sort(T &a, len) 
{
	for (int i = 0; i < len; ++i)
	{
		for (int j = i + 1; j < len; ++j)
		{
			if (a[i] < a[j])
			{
				T temp;
				temp = a[i];
				a[i] = a[j];
				a[j] = temp;
			}

		}

	}	
}

template <class T>
void print(&arr, len) {
	for (int i = 0; i < len; ++i)
	{
		cout << arr[i] << endl;
	}
}

int main(void)
{
	int arr[10] = {22,2,4,55,6,6,7,9};
	int len = strlen(arr)/strlen(arr[0]);

	sort<>(arr, len);
	print<>(arr, len);

	return 0
}
