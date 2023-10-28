package exABpackage;

import java.util.List;

public class InsertionSorter<E extends Number & Comparable<E>> implements Sorter<E> {
    @Override
    public void sort(List<Item<E>> list) {
        int n = list.size();
        for (int i = 1; i < n; i++) {
            Item<E> key = list.get(i);
            int j = i - 1;
            while (j >= 0 && list.get(j).getItem().doubleValue() > key.getItem().doubleValue()) {
                list.set(j + 1, list.get(j));
                j = j - 1;
            }
            list.set(j + 1, key);
        }
    }
}

