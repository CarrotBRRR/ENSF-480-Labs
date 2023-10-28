package exCpackage;

import java.util.ArrayList;

public class FiveRowsTable_Observer implements Observer{

    private Subject subject;
    private ArrayList<Double> data;

    public FiveRowsTable_Observer(Subject s) {
        this.subject = s;
        s.add(this);
    }

    public void update(ArrayList<Double> list) {
        this.data = list;
        display();
    }

    public void display() {
        System.out.println();
        System.out.println("Notification to Five-Rows Table Observer: Data Changed:");

        String[] strings = new String[5];
        int counter = 0;
        for (int i = 0; i < data.size(); i++) {
            if (strings[counter] == null){
                strings[counter] = data.get(i) + " ";
            } else { 
                strings[counter] += (data.get(i) + " ");

            }

            counter++;
            if(counter == 5){
                counter = 0;
            }
        }
        
        for(int i = 0; i < 5; i++){
            System.out.println(strings[i]);
        }

    }
}
