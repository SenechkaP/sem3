#define _CRT_SECURE_NO_WARNINGS
#include "Credit.h"

Credit::Credit() : Account() {
    this->ammountOfCredit = 0;
    this->creditTerm = 0;
    this->creditInterest = 0;
    this->monthlyPayment = 0;
    this->countOfDaysLatePayment = 0;
    this->latePaymentInterest = 0;
    this->interestOfTransfering = 0;
}

Credit::Credit(int number, float money, char *accountHolder, float ammountOfCredit, int creditTerm,
               float creditInterest, float monthlyPayment, int countOfDaysLatePayment,
               float latePaymentInterest, float interestOfTransfering) : Account(number, money,
                                                                                 accountHolder) {
    this->ammountOfCredit = ammountOfCredit;
    this->creditTerm = creditTerm;
    this->creditInterest = creditInterest;
    this->monthlyPayment = monthlyPayment;
    this->countOfDaysLatePayment = countOfDaysLatePayment;
    this->latePaymentInterest = latePaymentInterest;
    this->interestOfTransfering = interestOfTransfering;
}

Credit::Credit(const Credit &cre) {
    this->ammountOfCredit = cre.ammountOfCredit;
    this->creditTerm = cre.creditTerm;
    this->creditInterest = cre.creditInterest;
    this->monthlyPayment = cre.monthlyPayment;
    this->countOfDaysLatePayment = cre.countOfDaysLatePayment;
    this->latePaymentInterest = cre.latePaymentInterest;
    this->interestOfTransfering = cre.interestOfTransfering;
}

Credit::~Credit() {
    this->ammountOfCredit = 0;
    this->creditTerm = 0;
    this->creditInterest = 0;
    this->monthlyPayment = 0;
    this->countOfDaysLatePayment = 0;
    this->latePaymentInterest = 0;
    this->interestOfTransfering = 0;
}

float Credit::calculatePaymentAmount() {
    return this->monthlyPayment + (this->latePaymentInterest * this->countOfDaysLatePayment);
}

bool Credit::paymentCompleted() {
    float amount = this->calculatePaymentAmount();
    if (this->money > amount) {
        this->getMoney(amount);
        this->ammountOfCredit -= this->monthlyPayment;
        this->countOfDaysLatePayment = 0;
        return true;
    } else {
        return false;
    }
}

void Credit::transferFromAccountToAccount(Account &to, float& money) {
    this->getMoney(money);
    to.putMoney(money - (money * this->interestOfTransfering));
}
