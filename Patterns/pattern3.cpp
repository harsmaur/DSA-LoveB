#include <iostream>
using namespace std;

int p1()
{
    int n;
    cout << "Enter number ";
    cin >> n;

    int i = 1;
    // i for number of rows
    while (i <= n)
    {
        int j = 1; // for number of columns
        while (j <= n)
        {
            cout << j;
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}

int p2()
{
    int n;
    cout << "Enter number ";
    cin >> n;

    int i = 1;
    // i for number of rows
    while (i <= n)
    {
        int j = n; // for number of columns
        while (j >= 1)
        {
            cout << j;
            j--;
        }
        cout << endl;
        i++;
    }
    return 0;
}
int p3()
{
    int n;
    cout << "Enter number ";
    cin >> n;

    int i = 1;
    // i for number of rows
    int count = 1;
    while (i <= n)
    {
        int j = 1; // for number of columns
        while (j <= n)
        {
            cout << count << " ";
            count++;
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}

int p4()
{
    int n;
    cout << "Enter number ";
    cin >> n;

    int i = 1;
    // i for number of rows
    while (i <= n)
    {
        int j = 1; // for number of columns
        while (j <= i)
        {
            cout << "*";
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}

int p5()
{
    int n;
    cout << "Enter number ";
    cin >> n;

    int i = 1;
    // i for number of rows
    while (i <= n)
    {
        int j = 1; // for number of columns
        while (j <= i)
        {
            cout << i;
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}

int p6()
{
    int n;
    cout << "Enter number ";
    cin >> n;

    int i = 1;
    int count = 1;
    // i for number of rows
    while (i <= n)
    {
        int j = 1; // for number of columns
        while (j <= i)
        {
            cout << count << " ";
            count++;
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}

// with variable value
int p7()
{
    int n;
    cout << "Enter number ";
    cin >> n;

    int i = 1;
    // i for number of rows
    while (i <= n)
    {
        int value = i;
        int j = 1; // for number of columns
        while (j <= i)
        {
            cout << value << " ";
            value++;
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}
// without variable value
int p7b()
{
    int n;
    cout << "Enter number ";
    cin >> n;

    int i = 1;
    // i for number of rows
    while (i <= n)
    {

        int j = i; // for number of columns
        while (j <= 2 * i)
        {
            cout << j << " ";

            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}

int p8()
{
    int n;
    cout << "Enter number ";
    cin >> n;

    int i = 1;
    // i for number of rows
    while (i <= n)
    {

        int j = 1; // for number of columns
        while (j <= i)
        {
            cout << i - j + 1 << " ";

            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}

int p9()
{
    int n;
    cout << "Enter number ";
    cin >> n;

    int i = 1;
    // i for number of rows
    while (i <= n)
    {

        int j = 1; // for number of columns

        while (j <= n)
        {
            char ch = 'A' + i - 1;
            cout << ch;

            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}

int p10()
{
    int n;
    cout << "Enter number ";
    cin >> n;

    int i = 1;
    // i for number of rows
    while (i <= n)
    {

        int j = 1; // for number of columns

        while (j <= n)
        {
            char ch = 'A' + j - 1;
            cout << ch;

            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}

int p11()
{
    int n;
    cout << "Enter number ";
    cin >> n;

    int i = 1;
    // i for number of rows
    char start = 'A';
    while (i <= n)
    {

        int j = 1; // for number of columns

        while (j <= n)
        {

            cout << start;
            start++;
            j++;
        }
        cout << endl;
        i++;
    }
    return 0;
}

int p12()
{
    int n;
    cout << "Enter number ";
    cin >> n;

    int i = 1;
    // i for number of rows
    while (i <= n)
    {

        int j = 1; // for number of columns

        while (j <= n)
        {
            char ch = 'A' + i + j - 2;
            cout << ch;

            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}
int p13()
{
    int n;
    cout << "Enter number ";
    cin >> n;

    int i = 1;
    // i for number of rows
    while (i <= n)
    {

        int j = 1; // for number of columns

        while (j <= i)
        {
            char ch = 'A' + i - 1;
            cout << ch;

            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}

int p14()
{
    int n;
    cout << "Enter number ";
    cin >> n;

    int i = 1;
    char value = 'A';
    // i for number of rows
    while (i <= n)
    {

        int j = 1; // for number of columns

        while (j <= i)
        {

            cout << value;
            value++;

            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}
int p15()
{
    int n;
    cout << "Enter number ";
    cin >> n;

    int i = 1;
    // i for number of rows
    while (i <= n)
    {

        int j = 1; // for number of columns

        while (j <= i)
        {
            char ch = 'D' + i + j - 2;
            cout << ch;

            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}

int p16()
{
    int n;
    cout << "Enter number ";
    cin >> n;

    int i = 1;
    // i for number of rows
    while (i <= n)
    {

        int j = 1; // for number of columns
        char start = 'A' + n - i;
        while (j <= i)
        {

            cout << start;
            start++;
            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}

int p17()
{
    int n;
    cout << "Enter number ";
    cin >> n;

    int i = 1;
    // i for number of rows
    while (i <= n)
    {
        // print spaces
        int space = n - i;
        while (space)
        {
            cout << " ";
            space--;
        }
        // print stars
        int j = 1; // for number of columns

        while (j <= i)
        {

            cout << "*";

            j++;
        }
        cout << endl;
        i++;
    }

    return 0;
}

int p18()
{
    int n;
    cout << "Enter number ";
    cin >> n;

    int i = 1;
    // i for number of rows
    while (i <= n)
    {

        // print stars
        int j = n; // for number of columns

        while (j >= i)
        {

            cout << "*";

            j--;
        }
        cout << endl;
        i++;
    }

    return 0;
}

int p19()
{
    int n;
    cout << "Enter number ";
    cin >> n;

    int i = 1;
    // i for number of rows
    while (i <= n)
    {
        // print spaces
        int space = i - 1;
        while (space)
        {
            cout << "-";
            space--;
        }
        // print stars
        int j = n; // for number of columns

        while (j >= i)
        {

            cout << "*";

            j--;
        }
        cout << endl;
        i++;
    }

    return 0;
}
int p20()
{
    int n;
    cout << "Enter number " << endl;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        // print spaces
        int space = i - 1;
        while (space)
        {
            cout << " ";
            space--;
        }

        // print numbers
        int j = n;
        while (j >= i)
        {
            cout <<i;
            j--;
        }
        cout<<endl;
        i++;
    }
    return 0;
}

int p21()
{
    int n;
    cout << "Enter number " << endl;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        // print spaces
        int space = n - i;
        while (space)
        {
            cout << " ";
            space--;
        }

        // print numbers
        int j = 1;
        while (j <= i)
        {
            cout <<i;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}

int p22()
{
    int n;
    cout << "Enter number " << endl;
    cin >> n;
    int i = 1;
    int value = 1;
    while (i <= n)
    {
        // print spaces
        int space = n - i;
        while (space)
        {
            cout << " ";
            space--;
        }

        // print numbers
        int j = 1;
        while (j <= i)
        {
            cout<<value;
            value++;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}

int p23()
{
    int n;
    cout << "Enter number " << endl;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        // print spaces
        int space = n - i;
        while (space)
        {
            cout << " ";
            space--;
        }

        // print first triangle numbers
        int j = 1;
        while (j <= i)
        {
            cout <<j;
            j++;
        }
        //print second triangle numbers
        int k = i-1;
         while(k)
        {
            cout<<k;
            k--;
        }
        cout<<endl;
        i++;
    }
    return 0;
}

int p24()
{
    int n;
    cout << "Enter number " << endl;
    cin >> n;
    int i = 1;
    while (i <= n)
    {
        

        // print first triangle numbers
        int j = n;
        while (j >= i)
        {
            cout <<j;
            j--;
        }
        // //print second triangle numbers
        // int k = i-1;
        //  while(k)
        // {
        //     cout<<k;
        //     k--;
        // }
        cout<<endl;
        // i++;
    }
    return 0;
}
int main()
{

    //  p1();
    //  p2();
    // p3();
    // p4();
    // p5();
    // p6();
    // p7();
    // p7b();
    // p8();
    // p9();
    // p10();
    // p11();
    // p12();
    // p13();
    // p14();
    // p15();
    // p16();
    // p17();
    // p18();
    // p19();
    // p20();
    // p21();
    // p22();
    // p23();
    p24();
    return 0;
}