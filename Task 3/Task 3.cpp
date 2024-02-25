#include <iostream>
#include <fstream>
#include <iterator>

using namespace std;

int main() {
    ifstream in("f1.txt");              //Подключаем ввод и вывод из файлов
    ofstream out("f2.txt");
    
    if (!in) {
        cerr << "Error opening input file" << endl;
        return 1;
    }                                  //Проверки на ошибки ввода и вывода
    if (!out) {
        cerr << "Error opening output file" << endl;
        return 1;
    }

    int prev_num = -1;
    bool first = true;
    int num;
    while (in >> num) {
        if (num != prev_num || first) {
            out << num << endl;        //Считываем данные из файла и неповторяющиеся выводим в файл
            first = false;
        }
        prev_num = num;
    }

    in.close();
    out.close();

    return 0;
}
