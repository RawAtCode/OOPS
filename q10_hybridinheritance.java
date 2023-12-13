class Animal {
    void eat() {
        System.out.println("This animal eats food.");
    }
}

interface Vehicle {
    void drive();
}

class Mammal extends Animal implements Vehicle {
    @Override
    public void drive() {
        System.out.println("This mammal can run.");
    }
}

class Dog extends Mammal {
    void bark() {
        System.out.println("Woof! Woof!");
    }
}

public class q10_hybridinheritance {
    public static void main(String[] args) {
        Dog myDog = new Dog();
        myDog.eat();
        myDog.drive();
        myDog.bark();
    }
}
