#include <iostream>

using namespace std;

int main()
{
	int n;
	int arr[10];
	cout << "Input array elements";
	cin >> n;
		for (size_t i = 0; i < n; i++)
			{
				cin >> arr[i];
			}
		for (size_t i = 0; i < n; i++)
		{
			cout << "arr[" << i << "]=" << arr[i] << endl;
		}
}
