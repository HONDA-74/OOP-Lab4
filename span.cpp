#include <iostream>
#include <array>
#include <span>  
using namespace std;

void replaceValues(span<int> arrSpan ) {
    int mid = arrSpan.size() / 2;

    span<int> firstHalf = arrSpan.subspan(0, mid);

    span<int> secondHalf = arrSpan.subspan(mid);

    for (int i = 0 ; i<firstHalf.size() ; i++)
        firstHalf[i] =1;

    for (int i = 0 ; i<secondHalf.size() ; i++)
        secondHalf[i] =0;
}

int main() {
    array<int, 10> arr = {5, 6, 7, 8, 9, 10, 11, 12, 13, 14};

    cout << "Before: ";
    for (int x : arr)
        cout << x << " ";

    replaceValues(arr);

    cout << "\nAfter:  ";
    for (int x : arr)
        cout << x << " ";

    cout << endl;
}
