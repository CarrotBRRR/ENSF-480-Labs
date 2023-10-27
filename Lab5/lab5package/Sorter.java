package lab5package;
import java.util.List;

public interface Sorter<E extends Number & Comparable<E>> {
    void sort(List<Item<E>> list);
}

