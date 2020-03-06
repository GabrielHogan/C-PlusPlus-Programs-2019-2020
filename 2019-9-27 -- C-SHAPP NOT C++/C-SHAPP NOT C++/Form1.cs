using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace C_SHAPP_NOT_C__
{
    public partial class Form1 : Form
    {

        int timer = 0; //Timer starting value!

        public Form1()
        {
            InitializeComponent();
        }

        private void Form1_Load(object sender, EventArgs e)
        {
            timer++;

        }

        private void button1_Click(object sender, EventArgs e)
        {
            while (timer > 0)
            {

                if (timer % 2 == 1)
                {
                    BackColor = Color.Aqua;
                    //Form1.BackColor = Color.Crimson;
                }
                else
                {
                    BackColor = Color.Crimson;
                    //Form1.BackColor = Color.Aqua;

                }
            }
        }

        private void timer1_Tick(object sender, EventArgs e)
        {
            timer++;
        }
    }
}
