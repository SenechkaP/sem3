#define _CRT_SECURE_NO_WARNINGS
#include "account.h"

Account::Account() {
    this->number = 0;
    this->money = 0;
    this->accountHolder = nullptr;
}

Account::Account(int num, float money, char *name) {
    this->number = num;
    this->money = money;
    this->accountHolder = new char[strlen(name) + 1];
    strcpy(this->accountHolder, name);
}

Account::Account(const Account &acc) {
    this->number = acc.number;
    this->money = acc.money;
    this->accountHolder = new char[strlen(acc.accountHolder) + 1];
    strcpy(this->accountHolder, acc.accountHolder);
}

Account::~Account() {
    this->number = 0;
    this->money = 0;
    delete[] this->accountHolder;
}

void Account::set_number(int num) {
    this->number = num;
}

int Account::get_number() {
    return this->number;
}

void Account::set_money(float money) {
    this->money = money;
}

float Account::get_money() {
    return this->money;
}

void Account::set_name(char *name) {
    delete[] this->accountHolder;
    this->accountHolder = new char[strlen(name) + 1];
    strcpy(this->accountHolder, name);
}

char *Account::get_name() {
    char *name_return = new char[strlen(this->accountHolder) + 1];
    strcpy(name_return, this->accountHolder);
    return name_return;
}

void Account::putMoney(float money) {
    this->money += money;
}

void Account::getMoney(float money) {
    this->money -= money;
}

void Account::transferFromAccountToAccount(Account &to, float money) {
    this->money -= money;
    to.money += money;
}
