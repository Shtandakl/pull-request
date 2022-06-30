#include <iostream>
#include <ctime>
#include <cstdlib>

using namespace std;

int main() {

    const int left = 100;
    const int right = 1000;

    srand(time(nullptr));

    int N;
    cin >> N;

    int* _array = new int[N];

    for (int i = 0; i < N; ++i) {
        _array[i] = rand() % right + left;
        cout << _array[i] << " ";
    }
    cout << endl;

    return 0;

}