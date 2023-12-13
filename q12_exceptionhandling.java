import java.util.Scanner;

public class q12_exceptionhandling {
    public static void main(String[] args) {
        Scanner scanner = new Scanner(System.in);
        try {
            System.out.print("Enter a number: ");
            int numerator = scanner.nextInt();
            System.out.print("Enter a divisor: ");
            int divisor = scanner.nextInt();
            int result = divideNumbers(numerator, divisor);
            System.out.println("Result of division: " + result);
        } catch (ArithmeticException e) {
            System.out.println("Error: " + e.getMessage());
        } catch (Exception e) {
            System.out.println("An error occurred: " + e.getMessage());
        } finally {
            System.out.println("Finally block executed");
            scanner.close();
        }
        System.out.println("Program continues after exception handling");
    }

    private static int divideNumbers(int numerator, int divisor) {
        return numerator / divisor;
    }
}
