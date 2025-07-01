#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<int> Fact(int num) {
    vector<int> ans(1, 1);
    while (num > 1) {
        int carry = 0, result;
        for (int i = 0; i < ans.size(); i++) {
            result = ans[i] * num + carry;
            carry = result / 10;
            ans[i] = result % 10;
        }
        while (carry) {
            ans.push_back(carry % 10);
            carry = carry / 10;
        }
        num--;
    }
    reverse(ans.begin(), ans.end());
    return ans;
}

int main() {
    int num;
    cout << "Enter number: ";
    cin >> num;

    if (num < 0) {
        cout << "Factorial is not defined for negative numbers." << endl;
        return 0;
    }

    vector<int> result = Fact(num);
    cout << "Factorial of " << num << " is: ";
    for (int digit : result) {
        cout << digit;
    }
    cout << endl;

    return 0;
}
