// Bisection Search Square Root
// Charles Truscott Watters

/* Enter a number: 25
Guess: 12.5 High: 25 Low: 0 Guess Squared: 156.25
Guess: 6 High: 12 Low: 0 Guess Squared: 36
Guess: 3 High: 6 Low: 0 Guess Squared: 9
Guess: 4.5 High: 6 Low: 3 Guess Squared: 20.25
The square root of 25.000000 is 5.000000
C:\Users\Charles_Truscott\source\repos\C++_Bisection_Search_Test\Debug\C++_Bisection_Search_Test.exe (process 8080) exited with code 0.
To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
Press any key to close this window . . .

*/

/* Enter a number: 100
Guess: 50 High: 100 Low: 0 Guess Squared: 2500
Guess: 25 High: 50 Low: 0 Guess Squared: 625
Guess: 12.5 High: 25 Low: 0 Guess Squared: 156.25
Guess: 6.25 High: 12.5 Low: 0 Guess Squared: 39.0625
Guess: 9.375 High: 12.5 Low: 6.25 Guess Squared: 87.8906
Guess: 10.9375 High: 12.5 Low: 9.375 Guess Squared: 119.629
Guess: 10.1562 High: 10.9375 Low: 9.375 Guess Squared: 103.149
Guess: 9.76562 High: 10.1562 Low: 9.375 Guess Squared: 95.3674
Guess: 9.96094 High: 10.1562 Low: 9.76562 Guess Squared: 99.2203
Guess: 10.0586 High: 10.1562 Low: 9.96094 Guess Squared: 101.175
The square root of 100.000000 is 10.000000
C:\Users\Charles_Truscott\source\repos\C++_Bisection_Search_Test\Debug\C++_Bisection_Search_Test.exe (process 4844) exited with code 0.
To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
Press any key to close this window . . .

*/

/* 
Enter a number: 666
Guess: 333 High: 666 Low: 0 Guess Squared: 110889
Guess: 166.5 High: 333 Low: 0 Guess Squared: 27722.2
Guess: 83.25 High: 166.5 Low: 0 Guess Squared: 6930.56
Guess: 41.625 High: 83.25 Low: 0 Guess Squared: 1732.64
Guess: 20.8125 High: 41.625 Low: 0 Guess Squared: 433.16
Guess: 31.2188 High: 41.625 Low: 20.8125 Guess Squared: 974.61
Guess: 26.0156 High: 31.2188 Low: 20.8125 Guess Squared: 676.813
Guess: 23.4141 High: 26.0156 Low: 20.8125 Guess Squared: 548.218
Guess: 24.7148 High: 26.0156 Low: 23.4141 Guess Squared: 610.824
Guess: 25.3652 High: 26.0156 Low: 24.7148 Guess Squared: 643.395
Guess: 25.6904 High: 26.0156 Low: 25.3652 Guess Squared: 659.998
Guess: 25.853 High: 26.0156 Low: 25.6904 Guess Squared: 668.379
Guess: 25.7717 High: 25.853 Low: 25.6904 Guess Squared: 664.182
The square root of 666.000000 is 25.812378
25.812378 squared is 666.278854

C:\Users\Charles_Truscott\source\repos\BisectionSquareRoot\Debug\BisectionSquareRoot.exe (process 7840) exited with code 0.
To automatically close the console when debugging stops, enable Tools->Options->Debugging->Automatically close the console when debugging stops.
Press any key to close this window . . .




*/

#include <iostream>
#include <climits>
#include <math.h>
#include <float.h>
using std::cout;
using std::cin;
using std::endl;

int main()
{
    long double high = 0;
    long double low = 0;
    cout << "Enter a number: ";
    cin >> high;
    high = (long double)high;
    long double square = high;
    long double guess = ((high + low) / 2.0);
    long double epsilon = 0.000001;
    while ((round(abs((guess * guess))) != square)) {
        cout << "Guess: " << guess << " " << "High: " << high << " " << "Low: " << low << " " << "Guess Squared: " << guess * guess << endl;
        if ((guess * guess) > square) {
            high = guess;
        }
        if ((guess * guess) < square) {
            low = guess;
        }
        guess = ((high + low) / 2.0);
    }
    printf("The square root of %lf is %lf\n", round(square), guess);
    printf("%lf squared is %lf\n", guess, guess * guess);
}

// Charles Truscott Watters, Bisection Search
