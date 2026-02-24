#include <iostream>
using namespace std;

string oneToNineteen[] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven",
                          "Eight", "Nine", "Ten", "Eleven", "Twelve", "Thirteen",
                          "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};

string tens[] = {"", "", "Twenty", "Thirty", "Forty", "Fifty",
                 "Sixty", "Seventy", "Eighty", "Ninety"};

string thousands[] = {"", "Thousand", "Million", "Billion"};

string helper(int num) {
    if (num == 0) return "";
    else if (num < 20) return oneToNineteen[num] + " ";
    else if (num < 100)
        return tens[num / 10] + " " + helper(num % 10);
    else
        return oneToNineteen[num / 100] + " Hundred " + helper(num % 100);
}

string convertToWords(long long num) {
    if (num < 0 || num > 2147483647) return "Range out of bound";  // Constraint check

    if (num == 0) return "Zero";

    string result = "";
    int index = 0;

    while (num > 0) {
        if (num % 1000 != 0)
            result = helper(num % 1000) + thousands[index] + " " + result;
        num /= 1000;
        index++;
    }

    while (!result.empty() && result.back() == ' ')
        result.pop_back();

    return result;
}

int main() {
    long long n;
    cout << "Enter number: ";
    cin >> n;

    string result = convertToWords(n);
    cout << "In words: " << result << endl;

    return 0;
}