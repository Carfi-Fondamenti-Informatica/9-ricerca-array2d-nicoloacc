#include <iostream>

int main(){
    char lista[10][20];
    int selezione = 0;
    int num = 0;
    while (true) {
        cout << "1: inserimento " << endl;
        cout << "2: stampa " << endl;
        cout << "6: exit " << endl;
        cin >> selezione;
        switch (selezione) {
            case 1:
                inserimento(lista, num);
                break;
            case 2:
                //stampa(lista);
                break;
            case 3:
                return 0;
            default:
                cout << "inculati" << endl;
        }
    }
  return 0;
}
