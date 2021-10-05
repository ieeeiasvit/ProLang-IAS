# Question 1

## Check AB

### Suppose you have a string, S, made up of only 'a's and 'b's. Write a recursive program that checks if the string was generated using the following rules:


**a. The string begins with an 'a'**


**b. Each 'a' is followed by nothing or an 'a' or "bb"**


**c. Each "bb" is followed by nothing or an 'a'**


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
  
-------------------------------------------------
**Sample Input 1 :**

  abb
  
**Sample Output 1 :**

  true
  
  
**Sample Input 2 :**

  abababa
  
**Sample Output 2 :**

  false
  
  
 # Question 2
 
## Black Square

### Quite recently, a very smart student named Jury decided that lectures are boring, so he downloaded a game called "Black Square" on his super cool touchscreen phone. In this game, the phone's screen is divided into four vertical strips. Each second, a black square appears on some of the strips. According to the rules of the game, Jury must use this second to touch the corresponding strip to make the square go away. As Jury is both smart and lazy, he counted that he wastes exactly ai calories on touching the i-th strip.

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
  

 # Question 3
  
