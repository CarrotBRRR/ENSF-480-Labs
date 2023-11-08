package ExABpackage;

public abstract class Decorator implements Component{
    private Component cmp;
    private int x, y, width;
    public int height;

    public Decorator(Component c, int x, int y, int width, int height) {
        this.cmp = c;
        this.x = x;
        this.y = y;
        this.width = width;
        this.height = height;
    }

    public Component getCmp() {
        return cmp;
    }

    // Getters
    public int getX() {
        return x;
    }

    public int getY() {
        return y;
    }

    public int getWidth() {
        return width;
    }

}
