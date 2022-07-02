//
// Created by jskag on 7/2/2022.
//

//Choosing an Algorithm
//Can you have more than one algorithm that solves a given problem?

//Yes
//searching: sequential vs binary
//sorting: selection, insertion, merge, quick, heap


//How do you choose which algorithm you will use?

//1. simplest
//2. smallest
//3. fastest


//How do you know how much time an algorithm will use?

//1. measure the running time
//2. predict the running time through analysis


//Classwork
//You may work with a partner.

//Give a function T(n) for the number of time units used by the code.
//(Assume each statement uses one time unit.)


//double sum = 0;
//for (int i = 0; i < n; i++)
//    sum += a[i];
//double mean = sum / n;
//return mean;

//Big Oh

//Suppose you have T(n) = n^2 + 2n + 4
//Does it make sense to define T(n) this precisely?

//NO

//1. when n is large, the high-order term dominates
//n^2 + 2n + 4 = 1002004 when n is 1000

//2. when n is small, time is not an issue

//3. constant factors depend on machine and compiler

//4. the rate of growth is what is important


//How do you represent the growth rate of T(n)?

//use Big Oh notation
//(abstraction of time formula)

//1. keep the dominant term

//2. drop low-order terms

//3. drop constants



//What's the definition of BigOh?

//T(n) is O(f(n))

//if there exist positive constants c and n0 such that

//T(n) <= c*f(n)

//for all n >= n0

//Finding The BigOh

//How do you find the Big-Oh for an Algorithm?

//What's the Running Time of a simple statement?
//small = 1;

//What's the Running Time of a block of simple statements?
//temp = A[small];
//A[small] = A[i];
//A[i] = temp;

//What's the Running Time of a Loop?
//1. find the BigOh for the body of the loop
//2. multiply by the number of times the loop repeats

//for (i = 0; i < n; i++)
//A[i][i] = 1;

//for (i = 0; i < n; i++)
//for (j = 0; j < n; j++)
//A[i][j] = 0;

//What's the Running Time of a combination of statements?

//for (i = 0; i < n; i++)
//for (j = 0; j < n; j++)
//A[i][j] = 0;
//for (i = 0; i < n; i++)
//A[i][i] = 1;

//What's the Running Time of a selection statement?

//1. find the BigOh for the if part
//2. find the BigOh for the else part
//3. use the larger of the two BigOh's

//if (x == 0)
//for (i = 0; i < n; i++)
//A[i][i] = 1;
//else
//for (i = 0; i < n; i++)
//for (j = 0; j < n; j++)
//A[i][j] = 0;


//Classwork
//You may work together with a partner.

//Give the Big-Oh of the running time for each program fragment.

//for ( int i = 0; i < n; i++ )
//sum++;

//for ( int i = 0; i < n; i += 2 )
//sum++;

//for ( int i = 0; i < n; i++ )
//for ( int j = 0; j < n; j++ )
//sum++;
//for ( int j = 0; j < n; j++ )
//sum++;

//for ( int i = 0; i < n; i++ )
//sum++;
//for ( int j = 0; j < n; j++ )
//sum++;

//for ( int i = 0; i < n; i++ )
//for ( int j = 0; j < n*n; j++ )
//sum++;

//for ( int i = 0; i < n; i++ )
//for ( int j = 0; j < i; j++ )
//sum++;

//for ( int i = 0; i < n; i++ )
//for ( int j = 0; j < n*n; j++ )
//for ( int k = 0; k < j; k++ )
//sum++;


//The inside loop in the following code does not always repeat n times.
//Does the code have a Big-Oh bound that is smaller than O(n^2)?

//for ( int i = 0; i < n; i++ )
//for ( int j = 0; j < i; j++ )
//sum++;


//Classwork
//You may work together with a partner.

//What's the BigOh for this algorithm?

//for (i = 0; i < n-1; i++) {
//small = 1;
//for (j = i+1; j < n; j++)
//if (A[j] < A[small])
//small = j;
//temp = A[small];
//A[small] = A[i];
//A[i] = temp;
//}

//What are some examples of bad Big-Oh style?
//O(2n)
//O(n + 2)
//O(n^2 + n)

//Classwork
//You may work together with a partner.

//What's the BigOh for this algorithm?

//int maxSum = 0;

//for( int i = 0; i < n; i++ )
//for( int j = i; j < n; j++ )
//{
//int thisSum = 0;

//for( int k = i; k <= j; k++ )
//thisSum += a[ k ];

//for( int k = i; k <= j; k++ )
//thisSum += 10 + a[ k ];

//if( thisSum > maxSum )
//{
//maxSum   = thisSum;
//seqStart = i;
//seqEnd   = j;
//}
//}


//for( int k = i; k <= j; k++ )
//thisSum += a[ k ];

//return maxSum;











//Big Oh from Measured Times

//How can you find the Big-Oh from measured running times?
//How can you check an Algorithm Analysis?


//What would you expect to find in the measured times
//for an algorithm that is O(n) (linear)?

//DEMO	(demo1, measure the time for a linear algorithm)

//How large a problem can you solve with a linear algorithm?


//What would you expect to find in the measured times
//for an algorithm that is O(n^2) (quadratic)?

//DEMO	(demo1, measure the time for a quadratic algorithm)

//How large a problem can you solve with a quadratic algorithm?


//What would you expect to find in the measured times
//for an algorithm that is O(n^3) (cubic)?

//DEMO	(demo1, measure the time for a cubic algorithm)

//How large a problem can you solve with a cubic algorithm?


//What would you expect to find in the measured times
//for an algorithm that is O(2^n) (exponential)?

//DEMO	(demo1, measure the time for an exponential algorithm)

//How large a problem can you solve with an exponential algorithm?


//What are some of the common Big-Oh functions?
//Which of the common Big-Oh's are practical for large data sizes?

//O(1)		constant
//O(log(n))	logarithmic
//O(n)		linear
//O(n*log(n))	nlogn
//O(n^2)		quadratic
//O(n^3)		cubic
//O(2^n)		exponential


//Classwork
//You may work with a partner.

//The following times were measured when running some programs.
//What Big-Oh function best describes the running time of each program?

//size	time
//1000	 259
//2000	 441
//3000	 754
//4000	1010

//size	time
//100	  142		1^3*142
//200	 1244		2^3*142=1136
//400	 9577		4^3*142=9088
//800	75385		8^3*142=72704

//size	time
//1000	 4372
//2000	17406			13000
//3000	39150			22000
//4000	69754			30000

//size	time
//100	46
//200	47
//300	44
//400	47

//size	time
//26	  269
//28	 1077
//30	 4292
//32	17041


//Using the Ratio of Measured Time and Big-Oh


//Given the definition of Big-Oh, what should be true about T(n)/f(n)
//for large values of n?

//T(n) <= c*f(n)


//Consider an algorithm that is O(n^2). Suppose you measure the running time T(n) of the algorithm for large values of n.


//What should be true about T(n)/(n^2) for large values of n?

//it should converge to positive constant


//What should be true about T(n)/(n^3) for large values of n?

//it should converge to zero


//What should be true about T(n)/(n) for large values of n?

//it should diverge (grow larger as n grows larger)


//DEMO	(demo2, convergence to a constant)


//Using Big-Oh to Estimate Running Time


//If an algorithm is O(n) and it takes 1 second to solve a problem of
//size 10, how long will it take to solve a problem of size 1000?


//If an algorithm is O(n^2) and it takes 1 second to solve a problem of
//size 10, how long will it take to solve a problem of size 1000?


//If an algorithm is O(n^3) and it takes 1 second to solve a problem of
//size 10, how long will it take to solve a problem of size 1000?


//If an algorithm is O(2^n) and it takes 1 second to solve a problem of
//size 10, how long will it take to solve a problem of size 1000?


//If an algorithm is O(1) and it takes 1 second to solve a problem of
//size 10, how long will it take to solve a problem of size 1000?



//Classwork
//You may work together with a partner.

//If an algorithm is O(n) and it takes 0.5 ms to solve a problem of
//size 100, how long will it take to solve a problem of size 500?


//If an algorithm is O(n^2) and it takes 0.5 ms to solve a problem of
//size 100, how long will it take to solve a problem of size 500?


//If an algorithm is O(n^3) and it takes 0.5 ms to solve a problem of
//size 100, how long will it take to solve a problem of size 500?


//If an algorithm is O(2^n) and it takes 0.5 ms to solve a problem of
//size 100, how long will it take to solve a problem of size 500?


//Using Big-Oh to Estimate Problem Size


//If an algorithm is O(n) and it takes 10 seconds to solve a problem of
//size 100, how large a problem can be solved in 1000 seconds?


//If an algorithm is O(n^2) and it takes 10 seconds to solve a problem of
//size 100, how large a problem can be solved in 1000 seconds?


//If an algorithm is O(n^3) and it takes 10 seconds to solve a problem of
//size 100, how large a problem can be solved in 1000 seconds?


//If an algorithm is O(10^n) and it takes 10 seconds to solve a problem of
//size 100, how large a problem can be solved in 1000 seconds?


//Classwork
//You may work together with a partner.

//If an algorithm is O(n) and it takes 2 seconds to solve a problem of
//size 2000, how large a problem can be solved in 16 seconds?


//If an algorithm is O(n^2) and it takes 2 seconds to solve a problem of
//size 2000, how large a problem can be solved in 16 seconds?


//If an algorithm is O(n^3) and it takes 2 seconds to solve a problem of
//size 2000, how large a problem can be solved in 16 seconds?


//If an algorithm is O(2^n) and it takes 2 seconds to solve a problem of
//size 2000, how large a problem can be solved in 16 seconds?



//Worst-Case vs Average-Case


//Is it possible for an algorithm to run faster for some inputs than for others?


//Suppose you sort lists A and B using the same sorting algorithm.
//Could the algorithm be faster for one of the lists?

//A = 0 1 2 3 4 9 5 6 7 8
//B = 5 9 1 8 0 2 6 4 7 3


//What's a Worst-case bound?

//longest time over all inputs of size N


//What's an Average-case bound?

//average time over all inputs of size N
