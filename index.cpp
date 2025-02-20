#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string hexToBase20(const string& hexNumber)
{
    
    long long decimalValue = strtol(hexNumber.c_str(), NULL, 16); 

    if (decimalValue == 0) {
        return "0";
    }

    
    const char digits[] = "0123456789ABCDEFGHIJ";

    string result;

    while (decimalValue > 0) {
        result.push_back(digits[decimalValue % 20]);
        decimalValue /= 20;
    }

   
    reverse(result.begin(), result.end());

    return result;
}

int main()
{
    string hexNumber;
    cout << "Введите шестнадцатеричное число: ";
    getline(cin, hexNumber);

    string base20Result = hexToBase20(hexNumber);
    cout << "Результат в системе счисления с основанием 20: " << base20Result << endl;

    return 0;
}

