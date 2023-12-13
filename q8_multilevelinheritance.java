class Animal {
    void eat() {
        System.out.println("This animal eats food.");
    }
}

class Mammal extends Animal {
    void run() {
        System.out.println("This mammal can run.");
    }
}

class Dog extends Mammal {
    void bark() {
        System.out.println("Woof! Woof!");
    }
}

public class q8_multilevelinheritance {
    public static void main(String[] args) {
        Dog myDog = new Dog();
        myDog.eat();
        myDog.run();
        myDog.bark();
    }
}
