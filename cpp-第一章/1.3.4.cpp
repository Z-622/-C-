#include<iostream>
#include<cmath>
#include<ctime>
using namespace std;

int total = 0;
int correct = 0;	

int	add(int a, int b) { return a + b; }
int subtract(int a, int b) { return a - b; }	
int multiply(int a, int b) { return a * b; }
int divide(int a, int b) { return a / b; }	

char menu()
{
	char choice;
	cout << "Select an operation:" << endl;
	cout << "1) Add two numbers" << endl;
	cout << "2) Subtract two numbers" << endl;
	cout << "3) Multiply two numbers" << endl;
	cout << "4) Divide two numbers" << endl;
	cout << "0) Exit" << endl;	
	cin >> choice;
	return choice;
}	

bool answerQuestion(int num1,int num2,int(*f)(int,int),int answer)
{
	return f(num1, num2) == answer;
}

int main()
{
	srand((unsigned)time(NULL));
	while (true)
	{
		char choice = menu();
		if (choice == '0')
			break;

		int num1, num2;
		num1 = rand() % 90 + 10;
		num2 = rand() % 90 + 10;

		decltype(add)* pf;

		char op;
		switch (choice)
		{
		case'1':pf = add;op = '+';break;
		case'2':pf = subtract;op = '-';break;
		case'3':pf = multiply;op = '*';break;
		case'4':pf = divide;op = '/';break;
		case'0':return 0;	
		default:continue;
		}

		total++;
		int answer;
		int tryCount = 0;
		bool isCorrect = false;

		cout << num1 << op << num2 << "=?" << endl;
		while (tryCount < 3 && !isCorrect)
		{
			cin >> answer;
			if (answerQuestion(num1, num2, pf, answer))
			{
				cout << "Correct!" << endl;
				isCorrect = true;
			}
			else
			{
				tryCount++;
				if (tryCount < 3)
					cout << "Wrong! Try again." << endl;
				else
					cout << "Wrong! The correct answer is " << pf(num1, num2) << endl;
			}
		}

		cout << "\n==========Quiz Report=============" << endl;
		cout << "Total questions: " << total << endl;
		cout << "Correct answers: " << correct << endl;
		cout << "Wrong answers: " << total - correct << endl;
		cout << "Correct answer rate: " << (double)correct / total * 100 << "%" << endl;
		if (total > 0)
		{
			double accuracy = (double)correct / total * 100;
			cout << "Accuracy: " << accuracy << "%" << endl;
		}
		else
		{
			cout << "No questions answered yet." << endl;
		}

	}
}