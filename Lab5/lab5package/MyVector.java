package lab5package;
import java.util.ArrayList;

public class MyVector<E extends Number & Comparable<E>> {
    private ArrayList<Item<E>> storageM;
    private Sorter<E> sorter;

    public MyVector(int n) {
        storageM = new ArrayList<>(n);
    }

    public MyVector(ArrayList<Item<E>> arr) {
        storageM = new ArrayList<>(arr);
    }

    public void add(Item<E> value) {
        storageM.add(value);
    }

    public void setSortStrategy(Sorter<E> s) {
        sorter = s;
    }

    public void performSort() {
        if (sorter != null) {
            sorter.sort(storageM);
        }
    }

    public void display() {
        for (int i = 0; i < storageM.size(); i++) {
            System.out.print(storageM.get(i).getItem());
            if (i < storageM.size() - 1) {
                System.out.print(" ");
            }
        }
        System.out.println();
    }
}

