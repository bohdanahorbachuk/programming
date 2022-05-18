#include "Header.h"

int main()
{
    int n;// Please! Try with another number!
    cout << "Input only ONE number 5!!!:  ";
    cin >> n;
    try {
        Square squa(n);
        if (n != 5) {
            throw 404;
        }
        cout << "Result:\nSquare " << squa << " : " << squa.square() << endl;
    }
    catch (int numb) {
        cout << "Eror " << numb << ". Not correct number!" << endl;
    }
    system("pause");
    return 0;
}