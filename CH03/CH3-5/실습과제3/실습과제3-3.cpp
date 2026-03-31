// **********************************************
// 제 목 : ch3-5 실습과제3
// 날 짜 : 2026년 03월 30일
// 작성자 : 2201053 최종화
// **********************************************

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <string.h>
using namespace std;

class Account {
private:
    char owner[20];
    int balance; 

public:
    Account(const char* name) {
        strcpy(owner, name);
        balance = 0;
    }
    void deposit(int amount) {
        balance += amount;
    }
    int withdraw(int amount) {
        balance -= amount;
        return amount;
    }
    int inquiry() {
        return balance;
    }
    const char* getOwner() {
        return owner;
    }
};
int main() {
	Account a("황수희");
	a.deposit(20000);
	cout << a.getOwner() << "잔액은" << a.inquiry() << endl;
	int money = a.withdraw(15000);
	cout << money << "원 출금, ";
	cout << a.getOwner() << "잔액은" << a.inquiry() << endl;
	money = a.withdraw(8000);
	cout << money << "원 출금, ";
	cout << a.getOwner() << "잔액은 " << a.inquiry() << endl;
}
