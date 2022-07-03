import javax.swing.*;
import java.awt.event.*;
class Calculator extends JFrame implements ActionListener
{
	private JLabel l1,l2,l3,l4;
	private JTextField t1,t2;
	private JButton b1,b2,b3,b4;
	public Calculator()
	{
		setSize(550,450);
		setLayout(null);
		l1=new JLabel("First Number : ");
		l2=new JLabel("Second Number : ");
		t1=new JTextField();
		t2= new JTextField();
		b1=new JButton("+");
		b2=new JButton("-");
		b3=new JButton("*");
		b4=new JButton("/");
		l3=new JLabel("Result");
		l4=new JLabel(" ");
		l1.setBounds(100,100,150,30);
		l2.setBounds(100,200,150,30);
		t1.setBounds(300,100,100,30);
		t2.setBounds(300,200,100,30);
		b1.setBounds(100,300,50,30);
		b2.setBounds(200,300,50,30);
		b3.setBounds(300,300,50,30);
		b4.setBounds(400,300,50,30);
		l3.setBounds(200,350,100,30);
		l4.setBounds(300,350,100,30);
		add(l1);
		add(l2);
		add(l3);
		add(l4);
		add(t1);
		add(t2);
		add(b1);
		add(b2);
		add(b3);
		add(b4);
		b1.addActionListener(this);
		b2.addActionListener(this);
		b3.addActionListener(this);
		b4.addActionListener(this);
	}
	public void actionPerformed(ActionEvent e)
	{
		int n1=Integer.parseInt(t1.getText());
		int n2=Integer.parseInt(t2.getText());
		Integer ans;
		if(e.getSource()==b1)
			ans=n1+n2;
		else if(e.getSource()==b2)
			ans=n1-n2;
		else if(e.getSource()==b3)
			ans=n1*n2;
		else
			ans=n1/n2;
		l4.setText(ans.toString());
	}
	public static void main(String args[])
	{
		Calculator c=new Calculator();
		c.setVisible(true);
	}
}