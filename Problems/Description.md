# Question 1

## Check AB

### Suppose you have a string, S, made up of only 'a's and 'b's. Write a recursive program that checks if the string was generated using the following rules:

**a. The string begins with an 'a'**<br>
**b. Each 'a' is followed by nothing or an 'a' or "bb"**<br>
**c. Each "bb" is followed by nothing or an 'a'**<br>

**If all the rules are followed by the given string, return true otherwise return false.**

------------------------------------------------------------------------------------------------------------

**Constraints :**

  1 <= |S| <= 1000
  where |S| represents length of string S.
  
 ------------------------------------------------------------------------------------------------------------
  
**Input format :**

  String S
  
**Output format :**

  'true' or 'false'
  
 ------------------------------------------------------------------------------------------------------------

**Sample Input 1 :**

  abb
  
**Sample Output 1 :**

  true
  
  
**Sample Input 2 :**

  abababa
  
**Sample Output 2 :**

  false
  <br><br>
  
 # Question 2
 
## Black Square

### Quite recently, a very smart student named Jury decided that lectures are boring, so he downloaded a game called "Black Square" on his super cool touchscreen phone. 

**In this game, the phone's screen is divided into four vertical strips. Each second, a black square appears on some of the strips. According to the rules of the game, Jury must use this second to touch the corresponding strip to make the square go away. As Jury is both smart and lazy, he counted that he wastes exactly ai calories on touching the i-th strip.**

**You've got a string s, describing the process of the game and numbers a1, a2, a3, a4. Calculate how many calories Jury needs to destroy all the squares?**

------------------------------------------------------------------------------------------------------------

**Input format :**

The first line contains four space-separated integers a1, a2, a3, a4 (0 ≤ a1, a2, a3, a4 ≤ 104).

The second line contains string s (1 ≤ |s| ≤ 105), where the і-th character of the string equals "1", if on the i-th second of the game the square appears on the first strip, "2", if it appears on the second strip, "3", if it appears on the third strip, "4", if it appears on the fourth strip.

**Output format :**

Print a single integer — the total number of calories that Jury wastes.

------------------------------------------------------------------------------------------------------------

**Sample Input 1 :**

  1 2 3 4
  
  123214
  
**Sample Output 1 :**

  13
  
  
**Sample Input 2 :**

  1 5 3 2
  
  11221
  
**Sample Output 2 :**

  13
  <br><br>

 # Question 3

## Beautiful Matrix

### You've got a 5 × 5 matrix, consisting of 24 zeroes and a single number one. Let's index the matrix rows by numbers from 1 to 5 from top to bottom, let's index the matrix columns by numbers from 1 to 5 from left to right. In one move, you are allowed to apply one of the two following transformations to the matrix:

**a. Swap two neighboring matrix rows, that is, rows with indexes i and i + 1 for some integer i (1 ≤ i < 5).**<br>
**b. Swap two neighboring matrix columns, that is, columns with indexes j and j + 1 for some integer j (1 ≤ j < 5).**

**You think that a matrix looks beautiful, if the single number one of the matrix is located in its middle (in the cell that is on the intersection of the third row and the third column). Count the minimum number of moves needed to make the matrix beautiful.**
  
 ------------------------------------------------------------------------------------------------------------
  
**Input format :**

The input consists of five lines, each line contains five integers: the j-th integer in the i-th line of the input represents the element of the matrix that is located on the intersection of the i-th row and the j-th column. It is guaranteed that the matrix consists of 24 zeroes and a single number one.
  
**Output format :**

Print a single integer — the minimum number of moves needed to make the matrix beautiful.
  
 ------------------------------------------------------------------------------------------------------------

**Sample Input 1 :**

0 0 0 0 0<br>
0 0 0 0 1<br>
0 0 0 0 0<br>
0 0 0 0 0<br>
0 0 0 0 0<br>
  
**Sample Output 1 :**

3
  
  
**Sample Input 2 :**

0 0 0 0 0<br>
0 0 0 0 0<br>
0 1 0 0 0<br>
0 0 0 0 0<br>
0 0 0 0 0<br>
  
**Sample Output 2 :**

1
<br><br>

# Question 4

## Gravity Flip

### Little Chris is bored during his physics lessons (too easy), so he has built a toy box to keep himself occupied. The box is special, since it has the ability to change gravity.

**There are n columns of toy cubes in the box arranged in a line. The i-th column contains ai cubes. At first, the gravity in the box is pulling the cubes downwards. When Chris switches the gravity, it begins to pull all the cubes to the right side of the box. The figure shows the initial and final configurations of the cubes in the box: the cubes that have changed their position are highlighted with orange.**

**Given the initial configuration of the toy cubes in the box, find the amounts of cubes in each of the n columns after the gravity switch!**

 ------------------------------------------------------------------------------------------------------------
  
**Input format :**

The first line of input contains an integer n (1 ≤ n ≤ 100), the number of the columns in the box. <br>
The next line contains n space-separated integer numbers. The i-th number ai (1 ≤ ai ≤ 100) denotes the number of cubes in the i-th column.
  
**Output format :**

Output n integer numbers separated by spaces, where the i-th number is the amount of cubes in the i-th column after the gravity switch.
  
 ------------------------------------------------------------------------------------------------------------

**Sample Input 1 :**

4<br>
3 2 1 2
  
**Sample Output 1 :**

1 2 2 3 
  
  
**Sample Input 2 :**

3<br>
2 3 8
  
**Sample Output 2 :**

2 3 8 
<br><br>

# Question 5

## Case of the Zeros and Ones

### Andreid the Android is a galaxy-famous detective. In his free time he likes to think about strings containing zeros and ones.

**Once he thought about a string of length n consisting of zeroes and ones. Consider the following operation: we choose any two adjacent positions in the string, and if one them contains 0, and the other contains 1, then we are allowed to remove these two digits from the string, obtaining a string of length n - 2 as a result.**

**Now Andreid thinks about what is the minimum length of the string that can remain after applying the described operation several times (possibly, zero)? Help him to calculate this number.**

 ------------------------------------------------------------------------------------------------------------
  
**Input format :**

First line of the input contains a single integer n (1 ≤ n ≤ 2·10<sup>5</sup>), the length of the string that Andreid has.<br>
The second line contains the string of length n consisting only from zeros and ones.
  
**Output format :**

Output the minimum length of the string that may remain after applying the described operations several times.
  
 ------------------------------------------------------------------------------------------------------------

**Sample Input 1 :**

4<br>
1100
  
**Sample Output 1 :**

0
  
  
**Sample Input 2 :**

5<br>
01010
  
**Sample Output 2 :**

1


**Sample Input 3 :**

8<br>
11101111
  
**Sample Output 3 :**

6
<br><br>

# QUESTION 6

### There are N cities in Chefland numbered from 1 to N and every city has a railway station. Some cities have a train and each city has at most one train originating from it. 

**The trains are represented by an array A, where Ai=0 means the i-th city doesn't have any train originating from it, Ai=1 means the train originating from the i-th city is moving right (to a higher numbered city), and Ai=2 means the train originating from the i-th city is moving left (to a lower numbered city).**

**Each train keeps on going forever in its direction and takes 1 minute to travel from the current station to the next one. There is a special station at city 1 which lets travellers instantaneously teleport to any other station that currently has a train. Teleportation and getting on a train once in the city both take 0 minutes and all trains start at time 0.**

**There are M travellers at city 1, and the i-th traveller has destination city Bi. They ask Chef to guide them to teleport to a particular station from which they can catch a train to go to their destination in the least time possible. In case it's not possible for a person to reach his destination, print −1.**

------------------------------------------------------------------------------------------------------------

**Constraints :**

1≤N,M≤105<br>
0≤Ai≤2<br>
1≤Bi≤N<br>
The sum of N over all test cases is at most 106.<br>
The sum of M over all test cases is at most 106.

 ------------------------------------------------------------------------------------------------------------

**Input format :**

The first line contains an integer T, the number of test cases. Then the test cases follow.<br>
Each test case contains three lines of input.<br>
The first line contains two integers N, M.<br>
The second line contains N integers A1,A2,…,AN.<br>
The third line contains M integers B1,B2,…,BM.<br>

**Output format :**

For each test case, output M space-separated integers C1,C2,…,CM, where Ci is the minimum time required by the i-th traveller to reach his destination and if the i-th traveller can't reach his destination, Ci=−1.

 ------------------------------------------------------------------------------------------------------------

**Sample Input 1 :**

3<br>
5 1<br>
1 0 0 0 0<br>
5<br>
5 1<br>
1 0 0 0 2<br>
4<br>
5 2<br>
2 0 0 0 1<br>
3 1

**Sample Output 1 :**

4<br>
1<br>
-1 0
<br><br>

# QUESTION 7

### Rajesh is planning a heist in the reserve bank of Chefland. They are planning to hijack the bank for D days and print the money. 

**The initial rate of printing the currency is P dollars per day and they increase the production by Q dollars after every interval of d days. For example, after d days the rate is P+Q dollars per day, and after 2d days the rate is P+2Q dollars per day, and so on. Output the amount of money they will be able to print in the given period.**

------------------------------------------------------------------------------------------------------------

**Constraints :**

1≤T≤105<br>
1≤d≤D≤106<br>
1≤P,Q≤106<br>


 ------------------------------------------------------------------------------------------------------------

**Input format :**

The first line contains an integer T, the number of test cases. Then the test cases follow.<br>
Each test case contains a single line of input, four integers D,d,P,Q.

**Output format :**

For each test case, output in a single line the answer to the problem.

 ------------------------------------------------------------------------------------------------------------

**Sample Input 1 :**

3 <br>
2 1 1 1<br>
3 2 1 1<br>
5 2 1 2<br>

**Sample Output 1 :**

3<br>
4<br>
13
