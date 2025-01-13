DEMO

![Screenshot 2025-01-12 165207](https://github.com/user-attachments/assets/18c11f82-cd42-482e-9e70-07ff7f216d45)





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
