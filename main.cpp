#include <iostream>

int main(){
    char lista[10][20];
    char cerca [20];
    init (lista);
    init (cerca);
    for (int i=0; i<10; i++){
    cout << "inserisc o nom " << endl;
        cin >> lista [i];}
    cout << "inserisc o nom da cercare" << endl;
    cin >> cerca ;
            int a = ricerca (lista, cerca);
            if (a!=-1) {
                cout << a;
            } else {cout << "non presente" << endl;}
  return 0;
}
