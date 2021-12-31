#include <bits/stdc++.h>
using namespace std;
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5; j++)
        {
            if (j == 1 || j == 5 || i == 3)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }

        for (int j = i; j <= 4; j++)
        {
            cout << " ";
        }
        for (int k = 1; k <= i; k++)
        {
            if (i == 3 && k == 2 || i == 5 && k == 2 || i == 5 && k == 3 || i == 5 && k == 4)
            {
                cout << "  ";
            }
            else
            {
                cout << "* ";
            }
        }
        for (int j = i; j <= 4; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= 5; j++)
        {
            if (i == 1 || j == 1 || i == 3 || (j == 5 && i == 2))
            {
                cout << "* ";
            }

            else
            {
                cout << "  ";
            }
        }
        for (int j = 1; j <= 5; j++)
        {
            if (i == 1 || j == 1 || i == 3 || (j == 5 && i == 2))
            {
                cout << "* ";
            }

            else
            {
                cout << "  ";
            }
        }
        for (int k = 1; k <= 5; k++)
        {
            if (i == 1 && (k == 1 || k == 5))
            {
                cout << "* ";
            }
            else if (i == 2 && (k == 2 || k == 4))
            {
                cout << "* ";
            }
            else if (i >= 3 && k == 3)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
    cout << endl
         << endl;

    for (int i = 1; i <= 5; i++)
    {
        for (int k = 1; k <= 5; k++)
        {
            cout << "  ";
        }
        for (int j = 1; j <= 5; j++)
        {
            if (j == 1 || j == 5 || i == j)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        for (int j = 1; j <= 5; j++)
        {
            if (i == 1 || i == 3 || i == 5 || j == 1)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        for (int j = 1; j <= 5; j++)
        {
            if (j == 1 || j == 5 || (i >= 3) && i + j == 6 || i == 4 && j == 4)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
    cout << endl << endl;

    for (int i = 0; i <= 5; i++)
    {
        //N
        for (int k = 1; k <= 5; k++)
        {
            if (i == 1 && (k == 1 || k == 5))
            {
                cout << "* ";
            }
            else if (i == 2 && (k == 2 || k == 4))
            {
                cout << "* ";
            }
            else if (i >= 3 && k == 3)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        cout << " ";
        //E
        for (int j = 1; j <= 5; j++)
        {
            if (i == 1 || i == 3 || i == 5 || j == 1 and i != 0)
            {
                cout << "* ";
            }
            else
            {
                cout << "  ";
            }
        }
        for (int j = i; j <= 4; j++)
        {
            cout << " ";
        }
        //A
        for (int k = 1; k <= i; k++)
        {
            if (i == 3 && k == 2 || i == 5 && k == 2 || i == 5 && k == 3 || i == 5 && k == 4)
            {
                cout << "  ";
            }
            else
            {
                cout << "* ";
            }
        }
        for (int j = i; j <= 4; j++)
        {
            cout << " ";
        }
        //R
        for (int j = 1; j <= 5; j++)
        {
            if(i == 0){
                continue;
            }
            if (i == 1 || j == 1 || i == 3 || (j == 5 && i == 2) || (j == 5 && i == 5) || (j == 3 && i == 4))
            {
                cout << "* ";
            }

            else
            {
                cout << "  ";
            }
        }
        cout << endl;
    }
}