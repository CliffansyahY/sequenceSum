/*
Programmer : Cliffansyah Yahya

Date: 5/12/2024

Description: create an abstract class and subclasses to demonstrate even and odd
numbers from a range of numbers, then output the sequence and sum.


3. Sequence Sum

A sequence of integers such as 1, 3, 5, 7, ... can be represented by a function that takes a
nonnegative integer as parameter and returns the corresponding term of the sequence. For
example, the sequence of odd numbers just cited can be represented by the function

int odd(int k) {return 2 * k + l;}

Write an abstract class AbstractSeq that has a pure virtual member function

virtual int fun(int k) = O;

as a stand-in for an actual sequence, and two member functions

void printSeq(int k, int m);
int sumSeq(int k, int m)

that are passed two integer parameters k and m, where k < m. The function printSeq will
print all the terms fun ( k) through fun ( m) of the sequence, and likewise, the function
sumSeq will return the sum of those terms.

Demonstrate your AbstractSeq class by
creating subclasses that you use to sum the terms of at least two different sequences.
Determine what kind of output best shows off


*/


#include <iostream>
using namespace std;

// Abstract base class (creates a roadmap for sequences of numbers) 
class AbstractSeq {
public:
    //calculates the value of every sequence, virtual function
    virtual int fun(int k) = 0;

    //prints sequences of k and m
    void printSeq(int k, int m) {
        for (int i = k; i <= m; ++i) {
            cout << fun(i) << " ";
        }
        cout << endl;
    }

    //calculates the total for k and m
    int sumSeq(int k, int m) {
        int sum = 0;
        for (int i = k; i <= m; ++i) {
            sum = sum + fun(i);
        }
        //returns the sum
        return sum;
    }
};

// odd sequence subclass function
class OddSeq : public AbstractSeq {
public:
    //odd sequence function
    int fun(int k) override {
        return 2 * k + 1;
    }
};

// even sequence subclass function
class EvenSeq : public AbstractSeq {
public:
    //even sequence function
    int fun(int k) override {
        return 2 * k;
    }
};

int main() {
    //subclass functions
    OddSeq oddSeq;
    EvenSeq evenSeq;
    //variables
    int x, y;

    //prompt the user
    cout << "Enter a range of two numbers (ex: 1 5) that you want to see a sequence of odd and even from: ";
    cin >> x >> y;

    //odd sequences output
    cout << "Odd Sequence: ";
    oddSeq.printSeq(x, y);
    cout << "Total of Odd Sequence: " << oddSeq.sumSeq(x, y) << endl;

    //even sequences output
    cout << "Even Sequence: ";
    evenSeq.printSeq(x, y);
    cout << "Total of Even Sequence: " << evenSeq.sumSeq(x, y) << endl;

    return 0;
}