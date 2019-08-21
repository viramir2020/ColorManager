object Form1: TForm1
  Left = 0
  Top = 0
  Align = alClient
  BorderIcons = [biSystemMenu, biMinimize]
  BorderStyle = bsSingle
  Caption = 'Color Manager'
  ClientHeight = 737
  ClientWidth = 1286
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'Tahoma'
  Font.Style = []
  Menu = MainMenu1
  OldCreateOrder = False
  Position = poDesigned
  OnCreate = FormCreate
  PixelsPerInch = 96
  TextHeight = 13
  object Image1: TImage
    Left = 0
    Top = 0
    Width = 1286
    Height = 705
    Align = alTop
    Center = True
    Proportional = True
    Stretch = True
  end
  object Panel1: TPanel
    AlignWithMargins = True
    Left = 3
    Top = 707
    Width = 1280
    Height = 27
    Align = alBottom
    AutoSize = True
    TabOrder = 0
    ExplicitTop = 708
    object BNorm: TButton
      Left = 1
      Top = 1
      Width = 75
      Height = 25
      Action = Norm
      TabOrder = 0
    end
    object BProtan: TButton
      Left = 114
      Top = 1
      Width = 75
      Height = 25
      Action = Protan
      TabOrder = 1
    end
    object BDeuteran: TButton
      Left = 291
      Top = 1
      Width = 75
      Height = 25
      Action = Deuteran
      TabOrder = 2
    end
    object BTritan: TButton
      Left = 444
      Top = 1
      Width = 75
      Height = 25
      Action = Tritan
      TabOrder = 3
    end
    object BMonoChr: TButton
      Left = 609
      Top = 1
      Width = 75
      Height = 25
      Action = MonoChr
      TabOrder = 4
    end
    object BOpen: TButton
      Left = 890
      Top = 1
      Width = 75
      Height = 25
      Action = Open
      TabOrder = 5
    end
    object BSave: TButton
      Left = 1075
      Top = 1
      Width = 116
      Height = 25
      Action = Save
      TabOrder = 6
    end
  end
  object op1: TOpenPictureDialog
    DefaultExt = '.jpg'
    Filter = #1060#1086#1088#1084#1072#1090' JPEG(*.jpg;*.jpeg)|*.jpg;*.jpeg'
    Options = [ofHideReadOnly, ofPathMustExist, ofFileMustExist, ofEnableSizing, ofForceShowHidden]
    Left = 216
    Top = 392
  end
  object sv1: TSavePictureDialog
    DefaultExt = '.jpg'
    Filter = #1060#1086#1088#1084#1072#1090' JPEG(*.jpg;*.jpeg)|*.jpg;*.jpeg'
    Options = [ofOverwritePrompt, ofHideReadOnly, ofEnableSizing, ofForceShowHidden]
    Left = 176
    Top = 360
  end
  object ActionList1: TActionList
    Left = 528
    Top = 440
    object Norm: TAction
      Caption = #1053#1086#1088#1084
      OnExecute = NormExecute
    end
    object Protan: TAction
      Caption = #1055#1088#1086#1090#1072#1085
      OnExecute = ProtanExecute
    end
    object Deuteran: TAction
      Caption = #1044#1077#1081#1090#1077#1088#1072#1085
      OnExecute = DeuteranExecute
    end
    object Tritan: TAction
      Caption = #1058#1088#1080#1090#1072#1085
      OnExecute = TritanExecute
    end
    object MonoChr: TAction
      Caption = #1052#1086#1085#1086#1093#1088#1086#1084
      OnExecute = MonoChrExecute
    end
    object Open: TAction
      Caption = #1054#1090#1082#1088#1099#1090#1100'...'
      OnExecute = OpenExecute
    end
    object Save: TAction
      Caption = #1057#1086#1093#1088#1072#1085#1080#1090#1100' '#1050#1072#1082'...'
      OnExecute = SaveExecute
    end
    object Exit: TAction
      Caption = #1042#1099#1093#1086#1076
      OnExecute = ExitExecute
    end
  end
  object MainMenu1: TMainMenu
    Left = 712
    Top = 408
    object N1: TMenuItem
      Caption = #1060#1072#1081#1083
      object N8: TMenuItem
        Action = Open
        ShortCut = 16463
      end
      object N7: TMenuItem
        Action = Save
        ShortCut = 16467
      end
      object N9: TMenuItem
        Action = Exit
        ShortCut = 32883
      end
    end
    object N2: TMenuItem
      Caption = #1056#1077#1078#1080#1084
      object MNorm: TMenuItem
        Action = Norm
        AutoCheck = True
        Checked = True
        Default = True
        RadioItem = True
      end
      object MProtan: TMenuItem
        Action = Protan
        AutoCheck = True
        RadioItem = True
      end
      object MDeuteran: TMenuItem
        Action = Deuteran
        AutoCheck = True
        RadioItem = True
      end
      object MTritan: TMenuItem
        Action = Tritan
        AutoCheck = True
        RadioItem = True
      end
      object MMonoChr: TMenuItem
        Action = MonoChr
        AutoCheck = True
        RadioItem = True
      end
    end
    object N3: TMenuItem
      Caption = #1057#1087#1088#1072#1074#1082#1072
      object N4: TMenuItem
        Caption = #1054' '#1087#1088#1086#1075#1088#1072#1084#1084#1077'...'
        OnClick = N4Click
      end
    end
  end
end
