package lab5package;

import java.util.List;

public class SelectionSorter<E extends Number & Comparable<E>> implements Sorter<E> {
    @Override
    public void sort(List<Item<E>> list) {
        int n = list.size();
        for (int i = 0; i < n - 1; i++) {
            int minIndex = i;
            for (int j = i + 1; j < n; j++) {
                if (list.get(j).getItem().compareTo(list.get(minIndex).getItem()) < 0) {
                    minIndex = j;
                }
            }
            if (minIndex != i) {
                Item<E> temp = list.get(i);
                list.set(i, list.get(minIndex));
                list.set(minIndex, temp);
            }
        }
    }
}

