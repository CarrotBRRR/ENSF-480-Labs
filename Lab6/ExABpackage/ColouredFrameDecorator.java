package ExABpackage;

import java.awt.*;

public class ColouredFrameDecorator extends Decorator {
    private int thickness;

    public ColouredFrameDecorator(
        Component c, int x, int y, int width, int height, int thickness){

        super(c, x, y, width, height);
        this.thickness = thickness;

    }

    @Override
    public void draw(Graphics g){
        this.getCmp().draw(g);
        Graphics2D g2d = (Graphics2D)g;
        Stroke oldStroke = g2d.getStroke();
        Color oldColour = g2d.getColor();
        g2d.setStroke(new BasicStroke(this.thickness));
        g2d.setColor(Color.red);
        g2d.drawRect(this.getX(), this.getY(), this.getWidth(), this.height);
        g2d.setStroke(oldStroke);
        g2d.setColor(oldColour);

    }
}
