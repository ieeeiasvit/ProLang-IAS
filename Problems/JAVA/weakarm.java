import java.io.*;
class weakarm
{
public static void main(String args[])throws IOException
{
BufferedReader br=new BufferedReader(new InputStreamReader(System.in));
int n,m,c=0,i;
double s=0,d;
System.out.println("Enter the number to check whether the number is armstrong or not  : -  ");
n=Integer.parseInt(br.readLine());
m=n;
while(m>0)
{
c++;
m=m/10;
    }
    m=n;
while(m>0)
{
d=m%10;
s=s+Math.pow(d,c);
m=m/10;
c--;
    }
        if(n==(int)(s))
    {
System.out.println(n+" is an weakarm number ");
    }
    else
{
System.out.println(n+" is not an weakarm number ");
    }   
    }
}