#include <iostream>

using namespace std;

// Function to check if an element exists in an array
bool contains(int* arr, int size, int element) {
    for (int i = 0; i < size; i++) {
        if (arr[i] == element) {
            return true;
        }
    }
    return false;
}

void findIntersection(int* arr1, int size1, int* arr2, int size2, int& sizeIntersection, int* intersection) {
    sizeIntersection = 0;

    for (int i = 0; i < size1; i++) {
        if (contains(arr2, size2, arr1[i])) {
            if (!contains(intersection, sizeIntersection, arr1[i])) {
                intersection[sizeIntersection++] = arr1[i];
            }
        }
    }
}

int main() {
    int size1, size2;
    cin >> size1;

    int arr1[100], arr2[100], intersection[100], sizeIntersection;

    for (int i = 0; i < size1; i++) {
        cin >> arr1[i];
    }

    cin >> size2;

    for (int i = 0; i < size2; i++) {
        cin >> arr2[i];
    }

    findIntersection(arr1, size1, arr2, size2, sizeIntersection, intersection);

    if (sizeIntersection == 0) {
        cout << "No common IDs found." << endl;
    } else {
        for (int i = 0; i < sizeIntersection; i++) {
            cout << intersection[i] << " ";
        }
        cout << endl;
    }

    return 0;
}
