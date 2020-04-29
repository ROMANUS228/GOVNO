#include <iostream>
#include <string>
#include <fstream>
#include <cstring>
#include <sstream>
using namespace std;

//ex1(2)
//void foo(int mas[], int temp) {
//	int min = 0;
//	for (int i = 1; i < temp; i++)
//		if (abs(abs(mas[i] + mas[i + 1]) / 2 - mas[0]) < abs(abs(mas[min] + mas[min + 1]) / 2 - mas[0])) min = i;
//	cout << mas[min] << " and " << mas[min + 1] << endl;
//}
//int main()
//{
//	string path = "myFile.txt";
//	ifstream fin(path);
//
//	int mas[99];
//	
//	int temp = 0;
//
//	if (fin.is_open()) {
//		cout << "File is open" << endl;
//		while (!fin.eof()) {
//
//			fin >> mas[temp];
//			if(mas[temp]!=0){
//				temp++;
//			}
//			
//		}
//	}
//	else {
//		cout << "ERROR";
//	}
//fin.close();
//	foo(mas, temp);
//	return 0;
//}

//EX2 

//int main() {
//	int NumMinStr = 0;
//	int MinStr = 0;
//	int MaxStr = 0;
//	int Symbols = 0;
//	int FileSize = 0;
//	int NumStr = 1;
//	int s = 0;
//
//	string path = "message.txt";
//	ifstream fin(path);
//
//	char str[999];
//	if (!fin.is_open()) {
//		cout << "Error";
//	}
//	else {
//		cout << "File is open" << endl;
//		int max = 0;
//		int min = 999;
//		int minJ = 0;
//		int i = 0;
//		int maxI = 0;
//		while (!fin.eof()) {
//
//			fin >> str;
//			FileSize = FileSize + strlen(str);
//			i++;
//			if (strlen(str) > max) {
//				max = strlen(str);
//				maxI = i;
//			}
//			if (strlen(str) < min) {
//				min = strlen(str);
//				minJ = i;
//			}
//
//		}
//		Symbols = FileSize;
//		NumStr = i; //Подсчет строк
//		FileSize = FileSize + (i - 1) * 2;//Подсчет размера файла
//		NumMinStr = minJ;
//		MaxStr = maxI;
//		MinStr = min;
//
//		cout << "File size: " << FileSize << " bytes" << endl;
//		cout << "Number of lines: " << NumStr << endl;
//		cout << "Number of Symbols: " << Symbols << endl;
//		cout << "Number of the longest line: " << MaxStr << endl;
//		cout << "Number of the shortest line and lenght: " << NumMinStr << " " << MinStr << endl;
//		fin.close();
//		return 0;
//	}

//Ex3

//void foo(int n,string path, string newPath) {
//	ifstream finOutput2(path);
//	ofstream foutOutput2(newPath);
//	if (finOutput2.is_open()) {
//		string str;
//		getline(finOutput2, str);
//		if (str.length() > n) {
//			if (foutOutput2.is_open()) {
//				foutOutput2 << str << " " << str.length() << endl;
//			}
//			else {
//				cout << "Error";
//			}
//		}
//	}
//}
//int main() {
//	string newPath = "output1.txt";
//	string newPath2 = "output2.txt";
//	string path = "input.txt";
//	ifstream fin(path);
//	ofstream output1;
//	output1.open(newPath);
//
//	string str;
//	int i = 0;
//
//	if (fin.is_open()) {
//		cout << "File is open" << endl;
//		while (!fin.eof()) {
//			getline(fin,str);
//			i++;
//			if (output1.is_open()) {
//				cout << "File " << newPath << " is open";
//				output1 << str << " " << i << " " << str.length() << endl;
//			}
//			else {
//				cout << "Error";
//			}
//		}
//	}
//	else {
//		cout << "Error";
//	}
//	
//	int n;
//	cout << "Enter numeber: ";
//	cin >> n;
//	foo(n, path, newPath2);
//fin.close();
//output1.close();
//	return 0;
//}

//ex4

//bool check(int* mas, int n) {
//	int temp = 0;
//	for (int i = 0; i < n; i++) {
//		if (mas[i] < mas[i + 1]) {
//			temp++;
//		}
//	}
//	if (temp == n-1) {
//		return true;
//	}
//	else {
//		return false;
//	}
//}
//
//
//int main() {
//	string path = "input.txt";
//	string path2 = "output1.txt";
//	ifstream fin(path);
//	ofstream fout(path2);
//	int i = 0;
//	int* mas = new int[99];
//	if (fin.is_open()) {
//		cout << "File is open" << endl;
//		while (!fin.eof()) {
//			fin >> mas[i];
//			i++;
//			if (fin.get() == '\n') {
//				for (int j = 0; j < i; j++) {
//					cout << mas[j] << " ";
//				}
//				if (check(mas, i)) {
//					for (int j = 0; j < i; j++) {
//						fout << mas[j] << " ";
//						
//					}
//					fout << '\n';
//					
//				}
//				i = 0;
//			}
//		}
//		if (check(mas, i)) {
//			for (int j = 0; j < i; j++) {
//				fout << mas[j] << " ";
//			}
//		}
//	}
//	else {
//		cout << "Error";
//	}
//	fin.close();
//
//	return 0;
//}

//ex 6(3)

struct students {
	struct FIO {
		string SurName;
		string Name;
		string SecondName;
	};
	FIO  FIO;
	int Age;
	char Pol;
	int Course;
	double Rate;

	string getSurname() {
		return FIO.SurName;
	}
	string getFIO() {
		return FIO.SurName + " " + FIO.Name + " " + FIO.SecondName;
	}
	int getAge() {
		return Age;
	}
	char getPol() {
		return Pol;
	}
	int getCourse() {
		return Course;
	}
	double getRate() {
		return Rate;
	}
	students() {
		
	}
	students(string _surname, string _name, string _secondname, int _age, char _pol, int _course, double _rate) {
		FIO.SurName = _surname;
		FIO.Name = _name;
		FIO.SecondName = _secondname;
		Age = _age;
		Pol = _pol;
		Course = _course;
		Rate = _rate;
	}
	~students() {
		cout << "End of program";
	}

	bool SearchFIO(char S) {
		if (FIO.SurName[0] == S) {
			return true;
		}
		else {
			return false;
		}
	}
};

void search(students** mas, int n) {
	char Sym;
	cin >> Sym;
	for (int j = 0; j < n; j++) {
		if (mas[j]->SearchFIO(tolower(Sym)) || mas[j]->SearchFIO(toupper(Sym))) {
			cout << mas[j]->FIO.SurName << endl;
		}
	}
}
void print(students** mas, int n) {
	for (int i = 0; i < n; i++) {
		cout << mas[i]->getFIO() << " " << mas[i]->getAge() << " " << mas[i]->getPol() << " " << mas[i]->getCourse()<<" " << mas[i]->getRate() << endl;
	}
}
int addInfo(students** mas, int n,string path) {
	cout << "Eneter number of adding students: ";
	int Num;
	cin >> Num;

	ofstream fout(path,ios::app);
	if (!fout.is_open()) {
		cout << "Error";
	}
	else {
		cout << "Adding start" << endl;
		for (int i = n ; i < n + Num; i++) {
			string surname, name, secondname;
			int age, course;
			double rate;
			char pol;
			cout << "Enter: " << endl << " FIO: ";
			cin >> surname >> name >> secondname;
			cout << endl<<"Age: ";
			cin >> age;
			cout <<endl<< "Pol: ";
			cin >> pol;
			cout << endl << "Course: ";
			cin >> course;
			cout << endl << "Rate: ";
			cin >> rate;
			mas[i] = new students(surname, name, secondname, age, pol, course, rate);
			fout <<'\n'<< mas[i]->getFIO() << " " << mas[i]->getAge() << " " << mas[i]->getPol() << " " << mas[i]->getCourse() << " "<<mas[i]->getRate();
		}

	}
	return Num + n;
}
void edit(students** mas,int n) {
	int k;
	cout << "Enter number of edit student: ";
	cin >> k;
	int c;
	do {
		cout << "1 - Edit" << endl << "2 - Delete" << endl << ": ";
		cin >> c;
	} while (c < 0 || c> 2);
	if (c == 1) {
		string surname, name, secondname;
		int age, course;
		double rate;
		char pol;
		cout << "Enter: " << endl << " FIO: ";
		cin >> surname >> name >> secondname;
		cout << endl << "Age: ";
		cin >> age;
		cout << endl << "Pol: ";
		cin >> pol;
		cout << endl << "Course: ";
		cin >> course;
		cout << endl << "Rate: ";
		cin >> rate;
		mas[k - 1] = new students(surname, name, secondname, age, pol, course, rate);
	}
	else if (c == 2) {
		k--;
		for (long i = k; i < n; ++i) {
			mas[i] = mas[i + 1];
		}
		
	}
		
}
void save(students** mas, int n,string path) {
	ofstream fout(path, ios::app);
	if (!fout.is_open()) {
		cout << "Error";
	}
	else {
		cout << "Save";
		for (int i = 0; i < n; i++) {
			fout  << mas[i]->getFIO() << " " << mas[i]->getAge() << " " << mas[i]->getPol() << " " << mas[i]->getCourse() << " " << mas[i]->getRate() << '\n';
		}
	}
}

int main() {
	string path = "Students.txt";
	ifstream fin(path,ios::app);

	
	string str;

	students** Students=new students*[999];

	int i = 0;
	if (!fin.is_open()) {
		cout << "Error";
	}
	else {
		cout << "File is open"<<endl;
		while (getline(fin,str)) {
			string surname, name, secondname;
			int age,course;
			char pol;
			double rate;
			istringstream iss(str);
			iss >> surname >> name >> secondname >> age >> pol >> course >> rate;
			Students[i] = new students(surname,name,secondname,age,pol,course,rate);
			i++;
		}
	}
	print(Students, i);
	return 0;
}

//ex 7


//int foo(char* num) {
//	int rez = 0;
//	for (int i = strlen(num)-1; i >=0; i--) {
//		int p = pow(2, i);
//		if (num[i] == '1') {
//			rez = rez + p;
//		}
//	}
//	return rez;
//}
//
//int main() {
//	
//	string path = "bin.txt";
//	ifstream fin(path);
//	int mas[99];
//	int n = 0;
//	char* num=new char[999];
//	if (fin.is_open()) {
//		cout << "File is open"<<endl;
//		int i=0;
//		while (!fin.eof()) {
//			fin >> num;
//			i++;
//			if (fin.get() == 32 || i % 2 == 0) {
//
//				mas[n] = foo(num);
//				n++;
//				i = 0;
//			}
//		}
//		
//		for (int i = 0; i < n; i++) {
//			cout << mas[i] << " ";
//		}
//	}
//	else {
//		cout << "Error";
//	}
//	return 0;
//}


