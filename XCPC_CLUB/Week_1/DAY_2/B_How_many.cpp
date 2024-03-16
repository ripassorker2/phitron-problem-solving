#include <iostream>
using namespace std;

int main()
{
    int n1, n2;
    cin >> n1 >> n2;
    int count = 0;

    for (int a = 0; a <= n1; a++)
    {
        for (int b = 0; b <= n1; b++)
        {
            for (int c = 0; c <= n1; c++)
            {
                if (a + b + c <= n1 && a * b * c <= n2)
                    count++;
            }
        }
    }

    cout << count << endl;
    return 0;
}