
namespace Reproductor_de_musica_mp3_app
{
    partial class Form1
    {
        /// <summary>
        ///  Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        ///  Clean up any resources being used.
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
        ///  Required method for Designer support - do not modify
        ///  the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            System.ComponentModel.ComponentResourceManager resources = new System.ComponentModel.ComponentResourceManager(typeof(Form1));
            Reproductor = new AxWMPLib.AxWindowsMediaPlayer();
            lstCanciones = new ListBox();
            btnAdjuntar = new PictureBox();
            ((System.ComponentModel.ISupportInitialize)Reproductor).BeginInit();
            ((System.ComponentModel.ISupportInitialize)btnAdjuntar).BeginInit();
            SuspendLayout();
            // 
            // Reproductor
            // 
            Reproductor.Enabled = true;
            Reproductor.Location = new Point(27, 12);
            Reproductor.Name = "Reproductor";
            Reproductor.OcxState = (AxHost.State)resources.GetObject("Reproductor.OcxState");
            Reproductor.Size = new Size(428, 114);
            Reproductor.TabIndex = 0;
            Reproductor.Enter += axWindowsMediaPlayer1_Enter;
            // 
            // lstCanciones
            // 
            lstCanciones.FormattingEnabled = true;
            lstCanciones.Location = new Point(27, 219);
            lstCanciones.Name = "lstCanciones";
            lstCanciones.Size = new Size(428, 284);
            lstCanciones.TabIndex = 1;
            lstCanciones.SelectedIndexChanged += lstCanciones_SelectedIndexChanged_1;
            // 
            // btnAdjuntar
            // 
            btnAdjuntar.Image = (Image)resources.GetObject("btnAdjuntar.Image");
            btnAdjuntar.Location = new Point(203, 132);
            btnAdjuntar.Name = "btnAdjuntar";
            btnAdjuntar.Size = new Size(99, 81);
            btnAdjuntar.SizeMode = PictureBoxSizeMode.Zoom;
            btnAdjuntar.TabIndex = 2;
            btnAdjuntar.TabStop = false;
            btnAdjuntar.Click += btnAdjuntar_Click;
            // 
            // Form1
            // 
            AutoScaleDimensions = new SizeF(8F, 20F);
            AutoScaleMode = AutoScaleMode.Font;
            ClientSize = new Size(485, 547);
            Controls.Add(btnAdjuntar);
            Controls.Add(lstCanciones);
            Controls.Add(Reproductor);
            Name = "Form1";
            Text = "Form1";
            ((System.ComponentModel.ISupportInitialize)Reproductor).EndInit();
            ((System.ComponentModel.ISupportInitialize)btnAdjuntar).EndInit();
            ResumeLayout(false);
        }

        private void lstCanciones_SelectedIndexChanged_1(object sender, EventArgs e)
        {
           
        }

        #endregion

        private AxWMPLib.AxWindowsMediaPlayer Reproductor;
        private ListBox lstCanciones;
        private PictureBox btnAdjuntar;
    }
}
