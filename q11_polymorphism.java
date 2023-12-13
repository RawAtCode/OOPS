class Shape {
    void draw() {
        System.out.println("Drawing a shape");
    }
}

class Circle extends Shape {
    @Override
    void draw() {
        System.out.println("Drawing a circle");
    }
}

class Rectangle extends Shape {
    @Override
    void draw() {
        System.out.println("Drawing a rectangle");
    }
}

public class q11_polymorphism {
    static void display(String message) {
        System.out.println("Displaying: " + message);
    }

    static void display(String message, int count) {
        for (int i = 0; i < count; i++) {
            System.out.println("Displaying: " + message);
        }
    }

    public static void main(String[] args) {
        Shape shape1 = new Circle();
        Shape shape2 = new Rectangle();

        shape1.draw();
        shape2.draw();

        display("Hello");
        display("Java", 3);
    }
}
