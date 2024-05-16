#define _CRT_SECURE_NO_WARNINGS
#pragma once
#include "account.h"

class Credit : public Account {
    float ammountOfCredit;
    int creditTerm;
    float creditInterest;
    float monthlyPayment;
    int countOfDaysLatePayment;
    float latePaymentInterest;
    float interestOfTransfering;
public:
    Credit();

    Credit(int, float, char *, float, int, float, float, int, float, float);

    Credit(const Credit &);

    ~Credit();

    float get_ammountOfCredit() { return ammountOfCredit; }

    void set_ammountOfCredit(float buf) { this->ammountOfCredit = buf; }

    int get_creditTerm() { return creditTerm; }

    void set_creditTerm(int buf) { this->creditTerm = buf; }

    float get_creditInterest() { return creditInterest; }

    void set_creditInterest(float buf) { this->creditInterest = buf; }

    float get_monthlyPayment() { return monthlyPayment; }

    void set_monthlyPayment(float buf) { this->monthlyPayment = buf; }

    int get_countOfDaysLatePayment() { return countOfDaysLatePayment; }

    void set_countOfDaysLatePayment(int buf) { this->countOfDaysLatePayment = buf; }

    float get_latePaymentInterest() { return latePaymentInterest; }

    void set_latePaymentInterest(float buf) { this->latePaymentInterest = buf; }

    float get_interestOfTransfering() { return interestOfTransfering; }

    void set_interestOfTransfering(float buf) { this->interestOfTransfering = buf; }

    float calculatePaymentAmount();

    bool paymentCompleted();

    void transferFromAccountToAccount(Account &to, float &money);
};

