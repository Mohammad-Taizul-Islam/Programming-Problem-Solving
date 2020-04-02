package com.company;

import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
	// write your code here
        Scanner s=new Scanner(System.in);
        System.out.println("How many Elements  ?");
        int n=s.nextInt();
        int []num=new int[n+1];
        System.out.println("Eneter Elements..");
        for(int i=0;i<n;i++)
        {
            num[i]=s.nextInt();
        }
        System.out.println("Enter Item for Search :");
        int item=s.nextInt();
      //  int index=iterativeBinarySearch(num,item);
        int index=recursiveBinarySearch(num,item,0,num.length);
        if(index>0){
            System.out.println(item + " is presents in index :" + index);
        }else {
            System.out.println(item + "  doesn't present in the list ");
        }
    }



    //Recursive binary Search............
    private static int recursiveBinarySearch(int[] num, int item, int low, int high) {
        if(low >high) return -1;
        int mid=low +(high-low)/2;
        if(item==num[mid])
            return mid;
        else if(item < num[mid])
        return recursiveBinarySearch(num,item,low,mid-1);
        else
            return recursiveBinarySearch(num,item,mid+1,high);
    }


    //iterative binary search...........


    private static int iterativeBinarySearch(int[] num,int item) {
        int low=0;
        int high=num.length-1;
        while (low<=high)
        {
            int mid=(low+high)/2;
            if(item==num[mid])
                return mid;
            else if(item < num[mid])
                high=mid-1;
            else
                low=mid+1;

        }
        return -1;
    }
}
