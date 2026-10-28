#include <iostream>
using namespace std;

class Matrix
{
private:
    int a[2][2];

public:
    // Function to input matrix
    void getMatrix()
    {
        cout << "Enter elements of matrix:" << endl;

        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                cin >> a[i][j];
            }
        }
    }

    // Function to display matrix
    void display()
    {
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                cout << a[i][j] << " ";
            }
            cout << endl;
        }
    }

    // Overloading + operator
    Matrix operator+(Matrix m)
    {
        Matrix temp;

        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                temp.a[i][j] = a[i][j] + m.a[i][j];
            }
        }

        return temp;
    }

    // Overloading - operator
    Matrix operator-(Matrix m)
    {
        Matrix temp;

        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                temp.a[i][j] = a[i][j] - m.a[i][j];
            }
        }

        return temp;
    }

    // Overloading == operator
    bool operator==(Matrix m)
    {
        for (int i = 0; i < 2; i++)
        {
            for (int j = 0; j < 2; j++)
            {
                if (a[i][j] != m.a[i][j])
                    return false;
            }
        }

        return true;
    }
};

int main()
{
    Matrix m1, m2, addition, subtraction;

    cout << "Enter elements of first matrix:" << endl;
    m1.getMatrix();

    cout << "\nEnter elements of second matrix:" << endl;
    m2.getMatrix();

    // Matrix addition
    addition = m1 + m2;

    cout << "\nMatrix Addition:" << endl;
    addition.display();

    // Matrix subtraction
    subtraction = m1 - m2;

    cout << "\nMatrix Subtraction:" << endl;
    subtraction.display();

    // Matrix comparison
    if (m1 == m2)
        cout << "\nBoth matrices are equal." << endl;
    else
        cout << "\nBoth matrices are not equal." << endl;

    return 0;
}
