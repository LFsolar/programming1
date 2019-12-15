/*
Lisa Sun
MWF 11am
Program 2
This program calculates the total price
of a pizza.
 */

/**
 *
 * @author TA
 */
import java.util.Scanner;

public class PizzaPie {
    public static void main(String[] args){
        double toppings;
        double dip;
        double total;
        final double SALES_TAX = 0.085; //constant
        double tax;
        double sum;
        
        Scanner input = new Scanner(System.in);
        
        System.out.println("How much is your toppings?");
        toppings = input.nextDouble();
        
        System.out.println("How much is your dipping sauce?");
        dip = input.nextDouble();
        
        // add prices to get total
        total = toppings + dip;
        
        // calculate sales tax
        tax = total * SALES_TAX;
        
        // calculate sum of tax + total
        sum = tax + total;
        
        // print
        System.out.println("The total price of your pizza is " + total);
        System.out.println("Your sales tax is " + tax);
        System.out.println("Your total cost is " + sum);
    }
}

