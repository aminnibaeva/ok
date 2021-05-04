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

}
