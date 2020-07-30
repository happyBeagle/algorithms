#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;


int lowerBound(vector<int>& arr, int target) {
	int left = 0, right = arr.size() - 1;

	while (left < right) {
		int mid = (left + right) / 2;

		if (arr[mid] < target) {
			left = mid + 1;
		}
		else {
			right = mid;
		}
	}

	return right;
}
int main() {
	int N;
	cin >> N;

	vector<int> arr(N);
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	sort(arr.begin(), arr.end());

	int target;
	cin >> target;

	cout << lowerBound(arr, target);

	return 0;
}