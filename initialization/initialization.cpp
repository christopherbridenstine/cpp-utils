#include <iostream>
#include <limits>

int main()
{
    short singleDigitShort = 1;
    short doubleDigitShort = 49;
    short tripleDigitShort = 859;
    short maxShort = std::numeric_limits<short>::max();

    short negSingleDigitShort = -1;
    short negDoubleDigitShort = -49;
    short negTripleDigitShort = -948;
    short minShort = std::numeric_limits<short>::min();

    short singleDigitShortB(1);
    short doubleDigitShortB(49);
    short tripleDigitShortB(859);
    short maxShortB(std::numeric_limits<short>::max());

    short negSingleDigitShortB(-1);
    short negDoubleDigitShortB(-49);
    short negTripleDigitShortB(-948);
    short minShortB(std::numeric_limits<short>::min());

    int singleDigitInt = 1;
    int doubleDigitInt = 84;
    int tripleDigitInt = 190;
    int max32Int = std::numeric_limits<int>::max();

    int negSingleDigitInt = -5;
    int negDoubleDigitInt = -29;
    int negTrippleDigitInt = -930;
    int min32Int = std::numeric_limits<int>::min();

    int singleDigitIntB(1);
    int doubleDigitIntB(84);
    int tripleDigitIntB(190);
    int max32IntIntB(std::numeric_limits<int>::max());
    
    int negSingleDigitIntB(-5);
    int negDoubleDigitIntB(-84);
    int negTripleDigitIntB(-128);
    int min32IntB(std::numeric_limits<int>::min());

    float singleDigitFloat = 8.;
    float doubleDigitFloat = 2.3;
    float tripleDigitFloat = 48.9;
    float max32Float = std::numeric_limits<float>::max();

    float negSingleDigitFloat = -8.;
    float negDoubleDigitFloat = -6.5;
    float negTripleDigitFloat = -69.3;
    float min32Float = std::numeric_limits<float>::min();

    double singleDigitDouble = 1.;
    double doubleDigitDouble = 8.3;
    double tripleDigitDouble = 6.04;
    double max32Double = std::numeric_limits<double>::max();

    double negSingleDigitDouble = -5.;
    double negDoubleDigitDouble = -8.0;
    double negTripleDigitDouble = -85.9;
    double min32Double = std::numeric_limits<double>::min();

    double singleDigitDoubleB(1.);
    double doubleDigitDoubleB(8.3);
    double tripleDigitDoubleB(6.04);
    double max32DoubleB(std::numeric_limits<double>::max());

    double negSingleDigitDoubleB(-5.);
    double negDoubleDigitDoubleB(-8.0);
    double negTripleDigitDoubleB(-85.9);
    double min32DoubleB(std::numeric_limits<double>::min());


    std::cout << "Max 32-bit short:  " << maxShort << "\n";
    std::cout << "Min 32-bit short:  " << minShort << "\n";

    std::cout << "Max 32-bit int: " << max32Int << "\n";
    std::cout << "Min 32-bit int: " << min32Int << "\n";

    std::cout << "Max 32-bit float: " << max32Float << "\n";
    std::cout << "Min 32-bit float: " << min32Float << "\n";

    std::cout << "Max 32-bit double: " << max32Double << "\n";
    std::cout << "Min 32-bit double: " << min32Double << "\n";
}
