using namespace std;
#include <iostream>

double numProduct(double numbers) {
    double sum = 1;
    for (int i = 1; i < numbers; ++i) {
        sum = sum * (i + 1);
    }
    return sum;
}

int main()
{
    double rawNumbers = 0;
    cout << "Enter value :" << endl;
    cin >> rawNumbers;
    
    cout << numProduct(rawNumbers);
}
