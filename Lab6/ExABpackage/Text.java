package ExABpackage;

import java.awt.*;

public class Text implements Component{
    private int x, y;
    private String text;


    public Text(String text, int x, int y) {
        this.text = text;
        this.x = x;
        this.y = y;
    }

    public void draw(Graphics g){
        g.drawString(text, x, y);
    }
}
