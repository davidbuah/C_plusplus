#include <iostream>
#include <stdexcept>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3};

    try {
        cout << v.at(10) << endl;     // index 10 doesn't exist: throws
    }
    catch (const out_of_range& e) {
        cout << "Exception: " << e.what() << '\n';
    }

    return 0;
}