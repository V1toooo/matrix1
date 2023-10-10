#include <iostream>
#include <algorithm>
#include <array>
using namespace std;

int change(int a, int b, int **arr) {
    int arr1[100][100];
    for (int i = 0; i < a + 1; i++) {
        for (int j = 0; j < b + 1; j++) {
            swap(arr[i][j], arr[i-1][j-1]);
        }
    }
    return (** arr);
}

int main()
{
    int a, b, c;
    cin >> a >> b;
    int ** arr = new int*[a];
    for (int i = 0; i < a; i++) {
        arr[i] = new int[b];
        for (int j = 0; j < b; j++) {
            cin >> c;    
            arr[i][j] = c;
        }
    }
    for (int i = 0; i < a; i++) {
        for (int j = 0; j < b; j++) {
            cout << arr[i][j];
        }
        cout << endl;
    }
    cout << change(a, b, arr);
}