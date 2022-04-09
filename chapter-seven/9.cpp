#include <iostream>
using namespace std;
const int SLEN = 30;
struct student {
	char fullname[SLEN];
	char hobby[SLEN];
	int ooplevel; 
};

int getinfo(student pa[], int n);
void display1(student st);
void display2(student * ps);
void display3 (const student pa[], int n);

int main()
{
	cout << "Enter class size: ";
	int class_size;
	cin >> class_size;
	cout << endl;
	while (cin.get() != '\n')
		continue;
	
	student * ptr_stu = new student[class_size];
	int entered = getinfo(ptr_stu, class_size);
	for (int i = 0; i < entered; i++)
	{
		display1(ptr_stu[i]);
		display2(&ptr_stu[i]);
	}
	display3(ptr_stu, class_size);
	delete [] ptr_stu;
	cout << "Done!\n";
	return 0;
}

int getinfo(student pa[], int n)
{
	int count = 0;
	for (int i = 0; i < n; i++)
	{
		cout << "Enter the student fullname: ";
		cin.getline(pa[i].fullname, SLEN);
		cout << "Enter the student hobby: ";
		cin.getline(pa[i].hobby, SLEN);
		cout << "Enter the student ooplevel: ";
		cin >> pa[i].ooplevel;
		cin.get();
		count++;
		cout << endl;
	}
	return count;
}

void display1(student st)
{
	cout << endl;
	cout << "display1: \n";
	cout << "Fullname: " << st.fullname << endl;
	cout << "Hobby:    " << st.hobby << endl;
	cout << "Ooplevel: " << st.ooplevel << endl; 
}

void display2(student * ps)
{
	cout << endl;
	cout << "display2: \n";
	cout << "Fullname: " << ps->fullname << endl;
	cout << "Hobby:    " << ps->hobby << endl;
	cout << "Ooplevel: " << ps->ooplevel << endl; 
}

void display3 (const student pa[], int n)
{
	cout << endl;
	cout << "display3: " << endl;
	for (int i = 0; i < n; i++)
	{
		cout << "Fullname: " << pa[i].fullname << endl;
		cout << "Hobby:    " << pa[i].hobby << endl;
		cout << "Ooplevel: " << pa[i].ooplevel << endl; 
	}
}

