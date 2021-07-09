namespace _12D_Nechetni
{
    partial class Form1
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.label1 = new System.Windows.Forms.Label();
            this.firstNumberTextBox = new System.Windows.Forms.TextBox();
            this.label2 = new System.Windows.Forms.Label();
            this.allNumbersTextBox = new System.Windows.Forms.TextBox();
            this.getUnevenNumbersButton = new System.Windows.Forms.Button();
            this.unevenNumbersTextBox = new System.Windows.Forms.TextBox();
            this.SuspendLayout();
            // 
            // label1
            // 
            this.label1.AutoSize = true;
            this.label1.Location = new System.Drawing.Point(13, 9);
            this.label1.Name = "label1";
            this.label1.Size = new System.Drawing.Size(85, 17);
            this.label1.TabIndex = 0;
            this.label1.Text = "firstNumber:";
            // 
            // firstNumberTextBox
            // 
            this.firstNumberTextBox.Location = new System.Drawing.Point(15, 30);
            this.firstNumberTextBox.Name = "firstNumberTextBox";
            this.firstNumberTextBox.Size = new System.Drawing.Size(96, 22);
            this.firstNumberTextBox.TabIndex = 1;
            this.firstNumberTextBox.TextChanged += new System.EventHandler(this.firstNumberTextBox_TextChanged);
            // 
            // label2
            // 
            this.label2.AutoSize = true;
            this.label2.Location = new System.Drawing.Point(173, 9);
            this.label2.Name = "label2";
            this.label2.Size = new System.Drawing.Size(69, 17);
            this.label2.TabIndex = 2;
            this.label2.Text = "Numbers:";
            // 
            // allNumbersTextBox
            // 
            this.allNumbersTextBox.BackColor = System.Drawing.SystemColors.Info;
            this.allNumbersTextBox.Location = new System.Drawing.Point(176, 29);
            this.allNumbersTextBox.Name = "allNumbersTextBox";
            this.allNumbersTextBox.ReadOnly = true;
            this.allNumbersTextBox.Size = new System.Drawing.Size(612, 22);
            this.allNumbersTextBox.TabIndex = 3;
            // 
            // getUnevenNumbersButton
            // 
            this.getUnevenNumbersButton.Location = new System.Drawing.Point(16, 112);
            this.getUnevenNumbersButton.Name = "getUnevenNumbersButton";
            this.getUnevenNumbersButton.Size = new System.Drawing.Size(772, 39);
            this.getUnevenNumbersButton.TabIndex = 4;
            this.getUnevenNumbersButton.Text = "Get Uneven";
            this.getUnevenNumbersButton.UseVisualStyleBackColor = true;
            this.getUnevenNumbersButton.Click += new System.EventHandler(this.getUnevenNumbersButton_Click);
            // 
            // unevenNumbersTextBox
            // 
            this.unevenNumbersTextBox.BackColor = System.Drawing.SystemColors.Info;
            this.unevenNumbersTextBox.Location = new System.Drawing.Point(15, 157);
            this.unevenNumbersTextBox.Name = "unevenNumbersTextBox";
            this.unevenNumbersTextBox.ReadOnly = true;
            this.unevenNumbersTextBox.Size = new System.Drawing.Size(773, 22);
            this.unevenNumbersTextBox.TabIndex = 5;
            // 
            // Form1
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(8F, 16F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.unevenNumbersTextBox);
            this.Controls.Add(this.getUnevenNumbersButton);
            this.Controls.Add(this.allNumbersTextBox);
            this.Controls.Add(this.label2);
            this.Controls.Add(this.firstNumberTextBox);
            this.Controls.Add(this.label1);
            this.Name = "Form1";
            this.Text = "Form1";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label label1;
        private System.Windows.Forms.TextBox firstNumberTextBox;
        private System.Windows.Forms.Label label2;
        private System.Windows.Forms.TextBox allNumbersTextBox;
        private System.Windows.Forms.Button getUnevenNumbersButton;
        private System.Windows.Forms.TextBox unevenNumbersTextBox;
    }
}

