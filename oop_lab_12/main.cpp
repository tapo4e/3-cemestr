#include <iostream>
#include <fstream>
#include <windows.h>

using namespace std;

int main() {
    string a;

    SetConsoleOutputCP(CP_UTF8);
    setlocale(LC_ALL, "ru_RU.UTF-8");
    int check_counter=0;
    char check[256];
    char input = 0;
    cout<<"1-Добавить, 2-Поиск"<<endl;
    cin >> input;
    string str;
    int count = 0;
    int counter = 0;
    switch (input) {
        case '1' : {

            ofstream o("file.txt", ios::app);
            cout << "Введите информацию";
            cin >> str;
            o << str << endl;
            o.close();
            break;
        }
        case '2' : {
            ifstream i("file.txt");
            cout<<"Ввод символа"<<endl;
            cin >> check;
            ofstream o("file1.txt",ios::app);
            while (!i.eof()) {
                getline(i, str);
                int s = 0;
                while (s < str.size()) {
                    if (str[s] == ' ') {
                        check_counter=0;
                        a.assign(str, counter, s - counter);
                        counter = s;
                        counter++;
                        cout << a << endl;
                        for (char l: a) {
                            for (int h = 0; h < strlen(check); h++) {
                                if (l != check[h]) {
                                    check_counter++;
                                }
                            }
                        }
                        if (check_counter == a.size()*strlen(check)) {
                            o<<a<<endl;
                            count++;
                        }
                    }
                    if (s == str.size() - 1) {
                        check_counter = 0;
                        a.assign(str, counter, str.size() - counter);
                        counter = 0;
                        cout << a << endl;
                        for (char l: a) {
                            for (int h = 0; h < strlen(check); h++) {
                                if (l != check[h]) {
                                    check_counter++;
                                }
                            }
                        }
                        if (check_counter == a.size()*strlen(check)) {
                            o<<a<<endl;
                            count++;
                        }
                    }
                    s++;
                }


            }

            cout << count;
            i.close();
            o.close();
            break;


        }
    }
    return 0;

}
