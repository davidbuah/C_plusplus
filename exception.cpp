#include <iostream>
#include <stdexcept>
using namespace std;

int main() {
    try {
        int numerator = 10, denominator = 0;

        if (denominator == 0)
            throw runtime_error("Division by zero");

        int res = numerator / denominator;
        cout << "Result after division: " << res << endl;
    }
    catch (const exception& e) {
        cout << "Exception: " << e.what() << '\n';
    }

    return 0;
}