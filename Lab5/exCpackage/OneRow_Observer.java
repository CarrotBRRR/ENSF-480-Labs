package exCpackage;

import java.util.ArrayList;

public class OneRow_Observer implements Observer {

    private Subject subject;
    private ArrayList<Double> data;

    public OneRow_Observer(Subject s) {
        this.subject = s;
        s.add(this);
    }

    public void update(ArrayList<Double> list) {
        this.data = list;
        display();
    }

    public void display() {
        System.out.println();
        System.out.println("Notification to One-Row Observer: Data Changed:");
        for (int i = 0; i < data.size(); i++) {
            System.out.print(data.get(i));
            if (i < data.size() - 1) {
                System.out.print(" ");
            }
        }
        System.out.println();
    }
}
