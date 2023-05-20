#include <iostream>
using namespace std;

int main() {
    int correct_pieces[6] = {1, 1, 2, 2, 2, 8};
    int input_pieces[6];
    for (int i = 0; i < 6; i++) {
        cin >> input_pieces[i];
    }

    for (int i = 0; i < 6; i++) {
        cout << correct_pieces[i] - input_pieces[i] << " ";
    }
    cout << endl;

    return 0;
}
