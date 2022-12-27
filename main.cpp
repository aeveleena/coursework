#include <iostream>
#include <iomanip>
#include <windows.h>
#include "modules/pract1ce.h"
#include "modules/practice2.h"
#include "modules/practic3.h"
#include "modules/pr4ctice.h"
using namespace std;

int main() {
    SetConsoleOutputCP(CP_UTF8);
    cout << "\tсписок практических работ\n 1. типы данных и их внутреннее представление в памяти\n" <<
    " 2. одномерные статические массивы\n 3. двумерные статические массивы. указатели\n" <<
    " 4. строки и работа с ними\n\n";
    int action, YorN = 1;
    while (YorN) {
        cout << "выберите, какую практическую работу запустить: ";
        cin >> action;
        switch (action) {
            case 1: {
                pract1ce();
            }break;
            case 2: {
                practice2();
            }break;
            case 3: {
                practic3();
            }break;
            case 4: {
                pr4ctice();
            }break;
            default: {
                cout << "\n нет такого";
            }break;
        }
        cout << "\n следующая практическая? (1 - да, 0 - нет)" << endl;
        cin >> YorN;
        cout << "\n";
    }
    return 0;
}
