#include <iostream>
#include "fibonacci.h"
#include <iomanip>
#include <limits>



int main()
{
    int f = 1;  // use float or double instead of int to calculate higher fibonacci numbers
    int fprev = 0;
    int n = 1;

    std :: cout << std::fixed << std::setprecision(17) << fprev << std :: endl;

    do {
        std :: cout << f << "\t  Ratio: " << ratio(f, fprev)
                         << " - Dev[%]: " << ratioDeviation(ratio(f, fprev)) << std :: endl;

        int tmp = fibonacci (f, fprev );
        fprev = f;
        f = tmp ;
        n++;

    } while ( fprev <= f ); // modified here to stop computing Fibonacci numbers beyond the range of int type

    std :: cout << std :: endl ;
    std :: cout << "numeric limit int: " << std :: numeric_limits<int>::max() << std :: endl;
    std :: cout << "overflow count: " << n << std :: endl;

}

