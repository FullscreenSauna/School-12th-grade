using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _12D_Tetraeder
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void button1_Click(object sender, EventArgs e)
        {
            double a;

            bool aIsValid = double.TryParse(textBox1.Text, out a);

            if (!aIsValid)
            {
                MessageBox.Show("Please insert numbers only", "Invalid input", MessageBoxButtons.OK);
                textBox1.Clear();
            }
            else if (a < 0)
            {
                MessageBox.Show("Side can't have a negative value", "Invalid input", MessageBoxButtons.OK);
                textBox1.Clear();
            }
            else
            {
                double faceArea = (Math.Sqrt(3) / 4) * Math.Pow(a, 2);
                double volume = Math.Pow(a, 3) / (6 * Math.Sqrt(2));

                
                MessageBox.Show($"Face area = {faceArea:f2}\nVolume = {volume:f2}", "Result", MessageBoxButtons.OK);
                textBox1.Clear();
            }
        }

        private void button2_Click(object sender, EventArgs e)
        {
            Application.Exit();
        }
    }
}
