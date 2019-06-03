#if 0
在默认参数规则，如果默认参数出现，那么右边的都必须有默认参数

#endif

#include <iostream>
using namespace std;

float volume(float length, float weight = 4; float high = 5)
{
	return length * weight * heigh;
}

int main(int argc, char const *argv[])
{
	float v = volume(10);
	float v1 = volume(10, 20);
	float v2 = volume(10, 20, 30);

	cout << v << endl;
	cout << v1 << endl;
	cout << v2 << endl;

	return 0;
}
