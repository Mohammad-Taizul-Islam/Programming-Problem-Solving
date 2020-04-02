package com.company;

public class Native_0_1KnapsackProblem {

    public static boolean findTriple(int num[],int n,int sum,int count)
    {
        if(count==3 && sum==0)
        {
            return true;
        }

        if(count ==3 || sum <0 || n==0)
        {
            return  false;
        }


        return findTriple(num,n-1,sum-num[n-1],count+1) || findTriple(num,n-1,sum,count);
    }
}
