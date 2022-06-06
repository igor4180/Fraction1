#include"Fraction1.h"

//#define CONSTRUCTORS_CHECK
//#define ARITHMETICAL_OPERATORS_CHECK
//#define INCREMENT_CHECK

void main()
{
	setlocale(LC_ALL, "");
#ifdef CONSTRUCTORS_CHECK
	Fraction A;
	A.print();

	Fraction B = 5;
	B.print();

	Fraction C(1, 2);
	C.print();

	Fraction D(2, 3, 4);
	D.print();

	Fraction E = C;
	E.print();

	A = D;
	A.print();
#endif // CONSTRUCTORS_CHECK

#ifdef ARITHMETICAL_OPERATORS_CHECK
	Fraction A(2, 3, 4);
	Fraction B(19, 5);

	/*int a = 2;
	int b = 3;
	int c = a * b;
	Fraction C = A * B;
	C.print();
	(A / B).print();
	A.print();
	B.print();
	(A + B).print();*/

	A *= B;
	A.print();
#endif // ARITHMETICAL_OPERATORS_CHECK

#ifdef INCREMENT_CHECK
	for (Fraction i(1, 2); i.get_integer() < 10; ++i)
	{
		i.print();
	}
#endif // INCREMENT_CHECK

	//cout << (Fraction(1, 2) >= Fraction(3,4)) << endl;

	/*Fraction A(1, 2);
	cout << A << endl;
	A.print();*/
	int a;
	//cin >> a;
	/*Fraction A;
	cout << "Введите простую дробь: ";	
	cin >> a;
	cout << A << endl;*/
	Fraction A = 2.75;
	cout << A << endl;
}