#include <iostream>
int sumArray(int arr[], int size) {
    if (size == 0) {
        return 0;
    }
    else {
        return arr[0] + sumArray(arr + 1, size - 1);
    }
}
int main() {
    int arr[] = {1, 2, 3, 78, 5};
    int size = sizeof(arr) / sizeof(arr[0]);
    int sum = sumArray(arr, size);
    std::cout << sum << std::endl;
    return 0;
}