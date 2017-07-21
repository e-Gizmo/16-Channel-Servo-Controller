VERSION 5.00
Object = "{648A5603-2C6E-101B-82B6-000000000014}#1.1#0"; "MSCOMM32.OCX"
Begin VB.Form Form1 
   Caption         =   "Form1"
   ClientHeight    =   3030
   ClientLeft      =   120
   ClientTop       =   450
   ClientWidth     =   4560
   LinkTopic       =   "Form1"
   ScaleHeight     =   3030
   ScaleWidth      =   4560
   StartUpPosition =   3  'Windows Default
   Begin VB.Timer Timer3 
      Enabled         =   0   'False
      Interval        =   1500
      Left            =   1680
      Top             =   1920
   End
   Begin VB.Timer Timer2 
      Interval        =   1500
      Left            =   1080
      Top             =   1920
   End
   Begin VB.Timer Timer1 
      Interval        =   750
      Left            =   480
      Top             =   1920
   End
   Begin MSCommLib.MSComm MSComm1 
      Left            =   360
      Top             =   2400
      _ExtentX        =   1005
      _ExtentY        =   1005
      _Version        =   393216
      DTREnable       =   -1  'True
   End
End
Attribute VB_Name = "Form1"
Attribute VB_GlobalNameSpace = False
Attribute VB_Creatable = False
Attribute VB_PredeclaredId = True
Attribute VB_Exposed = False
Private Sub Form_Load()
    MSComm1.PortOpen = True
End Sub

Private Sub Timer1_Timer()
    Timer1.Enabled = False
    Timer3.Enabled = True
End Sub

Private Sub Timer2_Timer()
    MSComm1.Output = Chr(&H2) + "0,1000,50,1,1000,50,2,1000,50,3,1000,50,4,1000,50,5,1000,50,6,1000,50,7,1000,50," + _
                    "8,1000,50,9,1000,50,10,1000,50,11,1000,50,12,1000,50,13,1000,50,14,1000,50,15,1000,50" + Chr(&H3)
End Sub

Private Sub Timer3_Timer()
    MSComm1.Output = Chr(&H2) + "0,2000,50,1,2000,50,2,2000,50,3,2000,50,4,2000,50,5,2000,50,6,2000,50,7,2000,50," + _
                    "8,2000,50,9,2000,50,10,2000,50,11,2000,50,12,2000,50,13,2000,50,14,2000,50,15,2000,50" + Chr(&H3)
End Sub
