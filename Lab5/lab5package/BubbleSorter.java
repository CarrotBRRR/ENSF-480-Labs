package lab5package;

import java.util.List;

public class BubbleSorter<E extends Number & Comparable<E>> implements Sorter<E> {
    @Override
    public void sort(List<Item<E>> list) {
        int n = list.size();
        boolean swapped;
        do {
            swapped = false;
            for (int i = 1; i < n; i++) {
                if (list.get(i - 1).getItem().doubleValue() > list.get(i).getItem().doubleValue()) {
                    Item<E> temp = list.get(i - 1);
                    list.set(i - 1, list.get(i));
                    list.set(i, temp);
                    swapped = true;
                }
            }
        } while (swapped);
    }
}

