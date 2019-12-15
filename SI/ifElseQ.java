
public class ifElseQ {

    public static void main(String[] args) {
        // TODO code application logic here
        int x = 3;
        int y = 2;
        String animal;
        
        if (x == 5) {
            if (y == 2) animal = "cat";
            else animal = "dog";
        } else if (y == 2) {
            if (x == 3) animal = "penguin";
            else animal = "zebra";
        } else animal = "hamster";
        
        System.out.println("Your animal is " + animal);
    }
}
