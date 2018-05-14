#include <iostream>

using namespace std;

int main()
{
    long input;
    while (cin >> input)
    {
        while (input != 1)
        {
            for (int i = 2; i <= input; i++)
            {
                if (input % i == 0)
                {
                   input=input/i;
                   cout << i << ' ';
                    break;
                }

            }
        }

    }



    return 0;
}
