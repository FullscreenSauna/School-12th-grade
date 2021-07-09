namespace _12D_Sistema
{
    partial class Sistema
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
            this.systemTypeLabel = new System.Windows.Forms.Label();
            this.a1Label = new System.Windows.Forms.Label();
            this.b1Label = new System.Windows.Forms.Label();
            this.c1Label = new System.Windows.Forms.Label();
            this.a2Label = new System.Windows.Forms.Label();
            this.b2Label = new System.Windows.Forms.Label();
            this.c2Label = new System.Windows.Forms.Label();
            this.a1TextBox = new System.Windows.Forms.TextBox();
            this.b1TextBox = new System.Windows.Forms.TextBox();
            this.c1TextBox = new System.Windows.Forms.TextBox();
            this.c2TextBox = new System.Windows.Forms.TextBox();
            this.b2TextBox = new System.Windows.Forms.TextBox();
            this.a2TextBox = new System.Windows.Forms.TextBox();
            this.calculateButton = new System.Windows.Forms.Button();
            this.infoLabel = new System.Windows.Forms.Label();
            this.xTextBox = new System.Windows.Forms.TextBox();
            this.yTextBox = new System.Windows.Forms.TextBox();
            this.xLabel = new System.Windows.Forms.Label();
            this.yLabel = new System.Windows.Forms.Label();
            this.SuspendLayout();
            // 
            // systemTypeLabel
            // 
            this.systemTypeLabel.Anchor = System.Windows.Forms.AnchorStyles.Top;
            this.systemTypeLabel.Location = new System.Drawing.Point(260, 9);
            this.systemTypeLabel.Name = "systemTypeLabel";
            this.systemTypeLabel.Size = new System.Drawing.Size(279, 34);
            this.systemTypeLabel.TabIndex = 0;
            this.systemTypeLabel.Text = "|a1x + b1x = c1\n|a2x + b2x = c2";
            this.systemTypeLabel.TextAlign = System.Drawing.ContentAlignment.MiddleCenter;
            // 
            // a1Label
            // 
            this.a1Label.AutoSize = true;
            this.a1Label.Location = new System.Drawing.Point(13, 39);
            this.a1Label.Name = "a1Label";
            this.a1Label.Size = new System.Drawing.Size(24, 17);
            this.a1Label.TabIndex = 1;
            this.a1Label.Text = "a1";
            // 
            // b1Label
            // 
            this.b1Label.AutoSize = true;
            this.b1Label.Location = new System.Drawing.Point(95, 39);
            this.b1Label.Name = "b1Label";
            this.b1Label.Size = new System.Drawing.Size(24, 17);
            this.b1Label.TabIndex = 2;
            this.b1Label.Text = "b1";
            // 
            // c1Label
            // 
            this.c1Label.AutoSize = true;
            this.c1Label.Location = new System.Drawing.Point(180, 39);
            this.c1Label.Name = "c1Label";
            this.c1Label.Size = new System.Drawing.Size(23, 17);
            this.c1Label.TabIndex = 3;
            this.c1Label.Text = "c1";
            // 
            // a2Label
            // 
            this.a2Label.AutoSize = true;
            this.a2Label.Location = new System.Drawing.Point(545, 39);
            this.a2Label.Name = "a2Label";
            this.a2Label.Size = new System.Drawing.Size(24, 17);
            this.a2Label.TabIndex = 4;
            this.a2Label.Text = "a2";
            // 
            // b2Label
            // 
            this.b2Label.AutoSize = true;
            this.b2Label.Location = new System.Drawing.Point(627, 39);
            this.b2Label.Name = "b2Label";
            this.b2Label.Size = new System.Drawing.Size(24, 17);
            this.b2Label.TabIndex = 5;
            this.b2Label.Text = "b2";
            // 
            // c2Label
            // 
            this.c2Label.AutoSize = true;
            this.c2Label.Location = new System.Drawing.Point(709, 39);
            this.c2Label.Name = "c2Label";
            this.c2Label.Size = new System.Drawing.Size(23, 17);
            this.c2Label.TabIndex = 6;
            this.c2Label.Text = "c2";
            // 
            // a1TextBox
            // 
            this.a1TextBox.Location = new System.Drawing.Point(16, 59);
            this.a1TextBox.Name = "a1TextBox";
            this.a1TextBox.Size = new System.Drawing.Size(76, 22);
            this.a1TextBox.TabIndex = 7;
            this.a1TextBox.TextChanged += new System.EventHandler(this.a1TextBox_TextChanged);
            // 
            // b1TextBox
            // 
            this.b1TextBox.Location = new System.Drawing.Point(98, 59);
            this.b1TextBox.Name = "b1TextBox";
            this.b1TextBox.Size = new System.Drawing.Size(76, 22);
            this.b1TextBox.TabIndex = 8;
            this.b1TextBox.TextChanged += new System.EventHandler(this.b1TextBox_TextChanged);
            // 
            // c1TextBox
            // 
            this.c1TextBox.Location = new System.Drawing.Point(180, 59);
            this.c1TextBox.Name = "c1TextBox";
            this.c1TextBox.Size = new System.Drawing.Size(76, 22);
            this.c1TextBox.TabIndex = 9;
            this.c1TextBox.TextChanged += new System.EventHandler(this.c1TextBox_TextChanged);
            // 
            // c2TextBox
            // 
            this.c2TextBox.Location = new System.Drawing.Point(712, 59);
            this.c2TextBox.Name = "c2TextBox";
            this.c2TextBox.Size = new System.Drawing.Size(76, 22);
            this.c2TextBox.TabIndex = 15;
            this.c2TextBox.TextChanged += new System.EventHandler(this.c2TextBox_TextChanged);
            // 
            // b2TextBox
            // 
            this.b2TextBox.Location = new System.Drawing.Point(630, 59);
            this.b2TextBox.Name = "b2TextBox";
            this.b2TextBox.Size = new System.Drawing.Size(76, 22);
            this.b2TextBox.TabIndex = 14;
            this.b2TextBox.TextChanged += new System.EventHandler(this.b2TextBox_TextChanged);
            // 
            // a2TextBox
            // 
            this.a2TextBox.Location = new System.Drawing.Point(548, 59);
            this.a2TextBox.Name = "a2TextBox";
            this.a2TextBox.Size = new System.Drawing.Size(76, 22);
            this.a2TextBox.TabIndex = 13;
            this.a2TextBox.TextChanged += new System.EventHandler(this.a2TextBox_TextChanged);
            // 
            // calculateButton
            // 
            this.calculateButton.Enabled = false;
            this.calculateButton.Location = new System.Drawing.Point(262, 46);
            this.calculateButton.Name = "calculateButton";
            this.calculateButton.Size = new System.Drawing.Size(277, 36);
            this.calculateButton.TabIndex = 16;
            this.calculateButton.Text = "Calculate";
            this.calculateButton.UseVisualStyleBackColor = true;
            this.calculateButton.Click += new System.EventHandler(this.calculateButton_Click);
            // 
            // infoLabel
            // 
            this.infoLabel.Location = new System.Drawing.Point(261, 84);
            this.infoLabel.Name = "infoLabel";
            this.infoLabel.Size = new System.Drawing.Size(278, 23);
            this.infoLabel.TabIndex = 17;
            this.infoLabel.Text = "Please Input Numbers";
            this.infoLabel.TextAlign = System.Drawing.ContentAlignment.MiddleCenter;
            // 
            // xTextBox
            // 
            this.xTextBox.Location = new System.Drawing.Point(16, 139);
            this.xTextBox.Name = "xTextBox";
            this.xTextBox.Size = new System.Drawing.Size(240, 22);
            this.xTextBox.TabIndex = 18;
            // 
            // yTextBox
            // 
            this.yTextBox.Location = new System.Drawing.Point(548, 139);
            this.yTextBox.Name = "yTextBox";
            this.yTextBox.Size = new System.Drawing.Size(240, 22);
            this.yTextBox.TabIndex = 19;
            // 
            // xLabel
            // 
            this.xLabel.AutoSize = true;
            this.xLabel.Location = new System.Drawing.Point(13, 119);
            this.xLabel.Name = "xLabel";
            this.xLabel.Size = new System.Drawing.Size(30, 17);
            this.xLabel.TabIndex = 20;
            this.xLabel.Text = "x = ";
            // 
            // yLabel
            // 
            this.yLabel.AutoSize = true;
            this.yLabel.Location = new System.Drawing.Point(545, 119);
            this.yLabel.Name = "yLabel";
            this.yLabel.Size = new System.Drawing.Size(31, 17);
            this.yLabel.TabIndex = 21;
            this.yLabel.Text = "y = ";
            // 
            // Sistema
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(8F, 16F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(800, 450);
            this.Controls.Add(this.yLabel);
            this.Controls.Add(this.xLabel);
            this.Controls.Add(this.yTextBox);
            this.Controls.Add(this.xTextBox);
            this.Controls.Add(this.infoLabel);
            this.Controls.Add(this.calculateButton);
            this.Controls.Add(this.c2TextBox);
            this.Controls.Add(this.b2TextBox);
            this.Controls.Add(this.a2TextBox);
            this.Controls.Add(this.c1TextBox);
            this.Controls.Add(this.b1TextBox);
            this.Controls.Add(this.a1TextBox);
            this.Controls.Add(this.c2Label);
            this.Controls.Add(this.b2Label);
            this.Controls.Add(this.a2Label);
            this.Controls.Add(this.c1Label);
            this.Controls.Add(this.b1Label);
            this.Controls.Add(this.a1Label);
            this.Controls.Add(this.systemTypeLabel);
            this.Name = "Sistema";
            this.Text = "Sistema";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion

        private System.Windows.Forms.Label systemTypeLabel;
        private System.Windows.Forms.Label a1Label;
        private System.Windows.Forms.Label b1Label;
        private System.Windows.Forms.Label c1Label;
        private System.Windows.Forms.Label a2Label;
        private System.Windows.Forms.Label b2Label;
        private System.Windows.Forms.Label c2Label;
        private System.Windows.Forms.TextBox a1TextBox;
        private System.Windows.Forms.TextBox b1TextBox;
        private System.Windows.Forms.TextBox c1TextBox;
        private System.Windows.Forms.TextBox c2TextBox;
        private System.Windows.Forms.TextBox b2TextBox;
        private System.Windows.Forms.TextBox a2TextBox;
        private System.Windows.Forms.Button calculateButton;
        private System.Windows.Forms.Label infoLabel;
        private System.Windows.Forms.TextBox xTextBox;
        private System.Windows.Forms.TextBox yTextBox;
        private System.Windows.Forms.Label xLabel;
        private System.Windows.Forms.Label yLabel;
    }
}

