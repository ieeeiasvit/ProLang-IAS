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
  
  
 # Question 2
  
**Sample Input 2 :**

  abababa
  
**Sample Output 2 :**

  false
