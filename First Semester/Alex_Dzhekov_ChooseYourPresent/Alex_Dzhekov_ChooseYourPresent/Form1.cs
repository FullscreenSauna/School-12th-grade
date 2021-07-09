using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace Alex_Dzhekov_ChooseYourPresent
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void comboBox1_SelectedIndexChanged(object sender, EventArgs e)
        {
            if (comboBox1.SelectedIndex == 0)
            {
                textBox1.Text = "Шал" + Environment.NewLine + "Ръкавици";
            }
            else if (comboBox1.SelectedIndex == 1)
            {
                textBox1.Text = "Боя за обувки" + Environment.NewLine + "Обувалка";
            }
            else if (comboBox1.SelectedIndex == 2)
            {
                textBox1.Text = "Хартия" + Environment.NewLine + "Поздравителна картичка";
            }
            else if (comboBox1.SelectedIndex == 3)
            {
                textBox1.Text = "Пощенска марка" + Environment.NewLine + "Пощенски плик";
            }
            else if (comboBox1.SelectedIndex == 4)
            {
                textBox1.Text = "Цветя" + Environment.NewLine + "Панделка";
            }
        }
    }
}
