package com.HFDP;

public abstract class Duck {
    FlyBehavior flyBehavior;

    public void performFly(){
        flyBehavior.fly();
    }

    public void setFlyBehavior(FlyBehavior fb){
        flyBehavior = fb;
    }

    public abstract void display();
}