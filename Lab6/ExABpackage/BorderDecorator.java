package ExABpackage;
import java.awt.*;

public class BorderDecorator extends Decorator{
    public BorderDecorator (Component c, int x, int y, int width, int height) {
        super(c, x, y, width, height);
    }

    @Override
    public void draw(Graphics g) {
        this.getCmp().draw(g);
        Stroke dashed = new BasicStroke(3, BasicStroke.CAP_BUTT,
        BasicStroke.JOIN_BEVEL, 0, new float[]{9}, 0);
        Graphics2D g2d = (Graphics2D) g;
        g2d.setStroke(dashed);
        g.drawRect(this.getX(), this.getY(), this.getWidth(), this.height);
    }
}
