#include <iostream>
#include <iomanip>

using namespace std;

void create(int* r)
{
    int MIN = 4;
    int MAX = 68;
    for (int i = 0; i < 23; i++)
    {
        r[i] = MIN + rand() % (MAX - MIN + 1);
    }
}

void Print(int* r)
{
    for (int i = 0; i < 23; i++)
        cout << setw(4) << r[i];
    cout << endl;
}

int sum(int* r)
{
    int sum = 0;
    for (int i = 0; i < 23; i++)
    {
        if (!(r[i] % 2 == 0 || r[i] % 13 == 0))
            sum += r[i];
    }
    return sum;

}
int count(int* r)
{
    int count = 0;
    for (int i = 0; i < 23; i++)
    {
        if (!(r[i] % 2 == 0 || r[i] % 13 == 0))
            count++;
    }
    return count;
}

void updateArray(int* r)
{
    for (int i = 0; i < 23; i++)
    {
        if (!(r[i] % 2 == 0 || r[i] % 13 == 0))
        {
            r[i] = 0;
        }
    }
}


int main()
{
    srand((unsigned)time(NULL));

    ;
    int r[23];
    create(r);
    Print(r);
    cout << endl;
    cout << "sum = " << sum(r) << endl;
 
    cout << "count = " << count(r) << endl;
   updateArray(r);
    Print(r);
    return 0;
}