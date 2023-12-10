#include <iostream>
using namespace std;

int main()
{

	int num_of_times;
	cin >> num_of_times;

	string* arr = new string[num_of_times];

	for (int i = 0; i < num_of_times; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0;i < num_of_times; i++)
	{
		if (arr[i] == "cab" || arr[i] == "bca")
			cout << "NO\n";
		else
			cout << "YES\n";
	}
}
