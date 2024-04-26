
#include <iostream>
using namespace std;
int Specialization[100];
string name[100];
string st[100];
int a = 0;
int e = 1;
void Add_patient(int specialization ,string nam, int statis) {
    if (specialization >= 1 && specialization <= 20) {
        Specialization[a] = specialization;
    }
    name[a] = nam;
    if (statis == 0) {
        st[a] = "regular";
    }
    else if(statis == 1) {
        st[a] = "urgent";
    }
}
void print_all() {
    for (int i = 0; i < 100; i++) {
        if (Specialization[i] == 0) {
            break;
        }
        else
        {
            cout << Specialization[i] << "  " << name[i] << "  " << st[i] << endl;
            continue;
        }
    }

    cout<<"Plese press a the enter to continue:";
    char cont;cin>>cont;
}
void Get_next_patient( int specialization) {
    for (int i = 0; i < 100; i++) {
        if (Specialization[i] == specialization) {
            cout << name[i] <<"  " << "please go with the Dr " << endl << endl;
            break;
        }
        else if (Specialization[i]==0) {
            cout << " No patient at the moment . Have rest , Dr" << endl << endl;
            break;
        }
    }

}
void Exit() {
    e = 0;
}
void menu() {
    cout << "***********************" << endl;
    cout << " Enter your choice." << endl;
    cout << " 1) Add new patient." << endl;
    cout << " 2) Print  all patients." << endl;
    cout << " 3) get next patient. " << endl;
    cout << " 4) Exit." << endl;
    int num;
    cin >> num;
    cout << "***********************" << endl;
    if (num == 1){

        cout << "Enter specialization , name , statis :" << endl;
        int x, y;
        string z;
        cin >> x >> z >> y;
        if (a>=0){
            Add_patient(x, z, y);
            a++;
        }

    }
    else if (num == 2) {
        print_all();
    }
    else if (num == 3) {
        cout << "Enter specialization : ";
        int s;
        cin >> s;
        Get_next_patient(s);
    }
    else if (num == 4) {
        e = 0;
    }
    else {
        cout << " Enter correct num" << endl << endl << endl;
        menu();
    }
}

int main()
{
    while (true)
    {
        menu();
    }
}