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
