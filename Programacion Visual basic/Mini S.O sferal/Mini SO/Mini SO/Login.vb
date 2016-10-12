Public Class Login

    Private Sub Button2_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button2.Click
        End
    End Sub

    Private Sub Button1_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles Button1.Click
        If TextBox1.Text = "Paulo" And TextBox2.Text = "paulo1994" Then
            Sferal.Show()
            Me.Hide()
        Else
            Label3.Visible = True
        End If
    End Sub
End Class