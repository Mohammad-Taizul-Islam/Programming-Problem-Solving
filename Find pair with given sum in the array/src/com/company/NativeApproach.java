package com.company;

public class NativeApproach {

    public void getPairOfSum(int num[],int sumItem)
    {
        for(int i=0;i<num.length-1;i++)
        {
            for (int j=0;j<num.length;j++)
            {
                if((num[i]+num[j])==sumItem){
                    System.out.println("Pair of sum item are :"+num[i]+"  "+num[j]);
                }
            }
        }
    }
}
