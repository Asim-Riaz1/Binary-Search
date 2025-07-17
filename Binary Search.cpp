#include <iostream>
using namespace std;
int binarySearch(int arr[], int n, int key) {
    int left = 0, right = n - 1;
    while (left <= right) {
        int mid = (left + right) / 2;
        if (arr[mid] == key) {
            return mid; // Key found
        } 
        else if (arr[mid] > key) {
            right = mid - 1; // Search in the left half
        }
        else if (arr[mid] < key) {
            left = mid + 1; // Search in the right half
        }
    }
    return -1; // Key not found
}
int main() {
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int key;
    cin >> key;
    cout << binarySearch(arr, n, key) << endl;
}