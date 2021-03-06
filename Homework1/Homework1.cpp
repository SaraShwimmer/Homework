// HW1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cassert>
using namespace std;
//Задание 1 

/*Создать класс Power, который содержит два вещественных числа. Этот класс должен иметь две переменные-члена
для хранения этих вещественных чисел. Еще создать два метода: один с именем set, который позволит присваивать
значения переменным, второй — calculate, который будет выводить результат возведения первого числа в степень
второго числа. Задать значения этих двух чисел по умолчанию.*/

class Power {
private:
	//Объявление переменных члена 
	long double m_base, m_degree;

public:
	//Создание метода присваивания значения переменным, введенным с клавиатуры 
	void setValueBase(long double base) {
		m_base = base;
	}
	void setValueDegree(long double degree) {
		m_degree = degree;
	}
	//Вывод результата возведения первого числа в степень второго
	long double calculate() {
		return pow(m_base, m_degree);
	}

};

int main()
{
	setlocale(LC_ALL, "Russian");
	//Объявление переменных
	long double base, degree;
	cout << "Введите число: ";
	cin >> base;
	cout << "Введите степень, в которое число возводится: ";
	cin >> degree;
	//Создание переменной класса
	Power power;
	//Инициализация переменных-члена значениями, введенными с клавиатуры
	power.setValueBase(base);
	power.setValueDegree(degree);
	//Вывод результата возведения первого числа в степень второго в консоль
	cout << "Возведение в степень: " << base << " ^ " << degree << " = " << power.calculate();
	return 0;

}

//Задание 2
/*Написать класс с именем RGBA, который содержит 4 переменные-члена типа std::uint8_t: m_red, m_green, m_blue и m_alpha
(#include cstdint для доступа к этому типу). Задать 0 в качестве значения по умолчанию для m_red, m_green, m_blue и 255 для m_alpha.
Создать конструктор со списком инициализации членов, который позволит пользователю передавать значения для m_red, m_blue, m_green и m_alpha.
Написать функцию print(), которая будет выводить значения переменных-членов.*/

//class RGBA {
//private:
//	//Объявление переменных-члена типа uint8_t
//	uint8_t m_red, m_green, m_blue, m_alpha;
//public: 
//	//Создание конструктора со списком инициализации членов
//	RGBA(uint8_t red = 0, uint8_t green = 0, uint8_t blue = 0, uint8_t alpha = 255) :
//		m_red(red), m_green(green), m_blue(blue), m_alpha(alpha) {};
//	//Вывод значения переменных-членов с изменением типа для корректного вывода
//	void print() {
//		cout << "Значение RGBA:\nR - " << static_cast<int>(m_red) << "\nG - " << static_cast<int>(m_green) << "\nB - " <<
//			static_cast<int>(m_blue) << "\nA - " << static_cast<int>(m_alpha);
//	}
//
//};
//
//int main() {
//	setlocale(LC_ALL, "Russian");
//	//Передаем значения переменных-членов
//	RGBA rgba(17, 15, 255, 42);
//	////Вывод значения переменных-членов
//	rgba.print();
//	return 0;
//}

//Задание 3

/*Написать класс, который реализует функциональность стека. Класс Stack должен иметь:
private-массив целых чисел длиной 10;
private целочисленное значение для отслеживания длины стека;
public-метод с именем reset(), который будет сбрасывать длину и все значения элементов на 0;
public-метод с именем push(), который будет добавлять значение в стек. push() должен возвращать значение false, если массив уже заполнен, и true в противном случае;
public-метод с именем pop() для вытягивания и возврата значения из стека. Если в стеке нет значений, то должно выводиться предупреждение;
public-метод с именем print(), который будет выводить все значения стека.*/

//class Stack{
//private:
//	static const int SIZE = 10;
//	int m_array[SIZE]; //объявление и инициализация массива
//    int m_length;    //индекс массива
//
//public:
//	void reset(){
//		//обнуление индексов массива
//		m_length = 0;
//		for (int i = 0; i < 9; i ++) {
//			m_array[i] = 0;
//		}
//	}
//	bool push(int x){
//		//Если массив заполнен, то возвращает значение false
//		if (m_length == 10)
//			return false;
//		//Присваиваем элементу значение и переходим к следующему
//		m_array[m_length++] = x;
//		//        return true;
//	}
//	int pop(){
//		//если в массиве нет элементов
//        assert(m_length > 0);
//
//        //int index = m_array[m_length-1]; // получаем последний элемент со значением
//        //--m_length; // m_next теперь на единицу меньше, так как мы только что вытянули верхний элемент стека
//        //return index; // возвращаем элемент
//        //Или
//        return m_array[--m_length];
//	}
//	void print(){
//		cout << "( ";
//		        //посимвольный вывод массива в консоль
//		        for (int i = 0; i < m_length; i++)
//		            cout << m_array[i] << ' ';
//		        cout << ")\n";
//	}
//};
//
//int main()
//{
//	Stack stack;
//	stack.reset();
//	stack.print();
//
//	stack.push(3);
//	stack.push(7);
//	stack.push(5);
//	stack.print();
//
//	stack.pop();
//	stack.print();
//
//	stack.pop();
//	stack.pop();
//	stack.print();
//
//	return 0;
//}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
