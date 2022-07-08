//
// Created by jskag on 7/2/2022.
//

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <list>
#include <vector>

using namespace std;

//Recursion (7.1, 7.2)

//What's a Recursive method?
//a method that calls itself (either directly or indirectly)

//Classwork
//You may work with a partner.

//The method below computes the sum of the integers from 0 to n.
//Rewrite sum using recursion.


//int sum(int n) {
//    int sum = 0;
//    for (int i = 0; i <= n; i++)
//        sum += i;
//    return sum;
//}

//DEMO	(show and run code for sum)

int sum(int n){
    if(n <= 0)return 0;
    return 1+sum(n-1);
}









//Base Case

//What's a Base Case?
//What's the Base Case for the sum method?
//What happens if you don't have a Base Case?

int sum2(int n) {
    if (n == 0) {
        return 0;
    }
    else if (n < 0) {
        return n + sum2(n + 1);
    }
    else {
        return n + sum2(n - 1);
    }
}

//DEMO	(run sum without base case)

//What's the first Rule of Recursion?
//1. a recursive method must have a base case

//What happens when you run the code with a negative value?

//DEMO	(run sum with a negative value for n)

//What's the second Rule of Recursion?

//2. recursive calls must progress toward the base case


//Classwork
//You may work with a partner.

//Show what happens when 'sum' is called with a value of 4 for n.

//List all the calls and returns of 'sum' in the order they occur.
//For each call give the value passed into the function.
//For each return give the value returned from the function.

//How many copies of n exist when sum(0) is executing?


int sum3(int n) {
    if (n == 0)
        return 0;
    else
        return n + sum3(n - 1);
}


//Thinking About Recursion

//What's the best way to think about recursive methods?
//How can you feel confident that a recursive method works correctly?
//Would you step through the recursive calls as in the last exercise?


//use the principle of induction:

//1. show that it works correctly for the base case

//2. show that if it works correctly for "k"
//then it works correctly for "k+1"

//Explain why the recursive sum method works.

int sum4(int n) {
    if (n == 0)
        return 0;
    else
        return n + sum4(n - 1);
}

//1. base case:

//If n = 0, line 3 correctly returns 0.

//2. inductive step:

//If n > 0, the recursive call at line 5 is executed.
//Assume the recursive call correctly gives the sum from 0 to (n-1).
//The value n is added to the value returned from the recursive call giving the sum from 0 to n.

//What's the third Rule of Recursion?
//3. assume that the recursive call works


int fib (int n) {
    if (n <= 2)
    {
        return 1;
    }
    return fib(n-2) + fib(n-1);
}







//When To Use Recursion

//Sum can be implemented using recursion or using a loop (iteration).
//Which is the better way to write sum?
//Do problems exist that are more naturally recursive?

//Classwork
//You may work with a partner.

//Describe a recursive algorithm for sorting a pile of exams by name.

//Classwork
//You may work with a partner.

//Describe recursive code that prints the names of files on a computer.

//Classwork
//You may work with a partner.

//Describe recursive code for the permute method.
//Permute prints all permutations of a string of letters.
//For example, if permute is given ABC as input
//it prints ABC, ACB, BAC, BCA, CAB, and CBA.

void per(vector<string> letters, string path = "") {
    if(letters.size() == 0){
        cout << path << endl;
    }
    for (int i = 0; i < letters.size(); ++i) {
        vector<string> temp = letters;
        temp.erase(temp.begin()+i);
        per(temp, path + letters[i]);
    }
}



//DEMO	(show and run code for permute)

//When should you use recursion?

//1. Recursive Data

//file system folders (folders contain folders)
//arithmetic expressions (expressions contain expressions)
//programming languages (statements contain statements)

//2. Divide-and-Conquer

//sort a pile by dividing it into smaller piles
//solve a problem by dividing it into smaller problems

//3. Backtracking Search

//permute
//boggle

//Deep Recursion

//What happens when you run sum with n = 1000000?

int sum5(int n) {
    if (n == 0) {
        return 0;
    } else {
        return n + sum5(n - 1);
    }
}

//DEMO	(run sum with n = 1000000)

//Could you use recursion to process the items on a List?
//Would recursion be a good choice?

//void processList(vector<string> my_list, int index) {
//    if (index < my_list.size()) {
//        processItem(my_list[index]);
//        processList(my_list, index + 1);
//    }
//}

//Excessive Recursion

//What are the Fibonacci numbers?


//1 1 2 3 5 8 13 21 34 55 89
//the next number is the sum of previous two numbers

//Classwork
//You may work with a partner.

//Write a recursive method for computing the nth Fibonacci number.

//int fib(int n) {
//    return n;
//}


//DEMO	(run fib with n = 5, 6, 7, etc)

//How long does it take to compute the 40th Fibonacci Number?

//DEMO	(run fib with n = 10, 20, 30, and 40)

//How many adds are needed to get the 40th Fibonacci Number?
//Why does the recursive method take so long?
//Draw a tree of the calls for fib(5).  (or run Demo with fib2)

//What's the fourth Rule of Recursion?

//4. never solve the same problem instance more than once

//Classwork
//You may work with a partner.

//Write an iterative method for computing the nth Fibonacci number.


//DEMO	(run fib3 with n = 40, 50, 60, etc)

//What happens if fib has only one base case?
//What happens when you try to compute fib(2)?
//How do you solve this problem?

int fib2(int n) {
    if (n == 1) {
        return 1;
    } else {
        return fib2(n - 1) + fib2(n - 2);
    }
}

//fib(2) calls fib(1) and fib(0)
//fib(0) misses the base case
//add another base case (either fib(0) = 0 or fib(2) = 1)

int main() {
    int n = 6;
    cout << endl;
    cout << "Sum of 0:" << n << " = " << sum2(n) << endl;
    cout << endl;
    cout << "Fib of " << n << " = " << fib(n);
    cout << endl;
}
