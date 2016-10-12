Public Class Gestor_de_descargas
    Dim dialogo As New SaveFileDialog
    Private Sub Gestor_de_descargas_Load(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles MyBase.Load
        dialogo.Title = "Seleccione una ubicacion"
        dialogo.FileName = "Sin titulo"
        dialogo.Filter = "Archivos comprimidos(*.zip)|*.zip|Musica(*.mp3)|*.mp3|Imagenes(*.jpg)|*.jpg|Documentos(*.doc)|*.doc|Textos(*.txt)|*.txt|Comprimidos rar(*.rar)|*.rar"
    End Sub

    Private Sub Button3_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button3.Click
        dialogo.ShowDialog()
        TextBox2.Text = dialogo.FileName
    End Sub

    Private Sub Button4_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button4.Click
        ListBox1.Items.Add(TextBox1.Text)
        TextBox1.Text = ""
    End Sub

    Private Sub Button2_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button2.Click
        ListBox1.Items.Clear()
    End Sub

    Private Sub Button1_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button1.Click
        WebClient1.DownloadFileAsync(New Uri(ListBox1.SelectedItem), TextBox2.Text)
    End Sub

    Private Sub WebClient1_DownloadFileCompleted(ByVal sender As Object, ByVal e As System.ComponentModel.AsyncCompletedEventArgs) Handles WebClient1.DownloadFileCompleted
        MsgBox("Archivo Descargado Correctamente", MsgBoxStyle.Information)
        ProgressBar1.Value = 0
        ListBox1.Items.Remove(ListBox1.SelectedItem)
        TextBox2.Text = ""
    End Sub

    Private Sub WebClient1_DownloadProgressChanged(ByVal sender As Object, ByVal e As System.Net.DownloadProgressChangedEventArgs) Handles WebClient1.DownloadProgressChanged
        ProgressBar1.Value = e.ProgressPercentage
    End Sub

    Private Sub SalirToolStripMenuItem_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles SalirToolStripMenuItem.Click
        Me.Close()
    End Sub
End Class