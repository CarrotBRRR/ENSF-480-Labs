package exCpackage;

import java.util.ArrayList;

public class ThreeColumnTable_Observer implements Observer{
    private Subject subject;
    private ArrayList<Double> data;

    public ThreeColumnTable_Observer(Subject s) {
        this.subject = s;
        s.add(this);
    }

    public void update(ArrayList<Double> list) {
        this.data = list;
        display();
    }

    public void display() {
        System.out.println();
        System.out.println("Notification to Three-Column Table Observer: Data Changed:");
        int counter = 0;
        for (int i = 0; i < data.size(); i++) {
            if (counter == 3) {
                System.out.println();
                counter = 0;
            }
            System.out.print(data.get(i));
            counter++;
            if (i < data.size() - 1) {
                System.out.print(" ");
            }
        }
        System.out.println();
        
    }
}
