Templates
	C++ supports generic fuctions and generic classes. To make any class generic we use keyword template.

e.g
	#include<iostream>
	using namespace std;

	template<class t>
	class Arithmatic
	{
	private:
		t a;
		t b;
	public:
		Arithmatic(t a, t b);
		t sum();
		t sub();
	};

	template<class t>
	Arithmatic<t>::Arithmatic(t a, t b)
	{
		this->a = a;
		this->b = b;
	}

	template<class t>
	t Arithmatic<t>::sum()
	{
		t c;
		c = this->a + this->b;
		return c;
	}

	template<class t>
	t Arithmatic<t>::sub()
	{
		t c;
		c = this->a - this->b;
		return c;
	}

	int main()
	{
		Arithmatic<int> arith(10, 9);
		Arithmatic<float> arithmF(10.09, 7.9);

		cout<< arith.add << endl;
		cout<< arith.sub << endl;
		cout<< arithF.add << endl;
		cout<< arithF.sub << endl;
	}

Takeaway : Benifit of template class is to not having to declare multple classes for different data types hen functionality is same .


Declaring a function ith template:

	template <typename T>
	T functionName(T parameter1, T parameter2, ...) {
	    // code
	}

	e.g:

	template <typename T>
	T add(T num1, T num2) {
	   return (num1 + num2);
	}

	int main() {

    int result1;
    double result2;
    // calling with int parameters
    result1 = add<int>(2, 3);
    cout << result1 << endl;

    // calling with double parameters
    result2 = add<double>(2.2, 3.3);
    cout << result2 << endl;

    return 0;
} 