Public Class Sferal

    Private Sub Button1_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button1.Click
        Panel1.Show()
    End Sub

    Private Sub Button4_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button4.Click
        Panel1.Hide()
    End Sub

    Private Sub PictureBox4_Click(ByVal sender As System.Object, ByVal e As System.EventArgs)
        End
    End Sub

    Private Sub Label4_MouseHover(ByVal sender As Object, ByVal e As System.EventArgs) Handles Label4.MouseHover
        GroupBox2.Show()
    End Sub

    Private Sub Label5_MouseHover(ByVal sender As Object, ByVal e As System.EventArgs) Handles Label5.MouseHover
        GroupBox1.Show()
    End Sub

    Private Sub Label6_MouseHover(ByVal sender As Object, ByVal e As System.EventArgs) Handles Label6.MouseHover
        GroupBox3.Show()
    End Sub

    Private Sub PictureBox2_MouseHover(ByVal sender As Object, ByVal e As System.EventArgs) Handles PictureBox2.MouseHover
        GroupBox5.Show()
        Label1.Show()
        Label2.Show()
        Label3.Show()
    End Sub
    Private Sub PictureBox2_MouseLeave(ByVal sender As Object, ByVal e As System.EventArgs) Handles PictureBox2.MouseLeave
        GroupBox5.Hide()
        Label1.Hide()
        Label2.Hide()
        Label3.Hide()
    End Sub

    Private Sub Button2_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button2.Click
        Navegador.Show()
    End Sub

    Private Sub Button7_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button7.Click
        Editor.Show()
    End Sub

    Private Sub Button8_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button8.Click
        Calculadora.Show()
    End Sub

    Private Sub Timer1_Tick(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Timer1.Tick
        TextBox1.Text = TimeOfDay
    End Sub

    Private Sub Form3_Load(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles MyBase.Load
        Timer1.Start()
    End Sub

    Private Sub PictureBox4_Click_1(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles PictureBox4.Click
        Me.Close()
        End
    End Sub

    Private Sub Button11_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button11.Click
        PictureBox6.Hide()
        PictureBox7.Hide()
        PictureBox8.Hide()
        PictureBox9.Hide()
        PictureBox10.Hide()
        PictureBox11.Hide()
        PictureBox12.Hide()
        PictureBox13.Hide()
        Label7.Hide()
        GroupBox4.Hide()
    End Sub

    Private Sub PictureBox6_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles PictureBox6.Click
        PictureBox1.Image = PictureBox6.Image
    End Sub

    Private Sub PictureBox7_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles PictureBox7.Click
        PictureBox1.Image = PictureBox7.Image
    End Sub

    Private Sub PictureBox8_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles PictureBox8.Click
        PictureBox1.Image = PictureBox8.Image
    End Sub

    Private Sub PictureBox9_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles PictureBox9.Click
        PictureBox1.Image = PictureBox9.Image
    End Sub

    Private Sub PictureBox10_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles PictureBox10.Click
        PictureBox1.Image = PictureBox10.Image
    End Sub

    Private Sub PictureBox11_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles PictureBox11.Click
        PictureBox1.Image = PictureBox11.Image
    End Sub

    Private Sub PictureBox12_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles PictureBox12.Click
        PictureBox1.Image = PictureBox12.Image
    End Sub

    Private Sub PictureBox13_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles PictureBox13.Click
        PictureBox1.Image = PictureBox13.Image
    End Sub

    Private Sub Button9_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button9.Click
        PictureBox6.Show()
        PictureBox7.Show()
        PictureBox8.Show()
        PictureBox9.Show()
        PictureBox10.Show()
        PictureBox11.Show()
        PictureBox12.Show()
        PictureBox13.Show()
        Label7.Show()
        GroupBox4.Show()
        Button11.Show()
    End Sub

    Private Sub Button10_Click(ByVal sender As System.Object, ByVal e As System.EventArgs)

    End Sub

    Private Sub Button3_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button3.Click
        Gestor_de_descargas.Show()
    End Sub
End Class