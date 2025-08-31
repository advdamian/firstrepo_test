#include <iostream>
using namespace std;

class Calculator {
public:
    double adunare(double a, double b) {
        return a+b;
    }
    double scadere(double a, double b) {
        return a-b;
    }
    double impartire(double a, double b) {
        if (b==0) {
            cout<<"Nu se poate imparti la 0!"<<endl;
            return 0;
        }
        return a/b;
    }
    double inmultire(double a, double b) {
        return a*b;
    }
    double putere(double a, double b) {
        double rezultat = 1;
        for (int i=0; i<b; i++) {
            rezultat *=a;
        }
        return rezultat;
    }

    void operatie() {
        double a, b;
        char op;
        cout << "Introduceti expresia: ";
        cin>>a>>op>>b;
        switch (op) {
            case '+':
                cout<<"Rezultat: "<<adunare(a, b)<<endl;
                break;
            case '-':
                cout<<"Rezultat: "<<scadere(a, b)<<endl;
                break;
            case '*':
                cout<<"Rezultat: "<<inmultire(a, b)<<endl;
                break;
            case '/':
                cout<<"Rezultat: "<<impartire(a, b)<<endl;
                break;
            case '^':
                cout<<"Rezultat: "<<putere(a, b)<<endl;
                break;
            default:
                cout<<"Operator invalid!" <<endl;
                break;
        }
    }
};

int main() {
    Calculator calc;
    char again;
    do {
        calc.operatie();
        cout<<"Doriti sa efectuati o alta operatie? (y/n): ";
        cin>>again;
    } while (again =='y' || again =='Y');
    if (again =='n' || again =='N') {
        cout<<"La revedere!"<<endl;
    } else {
        cout<<"Raspuns invalid. Se inchide."<<endl;
    }
    return 0;
}