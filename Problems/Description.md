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

### There are N cities in Chefland numbered from 1 to N and every city has a railway station. Some cities have a train and each city has at most one train originating from it. 

**The trains are represented by an array A, where Ai=0 means the i-th city doesn't have any train originating from it, Ai=1 means the train originating from the i-th city is moving right (to a higher numbered city), and Ai=2 means the train originating from the i-th city is moving left (to a lower numbered city).**

**Each train keeps on going forever in its direction and takes 1 minute to travel from the current station to the next one. There is a special station at city 1 which lets travellers instantaneously teleport to any other station that currently has a train. Teleportation and getting on a train once in the city both take 0 minutes and all trains start at time 0.**

**There are M travellers at city 1, and the i-th traveller has destination city Bi. They ask Chef to guide them to teleport to a particular station from which they can catch a train to go to their destination in the least time possible. In case it's not possible for a person to reach his destination, print −1.**

------------------------------------------------------------------------------------------------------------

**Constraints :**

1≤N,M≤10<sup>5</sup><br>
0≤A<sub>i</sub>≤2<br>
1≤B<sub>i</sub>≤N<br>
The sum of N over all test cases is at most 10<sup>6</sup>.<br>
The sum of M over all test cases is at most 10<sup>6</sup>.

 ------------------------------------------------------------------------------------------------------------

**Input format :**

The first line contains an integer T, the number of test cases. Then the test cases follow.<br>
Each test case contains three lines of input.<br>
The first line contains two integers N, M.<br>
The second line contains N integers A1,A2,…,AN.<br>
The third line contains M integers B1,B2,…,BM.

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

# Question 4

### Rajesh is planning a heist in the reserve bank of Chefland. They are planning to hijack the bank for D days and print the money. 

**The initial rate of printing the currency is P dollars per day and they increase the production by Q dollars after every interval of d days. For example, after d days the rate is P+Q dollars per day, and after 2d days the rate is P+2Q dollars per day, and so on. Output the amount of money they will be able to print in the given period.**

------------------------------------------------------------------------------------------------------------

**Constraints :**

1≤T≤10<sup>5</sup><br>
1≤d≤D≤10<sup>6</sup><br>
1≤P,Q≤10<sup>6</sup>

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
5 2 1 2

**Sample Output 1 :**

3<br>
4<br>
13
<br><br>

# Question 5

## Maximum Weaving Number

**Given two numbers A=a1a2...an and B= b1b2...Bm, we can weave these two numbers to produce the following numbers.**

**a1b1a2b2...anbnb(n+1)...bm,, if m>n<br>
a1b1a2b2...ambma(m+1)...an if m<n<br>
a1b1a2b2...anbn if m=n.<br>
Similarly, we can also get b1a1b2a2.... as above.**

**We can also start weaving from the end. By weaving from the end, we can form the words: anbnb(n-1)a(n-1)... , bnanb(n-1)a(n-1)...<br>
Thus, by weaving A and B, four new numbers are formed: weaving from the beginning, starting with A, weaving from the beginning, starting with B, weaving from the end, starting with A, weaving from the end, starting with B. While weaving two numbers A and B, if all the digits of A are weaved and some more digits are there in B, the remaining digits of B are just appended at the end.** 

**For example, if A = 27 and B = 54 then there are four numbers that can be woven<br>
2574<br>
5247<br>
7425<br>
4752<br>
and maximum out of these is 7425<br>
Given two numbers A and B, write a code to compute the numbers woven by A &B and find the maximum woven number.**

 ------------------------------------------------------------------------------------------------------------

**Input format :**

First line contains the number A<br>
Next line contains the number B

**Output format :**

Print the maximum woven number
<br><br>

# Question 6

### You are developing a smartphone app. You have a list of potential customers for your app. Each customer has a budget and will buy the app at your declared price if and only if the price is less than or equal to the customer's budget.

**You want to fix a price so that the revenue you earn from the app is maximized. Find this maximum possible revenue.**

**For instance, suppose you have 4 potential customers and their budgets are 30, 20, 53 and 14. In this case, the maximum revenue you can get is 60.**

 ------------------------------------------------------------------------------------------------------------

**Input format :**

Line 1 : N, the total number of potential customers.<br>
Lines 2 to N+1: Each line has the budget of a potential customer.

**Output format :**

The output consists of a single integer, the maximum possible revenue you can earn from selling your app.

 ------------------------------------------------------------------------------------------------------------

**Sample Input 1 :**

4<br>
30<br>
20<br>
53<br>
14

**Sample Output 1 :**

60


**Sample Input 2 :**

5<br>
40<br>
3<br>
65<br>
33<br>
21

**Sample Output 2 :**

99
<br><br>

# Question 7

### Most problems in cp highlight coders love for food and cooking but little is known about his love for racing sports. 

**He is an avid Formula 1 fan. He went to watch this year's Indian Grand Prix at New Delhi. He noticed that one segment of the circuit was a long straight road. It was impossible for a car to overtake other cars on this segment. Therefore, a car had to lower down its speed if there was a slower car in front of it. While watching the race, Chef started to wonder how many cars were moving at their maximum speed.**

**Formally, you're given the maximum speed of N cars in the order they entered the long straight segment of the circuit. Each car prefers to move at its maximum speed. If that's not possible because of the front car being slow, it might have to lower its speed. It still moves at the fastest possible speed while avoiding any collisions. For the purpose of this problem, you can assume that the straight segment is infinitely long.**

**Count the number of cars which were moving at their maximum speed on the straight segment.**

------------------------------------------------------------------------------------------------------------

**Constraints :**

1 ≤ T ≤ 100<br>
1 ≤ N ≤ 10,000<br>
All speeds are distinct positive integers that fit in a 32 bit signed integer.<br>
Each input file will not be larger than 4 MB (4,000,000,000 bytes) in size.

WARNING! The input files are very large. Use faster I/O.

 ------------------------------------------------------------------------------------------------------------

**Input format :**

The first line of the input contains a single integer T denoting the number of test cases to follow.<br>
Description of each test case contains 2 lines.<br>
The first of these lines contain a single integer N, the number of cars.<br>
The second line contains N space separated integers, denoting the maximum speed of the cars in the order they entered the long straight segment.

**Output format :**

For each test case, output a single line containing the number of cars which were moving at their maximum speed on the segment.

 ------------------------------------------------------------------------------------------------------------

**Sample Input 1 :**

3<br>
1<br>
10<br>
3<br>
8 3 6<br>
5<br>
4 5 1 2 3

**Sample Output 1 :**

1<br>
2<br>
2
<br><br>

# Question 8

### Given an array A1,A2…AN, find the minimum number of operations (possibly zero) required to convert all integers in A to 0.

**In one operation, you choose a non-negative integer p (p≥0), select at most K indices in the array A, and for each selected index i, replace Ai with A<sub>i</sub> ⊕ 2p. Here, ⊕ denotes bitwise XOR.**

------------------------------------------------------------------------------------------------------------

**Constraints :**

1≤T≤10<sup>5</sup><br>
1≤N,K≤10<sup>5</sup><br>
0≤Ai≤10<sup>9</sup><br>
The sum of N over all test cases does not exceed 2⋅10<sup>5</sup>

 ------------------------------------------------------------------------------------------------------------

**Input format :**

The first line contains an integer T - the number of test cases. Then T test cases follow.<br>
The first line of each test case contains two integers N, K - the size of the array and the maximum number of elements you can select in an operation.<br>
The second line of each test case contains N integers A1,A2…AN.

**Output format :**

For each test case, output the minimum number of operations to make all elements of the array 0.

 ------------------------------------------------------------------------------------------------------------

**Sample Input 1 :**

1<br>
3 2<br>
3 2<br>
3 6 10

**Sample Output 1 :**

5
<br><br>

# Question 9

### Chefland has 7 days in a week. Chef is very conscious about his work done during the week.

**There are two ways he can spend his energy during the week. The first way is to do x units of work every day and the second way is to do y (>x) units of work for the first d (<7) days and to do z (<x) units of work thereafter since he will get tired of working more in the initial few days.**

**Find the maximum amount of work he can do during the week if he is free to choose either of the two strategies.**

------------------------------------------------------------------------------------------------------------

**Constraints :**

1≤T≤5⋅10<sup>3</sup><br>
1≤d<7<br>
1≤z<x<y≤18

 ------------------------------------------------------------------------------------------------------------

**Input format :**

The first line contains an integer T, the number of test cases. Then the test cases follow.<br>
Each test case contains a single line of input, four integers d, x, y, z.

**Output format :**

For each testcase, output in a single line the answer to the problem.

 ------------------------------------------------------------------------------------------------------------

**Sample Input 1 :**

3<br>
1 2 3 1<br>
6 2 3 1<br>
1 2 8 1

**Sample Output 1 :**

14<br>
19<br>
14
<br><br>

# Question 10

## Left Rotation

### A left rotation operation on an array of size n shifts each of the array's elements 1 unit to the left. Given an integer, d, rotate the array that many steps left and return the result.

------------------------------------------------------------------------------------------------------------

**Constraints :**

1≤n≤10<sup>5</sup><br>
1≤d<n<br>
1≤a[i]≤10<sup>6</sup>

 ------------------------------------------------------------------------------------------------------------

**Input format :**

The first line contains two space-separated integers that denote n, the number of integers, and d, the number of left rotations to perform.
The second line contains n space-separated integers that describe arr[].

**Output format :**

A single line containing n space-separated integers after performing the rotation.

 ------------------------------------------------------------------------------------------------------------

**Sample Input 1 :**

5 4<br>
1 2 3 4 5 

**Sample Output 1 :**

5 1 2 3 4
<br><br>
