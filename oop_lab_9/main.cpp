#include <iostream>
#include <string>
#include <fstream>
#include <windows.h>
using namespace std;

class Note {
private:
    string date;
    string information;
    char line;
public:
    Note() {};

    Note(string date, string information, char line) : date(date), information(information), line(line) {
    };

    friend ostream &operator<<(ostream &str, Note &note) {
        str << note.date<<note.date;
        return str;
    }
    void setInfo(){
        fflush(stdin);
        getline(cin,information);
    }
    friend istream &operator>>(istream &str, Note &note) {
        str >> note.date;
        return str;
    }

    void WriteFile(ostream &out) {
        out << date << " " << information << endl;
    }

    bool PrintFile(istream &in, int count) {
        in.seekg(count, ios::beg);
        if (in.get(line))
            return true;
        else { return false; }
    }

    void print() {
        cout << date << " " << information << endl;

    }

    string getInforamtion() {
        return information;
    }

    char getLine() {
        return line;
    }

    string getDate() {
        return date;
    }

    void clear() {
        information = "";
        date = "";
    }

    void setDate() {
        date += line;
    }

    void setInformation() {

        information += line;
    }
};

int main() {
    SetConsoleOutputCP(CP_UTF8);
    setlocale(LC_ALL, "ru_RU.UTF-8");
    int count = 0;
    string str;
    int search;
    cout<<"Запись в файл-1"<<endl;
    cout<<"Вывести файл -2"<<endl;
    cout<<"поиск и удаление-3"<<endl;
    cin>>search;
    switch (search) {
        case 1 :{
            Note note(" "," ", ' ');
            cout<<"Ведите дату записи "<<endl;
            cin>>note;
            cout<<"Введите информацию";
            note.setInfo();
            ofstream f2("file.txt",ios::app);
            note.WriteFile(f2);
            f2.close();
            break;
        }
        case 2:{
            Note n;
            ifstream f1("file.txt");
            while(n.PrintFile(f1,count)) {
                f1.seekg(count, ios::beg);
                n.clear();
                while (n.PrintFile(f1,count)) {
                    count++;
                    if (n.getLine() == ' ') {
                        break;
                    }
                    n.setDate();

                }
                f1.seekg(count, ios::beg);
                while (n.PrintFile(f1,count)) {
                    count++;
                    if (n.getLine() == '\n') {
                        count++;
                        break;
                    }
                    n.setInformation();
                }
                n.print();
            }
            f1.close();
            break;
        }
        case 3: {
                    string path="file1.bin";
                    cout<<"Для поиска введите дату"<<endl;
                    string date;
                    try {
                        int count_1=0;
                        Note l;
                        fflush(stdin);
                        getline(cin,date);
                        ifstream f4("file.txt");
                        ofstream f3;
                        f3.open((path), ios::binary);
                        if (!f3.is_open())
                            throw 1;

                        bool check = true;
                       B: while (l.PrintFile(f4, count_1)) {
                                f4.seekg(count_1, ios::beg);
                                l.clear();
                                while (l.PrintFile(f4, count_1)) {
                                    count_1++;
                                    if (l.getLine() == ' ') {
                                        break;
                                    }
                                    l.setDate();

                                }
                                f4.seekg(count_1, ios::beg);
                                while (l.PrintFile(f4, count_1)) {
                                    count_1++;
                                    if (l.getLine() == '\n') {
                                        count_1++;
                                        break;
                                    }
                                    l.setInformation();
                                }

                                if (l.getDate() == date) {
                                    cout << "Found" << endl;
                                    l.print();
                                    l.clear();
                                    check = false;
                                    goto B;


                                }
                                l.WriteFile(f3);

                        }
                        if (check) {
                            cout << "Nothing found";
                        }
                        f3.close();
                        f4.close();
                    }
                    catch(...){
                        cerr<<"Worning!";
                    }
        }
    }

    return 0;

}

