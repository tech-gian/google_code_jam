#include <iostream>

using namespace std;


void reversort(int* arr, int n, int& counter) {
    for (int i=0 ; i<n-1 ; ++i) {
        int min = arr[i];
        int pos = i;

        for (int m=i ; m<n ; ++m) {
            if (min >= arr[m]) {
                min = arr[m];
                pos = m;
            }
        }

        counter += pos - i + 1;
        for (int j=i ; j<=pos/2 ; ++j) {
            int temp = arr[j];
            arr[j] = arr[pos-j];
            arr[pos-j] = temp;
        }
    }
}


int main(void) {
    int t;
    cin >> t;
    for (int k=0 ; k<t ; ++k) {
        
        int counter = 0;
        int n;
        cin >> n;
        int* arr = new int[n];
        for (int i=0 ; i<n ; ++i) {
            cin >> arr[i];
        }

        reversort(arr, n, counter);

        cout << "Case #" << k+1 << ": " << counter << endl;
    }

    return 0;
}
