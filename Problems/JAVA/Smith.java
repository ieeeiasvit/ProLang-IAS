import java.util.*;
class Smith 
{
    int n;
    Smith ()
    {
        n= 0;
    }
    
    void input ()
    {
        Scanner in= new Scanner (System.in);
        System.out.println ("Enter a no.");
        n= in.nextInt ();
    }
    
    void checkSmith ()
    {
        int i, h, s= 0, k= n;
        for (i= 1; i <= k;)
        {
            if (k % i == 0 && checkPrime (i))
            {
                h= k / i;
                k= h;
                s= s + sum (i);
            }
            else 
                i++;
        }
        
        if (sum(n) == s)
        System.out.println ("Smith No.");
        else
        System.out.println ("Not A Smith No.");
    }
    
    boolean checkPrime (int a)
    {
        int i, c= 0;
        for (i= 1; i<= a; i++)
        {
            if (a % i == 0)
            c++;
        }
        return (c == 2);
    }
    
    int sum (int b)
    {
        int d, s= 0;
        while (b > 0)
        {
            d= b % 10;
            s= s + d;
            b= b / 10;
        }
        return (s);
    }    
    
    static void main ()
    {
        Smith ob= new Smith ();
        ob.input ();
        ob.checkSmith ();
    }
}

        
    
