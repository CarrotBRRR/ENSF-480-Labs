import java.awt.Font;
import java.awt.Graphics;
import javax.swing.JFrame;
import javax.swing.JPanel;

import ExABpackage.*;

public class DemoDecoratorPatternExB extends JPanel {
	Component t;
	
	public DemoDecoratorPatternExB(){
   	 t = new Text ("Hello World", 60, 80); 
	}
	
    public void paintComponent(Graphics g){
 	    int fontSize = 10;
 	    g.setFont(new Font("TimesRoman", Font.PLAIN, fontSize));

 	    // // Now lets decorate t with BorderDecorator: x = 30, y = 30, width = 100, and height 100
 	    // t = new BorderDecorator(t, 30, 30, 100, 100);

 	    // // Now lets add a ColouredFrameDecorator with x = 25, y = 25, width = 110, height = 110,
 		// // and thickness = 10.
 	    // t = new ColouredFrameDecorator(t, 25, 25, 110, 110, 10);

		// For Glass
		t = new ColouredGlassDecorator(new ColouredFrameDecorator(
			new BorderDecorator(t, 30, 30, 100, 100), 25, 25, 110, 110, 10), 25, 25,
			110, 110);
 	    // Now lets draw the product on the screen 	 
 	    t.draw(g);
    }
	
	public static void main(String[] args) {	
        DemoDecoratorPatternExB panel = new DemoDecoratorPatternExB();
        JFrame frame = new JFrame("Learning Decorator Pattern");
        frame.getContentPane().add(panel);
        frame.setSize(400,400);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setLocationRelativeTo(null);
        frame.setVisible(true);
	}
}