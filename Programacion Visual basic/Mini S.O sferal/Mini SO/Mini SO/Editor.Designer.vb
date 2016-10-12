Imports System.IO

<Global.Microsoft.VisualBasic.CompilerServices.DesignerGenerated()> _
Partial Class Editor
    Inherits System.Windows.Forms.Form

    'Form reemplaza a Dispose para limpiar la lista de componentes.
    <System.Diagnostics.DebuggerNonUserCode()> _
    Protected Overrides Sub Dispose(ByVal disposing As Boolean)
        Try
            If disposing AndAlso components IsNot Nothing Then
                components.Dispose()
            End If
        Finally
            MyBase.Dispose(disposing)
        End Try
    End Sub

    'Requerido por el Diseñador de Windows Forms
    Private components As System.ComponentModel.IContainer

    'NOTA: el Diseñador de Windows Forms necesita el siguiente procedimiento
    'Se puede modificar usando el Diseñador de Windows Forms.  
    'No lo modifique con el editor de código.
    <System.Diagnostics.DebuggerStepThrough()> _
    Private Sub InitializeComponent()
        Me.Label1 = New System.Windows.Forms.Label()
        Me.Label2 = New System.Windows.Forms.Label()
        Me.TextBox1 = New System.Windows.Forms.TextBox()
        Me.TextBox2 = New System.Windows.Forms.TextBox()
        Me.MenuStrip1 = New System.Windows.Forms.MenuStrip()
        Me.ArchivoToolStripMenuItem = New System.Windows.Forms.ToolStripMenuItem()
        Me.GuardarTXTToolStripMenuItem = New System.Windows.Forms.ToolStripMenuItem()
        Me.GuardarBATToolStripMenuItem = New System.Windows.Forms.ToolStripMenuItem()
        Me.GuardarBATToolStripMenuItem1 = New System.Windows.Forms.ToolStripMenuItem()
        Me.SalirToolStripMenuItem = New System.Windows.Forms.ToolStripMenuItem()
        Me.MenuStrip1.SuspendLayout()
        Me.SuspendLayout()
        '
        'Label1
        '
        Me.Label1.AutoSize = True
        Me.Label1.Font = New System.Drawing.Font("Microsoft Sans Serif", 9.75!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.Label1.Location = New System.Drawing.Point(12, 33)
        Me.Label1.Name = "Label1"
        Me.Label1.Size = New System.Drawing.Size(136, 16)
        Me.Label1.TabIndex = 0
        Me.Label1.Text = "Nombre de fichero"
        '
        'Label2
        '
        Me.Label2.AutoSize = True
        Me.Label2.Font = New System.Drawing.Font("Microsoft Sans Serif", 9.75!, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, CType(0, Byte))
        Me.Label2.Location = New System.Drawing.Point(12, 78)
        Me.Label2.Name = "Label2"
        Me.Label2.Size = New System.Drawing.Size(47, 16)
        Me.Label2.TabIndex = 1
        Me.Label2.Text = "Texto"
        '
        'TextBox1
        '
        Me.TextBox1.Location = New System.Drawing.Point(154, 29)
        Me.TextBox1.Name = "TextBox1"
        Me.TextBox1.Size = New System.Drawing.Size(165, 20)
        Me.TextBox1.TabIndex = 2
        '
        'TextBox2
        '
        Me.TextBox2.Location = New System.Drawing.Point(15, 97)
        Me.TextBox2.Multiline = True
        Me.TextBox2.Name = "TextBox2"
        Me.TextBox2.Size = New System.Drawing.Size(496, 283)
        Me.TextBox2.TabIndex = 3
        '
        'MenuStrip1
        '
        Me.MenuStrip1.Items.AddRange(New System.Windows.Forms.ToolStripItem() {Me.ArchivoToolStripMenuItem, Me.SalirToolStripMenuItem})
        Me.MenuStrip1.Location = New System.Drawing.Point(0, 0)
        Me.MenuStrip1.Name = "MenuStrip1"
        Me.MenuStrip1.Size = New System.Drawing.Size(523, 24)
        Me.MenuStrip1.TabIndex = 4
        Me.MenuStrip1.Text = "MenuStrip1"
        '
        'ArchivoToolStripMenuItem
        '
        Me.ArchivoToolStripMenuItem.DropDownItems.AddRange(New System.Windows.Forms.ToolStripItem() {Me.GuardarTXTToolStripMenuItem, Me.GuardarBATToolStripMenuItem, Me.GuardarBATToolStripMenuItem1})
        Me.ArchivoToolStripMenuItem.Name = "ArchivoToolStripMenuItem"
        Me.ArchivoToolStripMenuItem.Size = New System.Drawing.Size(60, 20)
        Me.ArchivoToolStripMenuItem.Text = "Archivo"
        '
        'GuardarTXTToolStripMenuItem
        '
        Me.GuardarTXTToolStripMenuItem.Name = "GuardarTXTToolStripMenuItem"
        Me.GuardarTXTToolStripMenuItem.Size = New System.Drawing.Size(152, 22)
        Me.GuardarTXTToolStripMenuItem.Text = "Guardar .txt"
        '
        'GuardarBATToolStripMenuItem
        '
        Me.GuardarBATToolStripMenuItem.Name = "GuardarBATToolStripMenuItem"
        Me.GuardarBATToolStripMenuItem.Size = New System.Drawing.Size(152, 22)
        Me.GuardarBATToolStripMenuItem.Text = "Guardar .doc"
        '
        'GuardarBATToolStripMenuItem1
        '
        Me.GuardarBATToolStripMenuItem1.Name = "GuardarBATToolStripMenuItem1"
        Me.GuardarBATToolStripMenuItem1.Size = New System.Drawing.Size(152, 22)
        Me.GuardarBATToolStripMenuItem1.Text = "Guardar .bat"
        '
        'SalirToolStripMenuItem
        '
        Me.SalirToolStripMenuItem.Name = "SalirToolStripMenuItem"
        Me.SalirToolStripMenuItem.Size = New System.Drawing.Size(41, 20)
        Me.SalirToolStripMenuItem.Text = "Salir"
        '
        'Editor
        '
        Me.AutoScaleDimensions = New System.Drawing.SizeF(6.0!, 13.0!)
        Me.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font
        Me.ClientSize = New System.Drawing.Size(523, 392)
        Me.Controls.Add(Me.TextBox2)
        Me.Controls.Add(Me.TextBox1)
        Me.Controls.Add(Me.Label2)
        Me.Controls.Add(Me.Label1)
        Me.Controls.Add(Me.MenuStrip1)
        Me.Name = "Editor"
        Me.Text = "Editor"
        Me.MenuStrip1.ResumeLayout(False)
        Me.MenuStrip1.PerformLayout()
        Me.ResumeLayout(False)
        Me.PerformLayout()

    End Sub
    Friend WithEvents Label1 As System.Windows.Forms.Label
    Friend WithEvents Label2 As System.Windows.Forms.Label
    Friend WithEvents TextBox1 As System.Windows.Forms.TextBox
    Friend WithEvents TextBox2 As System.Windows.Forms.TextBox
    Friend WithEvents MenuStrip1 As System.Windows.Forms.MenuStrip
    Friend WithEvents ArchivoToolStripMenuItem As System.Windows.Forms.ToolStripMenuItem
    Friend WithEvents GuardarTXTToolStripMenuItem As System.Windows.Forms.ToolStripMenuItem
    Friend WithEvents GuardarBATToolStripMenuItem As System.Windows.Forms.ToolStripMenuItem
    Friend WithEvents GuardarBATToolStripMenuItem1 As System.Windows.Forms.ToolStripMenuItem
    Friend WithEvents SalirToolStripMenuItem As System.Windows.Forms.ToolStripMenuItem

    Private Sub SalirToolStripMenuItem_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles SalirToolStripMenuItem.Click
        ' cerrar el formulario
        Me.Close()
    End Sub

    Private Sub GuardarTXTToolStripMenuItem_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles GuardarTXTToolStripMenuItem.Click
        ' declarar una variable para la escritura
        ' de texto en un fichero
        Dim oEscritor As StreamWriter
        ' crear un fichero de texto vacío
        ' y obtener un objeto StreamWriter
        ' para escribir en el fichero
        oEscritor = File.CreateText(Environment.CurrentDirectory & "\" &
        Me.TextBox1.Text & ".txt")
        ' escribir en el fichero el contenido del
        ' control TextBox
        oEscritor.Write(Me.TextBox2.Text)
        ' cerrar el objeto, lo que cierra también el
        ' fichero, y eliminar el objeto
        oEscritor.Close()
        oEscritor = Nothing
    End Sub

    Private Sub GuardarBATToolStripMenuItem_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles GuardarBATToolStripMenuItem.Click
        ' declarar una variable para la escritura
        ' de texto en un fichero
        Dim oEscritor As StreamWriter
        ' crear un fichero de texto vacío
        ' y obtener un objeto StreamWriter
        ' para escribir en el fichero
        oEscritor = File.CreateText(Environment.CurrentDirectory & "\" &
        Me.TextBox1.Text & ".doc")
        ' escribir en el fichero el contenido del
        ' control TextBox
        oEscritor.Write(Me.TextBox2.Text)
        ' cerrar el objeto, lo que cierra también el
        ' fichero, y eliminar el objeto
        oEscritor.Close()
        oEscritor = Nothing
    End Sub

    Private Sub GuardarBATToolStripMenuItem1_Click(ByVal sender As System.Object, ByVal e As System.EventArgs) Handles GuardarBATToolStripMenuItem1.Click
        ' declarar una variable para la escritura
        ' de texto en un fichero
        Dim oEscritor As StreamWriter
        ' crear un fichero de texto vacío
        ' y obtener un objeto StreamWriter
        ' para escribir en el fichero
        oEscritor = File.CreateText(Environment.CurrentDirectory & "\" &
        Me.TextBox1.Text & ".bat")
        ' escribir en el fichero el contenido del
        ' control TextBox
        oEscritor.Write(Me.TextBox2.Text)
        ' cerrar el objeto, lo que cierra también el
        ' fichero, y eliminar el objeto
        oEscritor.Close()
        oEscritor = Nothing
    End Sub
End Class
