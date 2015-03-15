#include <iostream>

using namespace std;

int main()
{
    int numberOfTests;

    cout << "Please enter the number\n"
        << "Number: ";
    cin >> numberOfTests;


    for (int i=1; i < numberOfTests + 1; i++)
    cout << "Running test " << i << "\n";

}
