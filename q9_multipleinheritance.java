interface Animal {
    void eat();
}

interface Vehicle {
    void drive();
}

class Car implements Animal, Vehicle {
    @Override
    public void eat() {
        System.out.println("Car is eating fuel.");
    }

    @Override
    public void drive() {
        System.out.println("Car is being driven.");
    }

    void honk() {
        System.out.println("Honk! Honk!");
    }
}

public class q9_multipleinheritance {
    public static void main(String[] args) {
        Car myCar = new Car();
        myCar.eat();
        myCar.drive();
        myCar.honk();
    }
}
