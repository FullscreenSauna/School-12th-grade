using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _12D_Nechetni
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void getUnevenNumbersButton_Click(object sender, EventArgs e)
        {
            unevenNumbersTextBox.Clear();

            int[] numbers = allNumbersTextBox.Text.Trim().Split(' ').Select(n => int.Parse(n.ToString())).ToArray();

            for (int i = 0; i < numbers.Length; i++)
            {
                if (numbers[i] % 2 != 0)
                {
                    unevenNumbersTextBox.Text += $"{numbers[i]} ";
                }
            }
        }

        private void firstNumberTextBox_TextChanged(object sender, EventArgs e)
        {
            if (!int.TryParse(firstNumberTextBox.Text, out _))
            {
                firstNumberTextBox.Clear();
            }
            else
            {
                int number = int.Parse(firstNumberTextBox.Text);

                allNumbersTextBox.Text = $"{number} ";
                for (int i = 0; i < 4; i++)
                {
                    allNumbersTextBox.Text += $"{++number} ";
                   
                }
            }
        }
    }
}
