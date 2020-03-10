# include <iostream >

int * allocateArray ( const int length )
{
    int * temp = new int [ length ];
    return temp ;
}

 int main ()
{
    /*
    int * pointToAnInt = new int ;
    //pointToAnInt = 9;
    std :: cout << " The value at pointToAnInt : " << *pointToAnInt << std::endl;
    delete pointToAnInt ;
    int *pointToAnInt = new int ;
    int * pNumberCopy = pointToAnInt ;
    * pNumberCopy = 30;
    std :: cout << * pointToAnInt ;
    delete pNumberCopy ;
    delete pointToAnInt ; */
    int x[4];


    std::cout << x << std::endl;
    int* y = allocateArray(x[3]);
    std::cout << *y << std::endl;

    /*int array [5] { 0, 1, 2, 3 };
    for ( int count = 0; count <= 5; ++ count ){
        std :: cout << array [ count ] << " ";
    }*/

    return 0;
}
