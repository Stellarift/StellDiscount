//Задание 1
#include <iostream>
using namespace std;

/*int main() {
	setlocale(LC_ALL, "ru");
	int p1 = 0, p2 = 0, p3 = 0, p4 = 0; //пицца
	int napitok1 = 0, napitok2 = 0, napitok3 = 0; // напитки

	int code, quantity;

	cout << "МЕНЮ: " << endl;
	cout << "1.Маргарита - 850 рублей" << endl;
	cout << "2.Пепперони - 900 рублей" << endl;
	cout << "3.Гавайская - 1000 рублей" << endl;
	cout << "4.Четыре сыра - 1150 рублей" << endl;
	cout << "НАПИТКИ: " << endl;
	cout << "5.Кока-кола - 250 рублей" << endl;
	cout << "6.Сок Добрый(один стакан) - 180 рублей" << endl;
	cout << "7.Вода Minerale - 120 рублей" << endl;

	cout << "Введите код и количество (0 - закончить):" << endl; //ввод заказа через цикл while
	while (true) {
		cout << "Введите код: ";
		cin >> code;
		if (code == 0)
			break;

		cout << "Количество: " << endl;
		cin >> quantity;

		switch (code) {
		case 1: p1 += quantity;
			break;
		case 2: p2 += quantity;
			break;
		case 3: p3 += quantity;
			break;
		case 4: p4 += quantity;
			break;
		case 5: napitok1 += quantity;
			break;
		case 6: napitok2 += quantity;
			break;
		case 7: napitok3 += quantity;
			break;
		default:
			cout << "Неверный код" << endl;
			break;

		}
	}
	cout << "\nЧЕК: " << endl;
	double total = 0;
	double pizzaTotal = 0;
	double drinkTotal = 0;

	if (p1 > 0) {
		double cost = p1 * 850;
		pizzaTotal += cost;
		cout << "Маргарита - " << p1 << " - " << cost << " руб." << endl;

	}
	if (p2 > 0) {
		double cost = p2 * 900;
		pizzaTotal += cost;
		cout << "Пепперони - " << p2 << " - " << cost << "руб." << endl;

	}
	if (p3 > 0) {
		double cost = p3 * 1000;
		pizzaTotal += cost;
		cout << "Гавайская - " << p3 << " - " << cost << "руб." << endl;

	}
	if (p4 > 0) {
		double cost = p4 * 1150;
		pizzaTotal += cost;
		cout << "Четыре сыра - " << p4 << " - " << cost << "руб." << endl;

	}
	if (napitok1 > 0) {
		double cost = napitok1 * 250;
		pizzaTotal += cost;
		cout << "Кока-кола - " << napitok1 << " - " << cost << "руб." << endl;

	}
	if (napitok2 > 0) {
		double cost = napitok2 * 180;
		pizzaTotal += cost;
		cout << "Сок Добрый - " << napitok2 << " - " << cost << "руб." << endl;

	}
	if (napitok3 > 0) {
		double cost = napitok3 * 120;
		pizzaTotal += cost;
		cout << "Вода Minerale - " << napitok3 << " - " << cost << "руб." << endl;

	}

	total = pizzaTotal + drinkTotal;

	double skidka = 0;

	int totalPizzas = p1 + p2 + p3 + p4; // скидка на пиццу
	if (totalPizzas >= 5) {
		int freePizzas = totalPizzas / 5;
		double pizzaSkidka = (pizzaTotal / totalPizzas) * freePizzas;
		skidka += pizzaSkidka;
		cout << "Скидка за каждую 5-ю пиццу(бесплатно): - " << pizzaSkidka << "руб." << endl;

	}
	//20% на за заказ, сумма которого больше 5000 рублей
	if (total > 5000) {
		double totalSkidka = total * 0.2;
		skidka += totalSkidka;
		cout << "Скидка 20% за заказ больше 5000 рублей: -" << totalSkidka << " руб." << endl;

	}

	double finalTotal = total - skidka;
	cout << "Итого к оплате: " << finalTotal << " руб." << endl;

	return 0;
}*/

//Задание 2
int main() {
	setlocale(LC_ALL, "ru");
	int sales1, sales2, sales3;

	cout << "Введите уровень продаж для первого менеджера: " << endl;
	cin >> sales1;
	cout << "ВВедите уровень продаж для второго менеджера: " << endl;
	cin >> sales2;
	cout << "Введите уровень продаж для третьего менеджера: " << endl;
	cin >> sales3;

	double salary1 = 200; //первый менеджер
	if (sales1 <= 500) {
		salary1 += sales1 * 0.03;
	}
	else if (sales1 <= 1000) {
		salary1 += sales1 * 0.05;
	}
	else {
		salary1 += sales1 * 0.08;
	}

	double salary2 = 200; // второй менеджер
	if (sales2 <= 500) {
		salary2 += sales2 * 0.03;
	}
	else if (sales2 <= 1000) {
		salary2 += sales2 * 0.05;
	}
	else {
		salary2 += sales2 * 0.08;
	}

	double salary3 = 200; // третий менеджер
	if (sales3 <= 500) {
		salary3 += sales3 * 0.03;
	}
	else if (sales3 <= 1000) {
		salary3 += sales3 * 0.05;
	}
	else {
		salary3 += sales3 * 0.08;
	}

	int bestManager = 1; //определение лучшего менеджера
	double maxSales = sales1;

	if (sales2 > maxSales) {
		bestManager = 2;
		maxSales = sales2;
	}
	if (sales3 > maxSales) {
		bestManager = 3;
		maxSales = sales3;
	}
	//начисление премии
	if (bestManager == 1) {
		salary1 += 200;
	}
	else if (bestManager == 2) {
		salary2 += 200;
	}
	else {
		salary3 += 200;
	}

	cout << "\nРЕЗУЛЬТАТЫ" << endl;
	cout << "Менеджер 1:" << endl;
	cout << "Продажи: " << sales1 << "$" << endl;
	cout << "зарплата: " << salary1 << "$" << endl;

	cout << "Менеджер 2:" << endl;
	cout << "Продажи: " << sales2 << "$" << endl;
	cout << "Зарплата: " << salary2 << "$" << endl;

	cout << "Менеджер 3:" << endl;
	cout << "Продажи: " << sales3 << "$" << endl;
	cout << "Зарплата: " << salary3 << "$" << endl;

	cout << "Лучший менеджер: " << bestManager << " с продажами " << maxSales << "$" << endl;
	cout << "Премия 200$" << endl;

	return 0;
}

