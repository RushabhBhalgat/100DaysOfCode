#include <iostream>
using namespace std;

void pattern1(int n){
	int i;
    int j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern2(int n){
    int i;
    int j;
    for (i = 0; i < n; i++)
    {
        for (j = 0; j <= i; j++)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern3(int n){
    int i;
    int j;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << endl;
    }
}

void pattern4(int n){
    int i;
    int j;
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
}

void pattern5(int n){
    int i;
    int j;
    for (i = 0; i < n; i++)
    {
        for (j = n; j > i; j--)
        {
            cout << "* ";
        }
        cout << endl;
    }
}

void pattern6(int n){
    int i;
    int j;
    for (i = 0; i < n; i++)
    {
        for (j = n; j > i; j--)
        {
            cout << n-j+1 << " ";
        }
        cout << endl;
    }
}

void pattern7(int n){
    int i;
    int j;
    for (i = 0; i < n; i++)
    {
        for (j =0; j<n-i-1; j++)
        {
            cout << " ";
        }

        for (j=0;j< 2*i+1;j++)
        {
            cout << "*";
        }

        for (j =0; j<n-i-1; j++)
        {
            cout << " ";
        }

        cout << endl;
    }
}

int main (){
    while (true)
    {
        cout << "Enter the pattern to be printed: ";
        int pattern;
        cin >> pattern;
        int iterations;
        switch (pattern){
            case 1:
                cout << "Enter the number of iterations for the pattern ";
                cin >> iterations;
                pattern1(iterations);
            
            case 2:
                cout << "Enter the number of iterations for the pattern ";
                cin >> iterations;
                pattern2(iterations);

            case 3:
                cout << "Enter the number of iterations for the pattern ";
                cin >> iterations;
                pattern3(iterations);

            case 4:
                cout << "Enter the number of iterations for the pattern ";
                cin >> iterations;
                pattern4(iterations);

            case 5:
                cout << "Enter the number of iterations for the pattern ";
                cin >> iterations;
                pattern5(iterations);

            case 6:
                cout << "Enter the number of iterations for the pattern ";
                cin >> iterations;
                pattern6(iterations);

            case 7:
                cout << "Enter the number of iterations for the pattern ";
                cin >> iterations;
                pattern7(iterations);
        }
    }

    return 0;
}