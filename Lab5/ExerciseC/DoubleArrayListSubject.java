package ExerciseC;

import java.util.ArrayList;

public class DoubleArrayListSubject implements Subject {
    public ArrayList<Double> data;
    private ArrayList<Observer> observers;

    public DoubleArrayListSubject() {
        observers = new ArrayList<Observer>();
        data = new ArrayList<Double>();
    }

    // displays current content of data
    public void display() {
        if (data.isEmpty()) {
            System.out.println("Empty List...");
        } else {
            System.out.print("mydata object is populated with: ");
            for (int i = 0; i < data.size(); i++) {
                System.out.print(data.get(i));
                if (i < data.size() - 1) {
                    System.out.print(", ");
                }
            }
            System.out.println();
        }
    }

    public ArrayList<Double> getData() {
        return data;
    }

    // notifies all observers and updates
    public void notifyObserver() {
        for (int i = 0; i < observers.size(); i++) {
            Observer o = observers.get(i);
            o.update(data);
        }
    }

    // add double to data arraylist
    public void addData(double value) {
        Double newDouble = Double.valueOf(value);
        data.add(newDouble);
        notifyObserver();
    }

    // set double at index in arraylist
    public void setData(double value, int index) {
        Double newDouble = Double.valueOf(value);
        data.set(index, newDouble);
        notifyObserver();
    }

    // populate data arraylist with array of doubles
    public void populate(double[] arr) {
        for (double value : arr) {
            data.add(Double.valueOf(value));
        }
        notifyObserver();
    }
    
    // remove an observer
    public void remove(Observer observer) {
        observers.remove(observer);
    }
    
    // add an observer
    public void add(Observer observer) {
        observers.add(observer);
        observer.update(data);
    }
}
