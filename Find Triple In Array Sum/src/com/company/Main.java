package com.company;

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
	// write your code here
        Scanner s=new Scanner(System.in);
        System.out.println("How many elements :");
        int n=s.nextInt();
        System.out.println("Enter The element for Array :");
        int[] number =new int[n+1];
        for(int i=0;i<n;i++)
        {
            number[i]=s.nextInt();
        }
        System.out.println("Enter the sum for Triuple ");
        int sum=s.nextInt();
        int count=0;
        FindDistinctTriple.getTriple(number,sum);


       /* if(HashingMethod.findTriple(number,sum))
        {
            System.out.println("Found triple");
        }else {
            System.out.println("Not found triple");
        }

        */

        /*
        if(Native_0_1KnapsackProblem.findTriple(number,number.length,sum,count))
        {
            System.out.println("Found triple");
        }else {
            System.out.println("Not found triple");
        }

         */

    }
}
