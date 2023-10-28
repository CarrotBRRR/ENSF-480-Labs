package exCpackage;

import java.util.ArrayList;

interface Subject {
    ArrayList<Double> data = null;
    void addData(double data);
    void setData(double data, int index);
    void populate(double[] arr);
    void add(Observer observer);
    void remove(Observer observer);
}
