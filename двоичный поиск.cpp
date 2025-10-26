#include <iostream>
#include <vector>
using namespace std;
int binarySearch(const vector<int>& arr, int target) {
    int left = 0, right = (int)arr.size() - 1;
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) return mid;
        else if (arr[mid] < target) left = mid + 1;
        else right = mid - 1;
    }
    return -1;
}
int main() {
    vector<int> sortedArray = {1,3,5,7,9,11,13,15};
    for (int v : sortedArray) cout << v << " ";
    cout << endl;
    cout << binarySearch(sortedArray, 7) << endl;
    return 0;
}
