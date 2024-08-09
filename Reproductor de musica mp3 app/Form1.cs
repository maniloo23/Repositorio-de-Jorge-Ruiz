namespace Reproductor_de_musica_mp3_app
{
    public partial class Form1 : Form
    {
        bool play = false;
        string[] ArchivosMP3;
        string[] rutasArchivosMP3;
        public Form1()
        {
            InitializeComponent();
        }

        private void axWindowsMediaPlayer1_Enter(object sender, EventArgs e)
        {

        }

        private void btnAdjuntar_Click(object sender, EventArgs e)
        {
            OpenFileDialog CajaDeBusquedaDeArchivos = new OpenFileDialog();
            CajaDeBusquedaDeArchivos.Multiselect = true;
            if (CajaDeBusquedaDeArchivos.ShowDialog() == DialogResult.OK)
            {
                ArchivosMP3 = CajaDeBusquedaDeArchivos.SafeFileNames;
                rutasArchivosMP3 = CajaDeBusquedaDeArchivos.FileNames;
                foreach (var ArchivoMP3 in ArchivosMP3)
                {
                    lstCanciones.Items.Add(ArchivoMP3);
                }
                Reproductor.URL = rutasArchivosMP3[0];
                lstCanciones.SelectedIndex = 0;
            }
        }

        private void lstCanciones_SelectedIndexChanged(object sender, EventArgs e)
        {
            Reproductor.URL = rutasArchivosMP3[lstCanciones.SelectedIndex];

        }
    }
}

      