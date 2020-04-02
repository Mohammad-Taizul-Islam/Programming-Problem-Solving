package com.company;

import java.util.Arrays;
import java.util.Scanner;

public class Main {

    public static void main(String[] args) {
	// write your code here

        Scanner s=new Scanner(System.in);

        String string=s.nextLine();
        String find=s.next();
        getNumberOfOccurence(string,find);








        /*
        String str=s.nextLine();
        countNumberOfWords(str);


         */

        /*
        String str1,str2;
        str1=s.nextLine();
        str2=s.nextLine();
        anagramOrNot(str1,str2);


         */


        /*
        String str=s.nextLine();
        char []st=str.toCharArray();
        duplicatCharacterInArray(st);

         */
    }

    private static void getNumberOfOccurence(String string, String find) {
       // int count=string.length()-string.replaceAll(find,"").length();
        //System.out.println(find + " is in the string :"+ count +" times");
        int indexOf=0;
        int count=0;
        while(indexOf >-1)
        {
            indexOf=string.indexOf(find,indexOf+1);
            if(indexOf > -1)
            {
                count++;
            }
        }

        System.out.println(find + " is in the string :"+ count +" times");



    }

    private static void countNumberOfWords(String str) {
        char s[]=str.toCharArray();
        int c=1;
        for (int i=0;i<s.length;i++)
        {
            if(s[i]==' ')
            {
                c++;
            }
        }

        System.out.println("The number of words of The given String is :"+c);
    }



    /*
    checking two string anagaram or not...
     */

    private static void anagramOrNot(String str1,String str2)
    {
        boolean status;
        if(str1.length()!=str2.length())
        {
            status=false;

        }else {
            char []a1=str1.toLowerCase().toCharArray();
            char []a2=str2.toLowerCase().toCharArray();
            Arrays.sort(a1);
            Arrays.sort(a2);

            status=Arrays.equals(a1,a2);
        }

        if (status)
        {
            System.out.println(str1 +" is Annagram to " +str2);
        }else {
            System.out.println(str1 +" is not Annagram to " +str2);
        }
    }


    /*duplicat character delection */
    private static void duplicatCharacterInArray(char[] st) {
        for(int i=0;i<st.length;i++)
        {
            for(int j=i+1;j<st.length;j++)
            {
                if(st[i]==st[j])
                {
                    System.out.print(st[i] + " ");
                }
            }
        }
    }
}
