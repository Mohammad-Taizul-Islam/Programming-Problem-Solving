package com.company;

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
	// write your code here
        Scanner s=new Scanner(System.in);












        /*
        String sentence=s.nextLine();
        getReverseWords(sentence);


         */






        /*
        String str=s.nextLine();

        System.out.println(getReverseString(str));


         */




        /*
        double num1,num2;
        System.out.println("Enter Numbers :");
        num1=s.nextDouble();
        num2=s.nextDouble();
        System.out.println("Enter Operator :");
        char op=s.next().charAt(0);
        basicCalculator(num1,num2,op);


         */




        /*
        int number=s.nextInt();
        getEvenOddDigitInNumber(number);


         */







        /*
        int n=s.nextInt();
        int num[]=new int[n];
        for(int i=0;i<n;i++)
        {
            num[i]=s.nextInt();
        }

        System.out.println("First duplicate element is : " +getFirstDuplicat(num));



         */



      /*  long number=s.nextLong();
        CountNumberOfDigits cd=new CountNumberOfDigits();
       // int digits=cd.getNumberOfDigits(number);
        int digits=cd.getNumberOfDigitsByRec(number);
        System.out.println("Digits of The given number is : "+digits);

       */
    }

    private static void getReverseWords(String sentence) {
        String words[]=sentence.split(" ");
        for(int i=words.length-1;i>=0;i--)
        {
            //System.out.print(words[i] +" ");
            System.out.print(getReverseString(words[i]) + " ");
        }

    }

    private static String getReverseString(String str) {
        if(str == null || str.length() <=0)
            return str;
        return getReverseString(str.substring(1))+str.charAt(0);
    }

    private static void basicCalculator(double num1, double num2, char op) {

        switch (op)
        {
            case '+':
                System.out.println(num1+num2);
                break;
            case '*' :
                System.out.println(num1*num2);
                break;
            case '/' :
               try {
                   System.out.println(num1/num2);
               }catch (Exception e)
               {
                   System.out.println(e);
               }
               break;
            case '-':
                System.out.println(num1-num2);
                break;

            default:
                System.out.println("Operator is wrong ");
                break;

        }
    }

    public static void getEvenOddDigitInNumber(int n)
    {
        int even=0,odd=0;
        for (;n!=0; )
        {
            if((n/10)%2==0)
            {
                even++;
            }else {
                odd++;
            }
            n=n/10;
        }

        System.out.println("Number of Odd digit of the given number is  :"+odd);
        System.out.println("Number of Even digit of the given number is :" +even);
    }


    public static int getNumberOfDigits(long n)
    {
        int count=0;
        while(n!=0)
        {
            n=n/10;
            count++;
        }
        return count;
    }
    public static int getNumberOfDigitsByRec(long n)
    {
        if(n==0) return 0;
        else
            return 1+getNumberOfDigitsByRec(n/10);
    }

    public static int getFirstDuplicat(int num[])
    {

        for(int i=0;i<num.length;i++)
        {
            for(int j=i+1;j<num.length;j++)
            {
                if(num[j]==num[i])
                {
                    // System.out.println("First duplicate element is : " +num[i]);
                    return num[i];
                }
            }
        }

        return -1;
    }
}
