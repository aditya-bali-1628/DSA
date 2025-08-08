#include <iostream>
#include <stdlib.h>

using namespace std;

class implementing
{
    int totalsiaze;
    int usedsize;
    int *ptr;
    int n;

public:
    implementing(int tot, int useds)
    {
        totalsiaze = tot;
        usedsize = useds;
        ptr = new int[tot];
    }

    void shownumber()
    {
        for (int i = 0; i < usedsize; i++)
        {
            cout << ptr[i] << endl;
        }
    }

    
};

int main()
{

    implementing orderS(100, 2);
    orderS.shownumber();
    return 0;
}