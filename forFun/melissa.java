
import java.util.Scanner;

public class melissa {
    /** Main Method */
  public static void main (String[] args){
     
//Create a Scanner
Scanner input = new Scanner (System.in);

//Keep reading data until the input is 0
  // Read the next data
  System.out.print(
    "Enter an integer (the input ends if it is 0): ");
  //intitialize variables
      int data, positive, negative, count;
      data = input.nextInt();
      positive = 0;
      negative = 0;
      count = 0;
      int sum = data;
     
      while (data != 0) {
          data = input.nextInt();
    count++;
    if (data > 0)
        positive++;
    if (data < 0) {
        negative++;
    }
      }
      float average = (float) sum / count;
  System.out.println("The number of positives is " + positive);
  System.out.println("The number of negatives is " + negative);
  System.out.println("The total is " + count);
  System.out.println("The average is" + average);
     
  }    
}