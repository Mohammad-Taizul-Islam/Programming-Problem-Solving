package com.company;

import java.util.HashSet;
import java.util.Scanner;
import java.util.Set;

public class Main {

    public static void main(String[] args) {
	// write your code here
        Scanner s=new Scanner(System.in);
        int n=s.nextInt();
        int []num=new int[n+1];
        for(int i=0;i<num.length;i++)
        {
            num[i]=s.nextInt();
        }
        if(checkZeroSumSubArray(num))
        {
            System.out.println("Yes");
        }else {
            System.out.println("No");
        }
    }

    private static boolean checkZeroSumSubArray(int []array){
        Set<Integer> set=new HashSet<>();
        set.add(0);
        int sum=0;
        for (int value : array) {

            sum += value;
            if (set.contains(sum)) {
                return true;
            }
            set.add(sum);
        }
        return false;
    }
}
