#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;

void main() {
	int a;
	int data[10] = { 87, 45, 50, 25, 32, 10, 75, 90, 5, 8 };
	int i = 0;
	int input;
	int flag = 0;

	cout << "Deret sebelum di sorting :\n ";
	for (int i = 0; i < 10; i++)
	{
		cout << data[i] << " | ";
	}

	double median(vector<int>& arr);
		sort(arr.begin(), arr.end());
		int n = arr.size();
		if (n % 2 == 0) {
			return (double)(arr[n / 2 - 1] + arr[n / 2]) / 2;
		}
		else {
			return (double)arr[n / 2];
		}
		cout << "Median = " << median(arr) << "|" << endl;
}