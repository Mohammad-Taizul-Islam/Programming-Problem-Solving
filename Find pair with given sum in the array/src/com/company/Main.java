package com.company;

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
	// write your code here
        Scanner s=new Scanner(System.in);
        int n=s.nextInt();
        int num[]=new int[n+1];
        for(int i=0;i<n;i++)
        {
            num[i]=s.nextInt();
        }
        int sumItem=s.nextInt();
        HashingMethod.getPairOfSum(num,sumItem);
       // NLogNMethod nm=new NLogNMethod();
       // nm.getPairOfSum(num,sumItem);
       // NativeApproach na=new NativeApproach();
        //na.getPairOfSum(num,sumItem);
    }
}
