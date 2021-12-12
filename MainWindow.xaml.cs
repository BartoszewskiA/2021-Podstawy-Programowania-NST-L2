using Microsoft.Win32;
using System;
using System.Collections.Generic;
using System.IO;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Imaging;
using System.Windows.Navigation;
using System.Windows.Shapes;

namespace pliki_tekstowe
{
    /// <summary>
    /// Interaction logic for MainWindow.xaml
    /// </summary>
    public partial class MainWindow : Window
    {
        
        public MainWindow()
        {
            InitializeComponent();
        }

        private void Button_Click(object sender, RoutedEventArgs e)
        {
            OpenFileDialog openFileDialog = new OpenFileDialog();
            openFileDialog.Filter = "Pliki tekstowe (*.txt)|*.txt|Wszystkie pliki|*.*";
            openFileDialog.Title = "Otwórz plik";
            if (openFileDialog.ShowDialog() == true) 
            zaladujPlik_v3(openFileDialog.FileName);
        }

        private void zaladujPlik(String sciezka)
        {
            //edytor.Text = File.ReadAllText(sciezka);

           /* String[] linie =File.ReadAllLines(sciezka);
            List<string> list = new List<string>(linie);*/


            List<string> list = new List<string>(File.ReadAllLines(sciezka));


            //String tresc = "";
            //list.Sort();
            foreach (string s in list)
            {
              /*  tresc += ": ";
                tresc += s;
                tresc += "\n";*/
              textBox1.AppendText(s);
              textBox1.AppendText("\n");

            }    
            //edytor.Text = tresc;
        }

        private void zaladujPlik_v2(String sciezka)
        {
            FileStream fileStream = new FileStream(sciezka, FileMode.Open, FileAccess.Read);
            StreamReader sr = new StreamReader(fileStream);
            textBox1.Text = sr.ReadToEnd();
            sr.Close();
        }

        private void zaladujPlik_v3(String sciezka)
        {
            List<String> linie = new List<String>();
            FileStream fileStream = new FileStream(sciezka, FileMode.Open, FileAccess.Read);
            StreamReader sr = new StreamReader(fileStream);
            while (!sr.EndOfStream)
            {
                linie.Add(sr.ReadLine());
            }
            string calyTekst = "";
            foreach (string l in linie)
            {
                calyTekst += l;
                calyTekst += "\n";
            }
            textBox1.Text = calyTekst;
            sr.Close();
        }

        private void Button_Click_1(object sender, RoutedEventArgs e)
        {
            SaveFileDialog saveFileDialog = new SaveFileDialog();
            saveFileDialog.Filter = "Pliki tekstowe (*.txt)|*.txt|Wszystkie pliki|*.*";
            saveFileDialog.Title = "Zapisz Plik";
            if (saveFileDialog.ShowDialog() == true)
                zapiszPlik(saveFileDialog.FileName);

       

        }

        private void zapiszPlik(String sciezka)
        {
            test.Text = "";   
            File.WriteAllText(sciezka, textBox1.Text);
            string s = textBox1.Text;
            string[] linie =s.Split('\n');
            List<string> list = new List<string>(linie);
            foreach (string l in list)
                test.Inlines.Add(l+"\n");
            
        }
    }
}
