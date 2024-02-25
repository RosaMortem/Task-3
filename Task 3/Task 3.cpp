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
    
    int sizeArr = 0;
    int sizeRes = 0;
    int *arr = new int[size];
    int *resArr = new int[sizeRes];
    int num;
    while (in >> num) {
        size++;
        arr[size-1] = num;
    }
    for (int i = 0; i < size; i++){
        int temp = arr[i];
        for (int j = 0; j < sizeRes; j++) {
            if (temp == resArr[j]) { 
                inCount++;      //Проверка, было ли уже выбрано число для выноса в ответ или нет
            }
        }
        if (inCount == 0) {
            size++;             //Расширение динамического массива и добавление в него нового элемента
            resArr[sizeRes - 1] = temp; 
        }
    }
    for (int i = 0; i < size; i++) {
        out << resArr[i] << " ";
    }  
    in.close();
    out.close();

    return 0;
}
