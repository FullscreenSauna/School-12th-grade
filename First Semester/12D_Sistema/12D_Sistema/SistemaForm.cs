using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace _12D_Sistema
{
    public partial class Sistema : Form
    {
        public Sistema()
        {
            InitializeComponent();
        }

        private void calculateButton_Click(object sender, EventArgs e)
        {
            if (CheckTextboxValidity())
            {
                double a1 = double.Parse(a1TextBox.Text);
                double b1 = double.Parse(b1TextBox.Text);
                double c1 = double.Parse(c1TextBox.Text);

                double a2 = double.Parse(a2TextBox.Text);
                double b2 = double.Parse(b2TextBox.Text);
                double c2 = double.Parse(c2TextBox.Text);

                double pivot = a1;

                double x = 0;
                double y = 0;

                if (a1 == 0)
                {
                    y = c1 / b1;
                    x = (c2 - b2 * y) / a2;
                }
                else if (a1 == a2 && b1 == b2 && c1 == c2)
                {
                    pivot = a1;

                    a1 /= pivot;
                    b1 /= pivot;
                    c1 /= pivot;

                    y = c2 / b2;
                    x = c1 - (b1 * y);
                }
                else if (a1 == a2 && b1 == b2 && c1 != c2)
                {
                    xTextBox.Text = "Impossible combination";
                    yTextBox.Text = "Impossible combination";
                }
                else
                {
                    a1 /= pivot;
                    b1 /= pivot;
                    c1 /= pivot;

                    pivot = a2;

                    a2 = a2 - pivot * a1;
                    b2 = b2 - pivot * b1;
                    c2 = c2 - pivot * c1;

                    y = c2 / b2;
                    x = c1 - (b1 * y);
                }

                if (x != 0 || y != 0)
                {
                    xTextBox.Text = x.ToString();
                    yTextBox.Text = y.ToString();
                }
            }
        }
    

        private bool CheckTextboxValidity()
        {
            bool a1IsValid = double.TryParse(a1TextBox.Text, out _);
            bool b1IsValid = double.TryParse(b1TextBox.Text, out _);
            bool c1IsValid = double.TryParse(c1TextBox.Text, out _);

            bool a2IsValid = double.TryParse(a2TextBox.Text, out _);
            bool b2IsValid = double.TryParse(b2TextBox.Text, out _);
            bool c2IsValid = double.TryParse(c2TextBox.Text, out _);

            if (a1IsValid && b1IsValid && c1IsValid && a2IsValid && b2IsValid && c2IsValid)
            {
                return true;
            }

            return false;
        }

        private void UpdateCalculateButtonState()
        {
            if (CheckTextboxValidity())
            {
                calculateButton.Enabled = true;
            }
            else
            {
                calculateButton.Enabled = false;
            }
        }

        private void a1TextBox_TextChanged(object sender, EventArgs e)
        {
            UpdateCalculateButtonState();
        }

        private void b1TextBox_TextChanged(object sender, EventArgs e)
        {
            UpdateCalculateButtonState();
        }

        private void c1TextBox_TextChanged(object sender, EventArgs e)
        {
            UpdateCalculateButtonState();
        }

        private void a2TextBox_TextChanged(object sender, EventArgs e)
        {
            UpdateCalculateButtonState();
        }

        private void b2TextBox_TextChanged(object sender, EventArgs e)
        {
            UpdateCalculateButtonState();
        }

        private void c2TextBox_TextChanged(object sender, EventArgs e)
        {
            UpdateCalculateButtonState();
        }
    }
}
