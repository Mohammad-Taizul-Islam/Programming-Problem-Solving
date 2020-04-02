package com.company;

import java.util.Arrays;

public class FindDistinctTriple {
    public static void getTriple(int []num,int sum)
    {
        Arrays.sort(num);

        for(int i=0;i<=num.length-3;i++)
        {
            int k=sum-num[i];
            int low=i+1,high=num.length-1;

            while (low<high)
            {
                if((num[low]+num[high])<k)
                {
                    low++;
                }else if((num[low]+num[high])>k)
                {
                    high--;
                }else {
                    System.out.println("("+num[i]+" "+ num[low]+ " " + num[high] + ")");
                    low++;
                    high--;
                }
            }
        }
    }
}
