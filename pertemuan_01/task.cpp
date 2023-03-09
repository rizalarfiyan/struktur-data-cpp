#include <iostream>
using namespace std;

struct maxmin {
    int min;
    int max;
};

int inputArrayLength();
void printArrayElement(int array[], int arrayLength);
void printResultArrayElement(maxmin collect);
maxmin getValueMaxMin(int array[], int arrayLength);

int main() {
    int arrayLength = inputArrayLength();

    int arrayValue[arrayLength];
    for (int i = 0; i < arrayLength; i++) {
        cout << "Array " << (i+1) << " = ";
        cin >> arrayValue[i];
    }

    printArrayElement(arrayValue, arrayLength);
    maxmin collect = getValueMaxMin(arrayValue, arrayLength);
    printResultArrayElement(collect);
    return 0;
}


int inputArrayLength() {
    int arrayLength;

    cout << "Input array length: ";
    cin >> arrayLength;
    cout << endl;

    return arrayLength;
}

void printArrayElement(int array[], int arrayLength) {
    cout << endl << "List of Array: " << endl;

    for (int i = 0; i < arrayLength; i++) {
        cout << array[i] << " ";
    }
    cout << endl;
}

maxmin getValueMaxMin(int array[], int arrayLength) {
    maxmin maxmin = {0, 0};
    if (arrayLength < 1) {
        return maxmin;
    }

    maxmin.max = array[0];
    maxmin.min = array[0];

    for (int i = 0; i < arrayLength; i++) {
        if (maxmin.max < array[i]) maxmin.max = array[i];
        if (maxmin.min > array[i]) maxmin.min = array[i];
    }

    return maxmin;
}

void printResultArrayElement(maxmin collect) {
    cout << endl << "Maximum value: " << collect.max << endl;
    cout << endl << "Minimum value: " << collect.min << endl;
}
