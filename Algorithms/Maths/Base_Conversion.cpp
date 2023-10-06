#include<bits/stdc++.h>
using namespace std;

char reVal(int num)
{
    if (num >= 0 && num <= 9)
        return (char)(num + '0');
    else
        return (char)(num - 10 + 'A');
}
 
// Function to convert a given decimal number
// to a base 'base' and
string fromDeci(string& res, int base, int inputNum)
{
    int index = 0; // Initialize index of result
 
    // Convert input number is given base by repeatedly
    // dividing it by base and taking remainder
    while (inputNum > 0) {
        res.push_back(reVal(inputNum % base));
        index++;
        inputNum /= base;
    }
 
    // Reverse the result
    reverse(res.begin(), res.end());
 
    return res;
}
 
// Driver program
int main()
{
    int inputNum = 282, base = 2;
    string res;
    cout << "Equivalent of decimal " << inputNum << " in base "
         << base << " is " << fromDeci(res, base, inputNum)
         << endl;
 
    return 0;
}