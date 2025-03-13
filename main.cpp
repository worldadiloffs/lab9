#include <iostream>
#include <cmath>
using namespace std;

int multiply(int a, int b) {
    if (b == 0) return 0;
    if (b > 0) return a + multiply(a, b - 1);
    return -multiply(a, -b);
}

void p1() {
    int num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "Product: " << multiply(num1, num2) << endl;
}

int factorial(int n) {
    if (n == 0) return 1;
    return n * factorial(n - 1);
}

void p2() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << factorial(num) << endl;
}

int fibonacci(int n) {
    if (n == 0) return 0;
    if (n == 1) return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

void p3() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << fibonacci(n) << endl;
}

int sum(int n) {
    if (n == 0) return 0;
    return n + sum(n - 1);
}

void p4() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << sum(n) << endl;
}

void descendingOrder(int n) {
    if (n == 0) return;
    cout << n << " ";
    descendingOrder(n - 1);
}

void p5() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    descendingOrder(n);
    cout << endl;
}

int countDigits(int n) {
    if (n == 0) return 0; // Base case: If the number is 0, stop recursion
    return 1 + countDigits(n / 10);
}

void p6() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << countDigits(n) << endl;
}

int sumDigits(int n) {
    if (n == 0) return 0;
    return n % 10 + sumDigits(n / 10);
}

void p7() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    cout << sumDigits(n) << endl;
}

int power(int n, int k) {
    if (k == 0) return 1;
    return n * power(n, k - 1);
}

void p8() {
    int n,k;
    cout << "Enter a number: ";
    cin >> n;
    cin >> k;

    cout << power(n, k) << endl;
}

void reverse(int n) {
    if (n == 0) return ;
    cout << n%10;
    reverse(n / 10);
}

void p9() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    reverse(n);
    cout << endl;
}

int reverseNumber(int num, int rev = 0) {
    if (num == 0) return rev;
    return reverseNumber(num / 10, rev * 10 + num % 10);
}

bool isPalindrome(int num) {
    if (num < 0) return false;
    return num == reverseNumber(num);
}

void p10() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if (isPalindrome(n)) {
        cout << "True" << endl;
    }
    else {
        cout << "False" << endl;
    }
}

bool isPrimeHelper(int num, int divisor) {
    if (divisor > sqrt(num)) return true;
    if (num % divisor == 0) return false;
    return isPrimeHelper(num, divisor + 1);
}

bool isPrime(int num) {
    if (num <= 1) return false;
    return isPrimeHelper(num, 2);
}
void p11() {
    int number;
    cout << "Enter a number: ";
    cin >> number;

    if (isPrime(number)) {
        cout << number << " is a prime number." << endl;
    } else {
        cout << number << " is not a prime number." << endl;
    }
}


int main() {
    // p1();
    // p2();
    // p3();
    // p4();
    // p5();
    // p6();
    // p7();
    // p8();
    // p9();
    // p10();
    p11();
    return 0;
}
