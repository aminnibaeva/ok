#include <iostream>
#include <vector>

using  namespace std;

int bSearch(int array[], int left, int right, int elem){
    if (right >= left) {
        int middle = left + (right - left) / 2;
        if (array[middle] > elem)
            return bSearch(array, left, middle - 1, elem);
        if (array[middle] == elem)
            return middle;
        return bSearch(array, middle + 1, right, elem);
    }
    return 0;
}



int main() {
    int arr[] = { 5, 10, 12, 14, 345};
    int n = sizeof(arr) / sizeof(arr[0]);
    int elem = 10;
    int search = bSearch(arr, 0, n - 1, elem);
    if (search == 0){
        cout << "Elem not found";
    }else{
       cout << "Elem have ind " << search;
    }
    return 0;
}
