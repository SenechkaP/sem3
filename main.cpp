#include "main.h"

using namespace std;

int main() {
    setlocale(LC_ALL, "Russian");

    int num = 5;
    float sum = 5000;
    char name[] = "Name";
    float ammountOfCredit = 10000;
    int creditTerm = 12;
    float creditInterest = 0.2;
    float monthlyPayment = 500;
    int countOfDaysLatePayment = 16;
    float latePaymentInterest = 1;
    float interestOfTransfering = 0.05;


    Credit all_credits_stat[3];
    all_credits_stat[1].set_number(num);
    all_credits_stat[1].set_money(sum);
    all_credits_stat[1].set_name(name);
    all_credits_stat[1].set_ammountOfCredit(ammountOfCredit);
    all_credits_stat[1].set_creditTerm(creditTerm);
    all_credits_stat[1].set_creditInterest(creditInterest);
    all_credits_stat[1].set_monthlyPayment(monthlyPayment);
    all_credits_stat[1].set_countOfDaysLatePayment(countOfDaysLatePayment);
    all_credits_stat[1].set_latePaymentInterest(latePaymentInterest);
    all_credits_stat[1].set_interestOfTransfering(interestOfTransfering);

    cout << all_credits_stat[1].calculatePaymentAmount() << "\n";

    cout << all_credits_stat[1].paymentCompleted() << "\n";

    cout << all_credits_stat[1].get_money() << "\n";

    cout << "\n";

    Credit* all_credits_dynam = new Credit[4];
    all_credits_dynam[2].set_number(num);
    all_credits_dynam[2].set_money(sum);
    all_credits_dynam[2].set_name(name);
    all_credits_dynam[2].set_ammountOfCredit(ammountOfCredit);
    all_credits_dynam[2].set_creditTerm(creditTerm);
    all_credits_dynam[2].set_creditInterest(creditInterest);
    all_credits_dynam[2].set_monthlyPayment(monthlyPayment);
    all_credits_dynam[2].set_countOfDaysLatePayment(countOfDaysLatePayment);
    all_credits_dynam[2].set_latePaymentInterest(latePaymentInterest);
    all_credits_dynam[2].set_interestOfTransfering(interestOfTransfering);

    cout << all_credits_dynam[2].calculatePaymentAmount() << "\n";

    cout << all_credits_dynam[2].paymentCompleted() << "\n";

    cout << all_credits_dynam[2].get_money() << "\n";

    // 4 семинар

//    Account *some_acc = &all_credits_dynam[2];
//
//    some_acc->transferFromAccountToAccount(all_credits_stat[1], 10);
//
//    some_acc = new Account(19, 234.32, "John");
//
//    some_acc->transferFromAccountToAccount(all_credits_stat[1], 20);

    delete[] all_credits_dynam;
}
