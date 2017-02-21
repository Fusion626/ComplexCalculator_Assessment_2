#pragma once

namespace ComplexCalculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Summary for CalculatorForm
	/// </summary>
	public ref class CalculatorForm : public System::Windows::Forms::Form
	{
	public:
		CalculatorForm(void)
		{
			InitializeComponent();
			//
			//TODO: Add the constructor code here
			//
		}

	protected:
		/// <summary>
		/// Clean up any resources being used.
		/// </summary>
		~CalculatorForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Button^  btnNumberZero;
			 System::Windows::Forms::Button^  btnNumberOne;
			 System::Windows::Forms::Button^  btnNumberTwo;
			 System::Windows::Forms::Button^  btnNumberThree;
			 System::Windows::Forms::Button^  btnButtonFour;
			 System::Windows::Forms::Button^  btnNumberFive;
			 System::Windows::Forms::Button^  btnNumberSix;
			 System::Windows::Forms::Button^  btnNumberSeven;
			 System::Windows::Forms::Button^  btnNumberEight;
			 System::Windows::Forms::Button^  btnNumberNine;
	private: System::Windows::Forms::Button^  btnExpNotation;



			 System::Windows::Forms::Button^  btnDecimal;



	private: System::Windows::Forms::Button^  btnEqual;
	private: System::Windows::Forms::Button^  btnMultiplication;
	private: System::Windows::Forms::Button^  btnSubtract;
	private: System::Windows::Forms::Button^  btnPlus;
	private: System::Windows::Forms::Button^  btnDivide;
	private: System::Windows::Forms::Button^  btnPercentage;
	private: System::Windows::Forms::Button^  btnClearMemory;
	private: System::Windows::Forms::Button^  btnAddMemory;
	private: System::Windows::Forms::Button^  btnRecallMemory;
	private: System::Windows::Forms::Button^  btnStoreMemory;
	private: System::Windows::Forms::Button^  btnSubMemory;
	private: System::Windows::Forms::Button^  button1;
	private: System::Windows::Forms::Button^  btnRightBracket;

	private: System::Windows::Forms::Button^  btnFraction;

	private: System::Windows::Forms::Button^  btnLeftBracket;
	private: System::Windows::Forms::TextBox^  txtboxCalDisplay;

	private: System::Windows::Forms::Button^  btnShift;
	private: System::Windows::Forms::Button^  btnAlpha;


	private: System::Windows::Forms::Button^  btnExponentTwo;

	private: System::Windows::Forms::Button^  btnSin;
	private: System::Windows::Forms::Button^  btnTan;
	private: System::Windows::Forms::Button^  btnCos;
	private: System::Windows::Forms::Button^  btnPowerTo;

	private: System::Windows::Forms::Button^  btnClear;

	private: System::Windows::Forms::Button^  button8;
	private: System::Windows::Forms::Button^  btnClearEverything;
	private: System::Windows::Forms::Button^  btnNumberTwo;


	private: System::Windows::Forms::Label^  lblMemoryA;
	private: System::Windows::Forms::Label^  lblMemoryB;
	private: System::Windows::Forms::Label^  lblMemoryC;
	private: System::Windows::Forms::Label^  lblMemoryD;
	private: System::Windows::Forms::Label^  lblMemoryE;





	private: System::Windows::Forms::Button^  button2;


	private: System::Windows::Forms::Label^  lblMemoryF;
	private: System::Windows::Forms::Label^  lblMemoryX;
	private: System::Windows::Forms::Label^  lblMemoryY;
	private: System::Windows::Forms::Label^  lblMemoryN;
	private: System::Windows::Forms::Label^  lblInverseSin;
	private: System::Windows::Forms::Label^  lblInverseTan;
	private: System::Windows::Forms::Label^  lbl;
	private: System::Windows::Forms::Label^  lblPi;
protected private: System::Windows::Forms::Label^  lblCustomPowerTo;
private:

private: System::Windows::Forms::Label^  lblFullFraction;
private: System::Windows::Forms::TextBox^  txtboxMemoryContent;

private: System::Windows::Forms::Label^  lblCurrentMemory;
private: System::Windows::Forms::TextBox^  txtboxMemoryLocation;
protected private: System::Windows::Forms::Label^  label1;
private: System::Windows::Forms::TextBox^  txtboxCurrentSelector;
protected private:
private:








	private:
		/// <summary>
		/// Required designer variable.
		/// </summary>
		System::ComponentModel::Container ^components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// Required method for Designer support - do not modify
		/// the contents of this method with the code editor.
		/// </summary>
		void InitializeComponent(void)
		{
			this->btnButtonFour = (gcnew System::Windows::Forms::Button());
			this->btnNumberFive = (gcnew System::Windows::Forms::Button());
			this->btnNumberThree = (gcnew System::Windows::Forms::Button());
			this->btnNumberSeven = (gcnew System::Windows::Forms::Button());
			this->btnNumberEight = (gcnew System::Windows::Forms::Button());
			this->btnDecimal = (gcnew System::Windows::Forms::Button());
			this->btnNumberZero = (gcnew System::Windows::Forms::Button());
			this->btnNumberNine = (gcnew System::Windows::Forms::Button());
			this->btnNumberOne = (gcnew System::Windows::Forms::Button());
			this->btnNumberSix = (gcnew System::Windows::Forms::Button());
			this->btnExpNotation = (gcnew System::Windows::Forms::Button());
			this->btnEqual = (gcnew System::Windows::Forms::Button());
			this->btnMultiplication = (gcnew System::Windows::Forms::Button());
			this->btnSubtract = (gcnew System::Windows::Forms::Button());
			this->btnPlus = (gcnew System::Windows::Forms::Button());
			this->btnDivide = (gcnew System::Windows::Forms::Button());
			this->btnPercentage = (gcnew System::Windows::Forms::Button());
			this->btnClearMemory = (gcnew System::Windows::Forms::Button());
			this->btnAddMemory = (gcnew System::Windows::Forms::Button());
			this->btnRecallMemory = (gcnew System::Windows::Forms::Button());
			this->btnStoreMemory = (gcnew System::Windows::Forms::Button());
			this->btnSubMemory = (gcnew System::Windows::Forms::Button());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->btnRightBracket = (gcnew System::Windows::Forms::Button());
			this->btnFraction = (gcnew System::Windows::Forms::Button());
			this->btnLeftBracket = (gcnew System::Windows::Forms::Button());
			this->txtboxCalDisplay = (gcnew System::Windows::Forms::TextBox());
			this->btnShift = (gcnew System::Windows::Forms::Button());
			this->btnAlpha = (gcnew System::Windows::Forms::Button());
			this->btnExponentTwo = (gcnew System::Windows::Forms::Button());
			this->btnSin = (gcnew System::Windows::Forms::Button());
			this->btnTan = (gcnew System::Windows::Forms::Button());
			this->btnCos = (gcnew System::Windows::Forms::Button());
			this->btnPowerTo = (gcnew System::Windows::Forms::Button());
			this->btnClear = (gcnew System::Windows::Forms::Button());
			this->button8 = (gcnew System::Windows::Forms::Button());
			this->btnClearEverything = (gcnew System::Windows::Forms::Button());
			this->btnNumberTwo = (gcnew System::Windows::Forms::Button());
			this->lblMemoryA = (gcnew System::Windows::Forms::Label());
			this->lblMemoryB = (gcnew System::Windows::Forms::Label());
			this->lblMemoryC = (gcnew System::Windows::Forms::Label());
			this->lblMemoryD = (gcnew System::Windows::Forms::Label());
			this->lblMemoryE = (gcnew System::Windows::Forms::Label());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->lblMemoryF = (gcnew System::Windows::Forms::Label());
			this->lblMemoryX = (gcnew System::Windows::Forms::Label());
			this->lblMemoryY = (gcnew System::Windows::Forms::Label());
			this->lblMemoryN = (gcnew System::Windows::Forms::Label());
			this->lblInverseSin = (gcnew System::Windows::Forms::Label());
			this->lblInverseTan = (gcnew System::Windows::Forms::Label());
			this->lbl = (gcnew System::Windows::Forms::Label());
			this->lblPi = (gcnew System::Windows::Forms::Label());
			this->lblCustomPowerTo = (gcnew System::Windows::Forms::Label());
			this->lblFullFraction = (gcnew System::Windows::Forms::Label());
			this->txtboxMemoryContent = (gcnew System::Windows::Forms::TextBox());
			this->lblCurrentMemory = (gcnew System::Windows::Forms::Label());
			this->txtboxMemoryLocation = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->txtboxCurrentSelector = (gcnew System::Windows::Forms::TextBox());
			this->SuspendLayout();
			// 
			// btnButtonFour
			// 
			this->btnButtonFour->Location = System::Drawing::Point(66, 266);
			this->btnButtonFour->Name = L"btnButtonFour";
			this->btnButtonFour->Size = System::Drawing::Size(35, 20);
			this->btnButtonFour->TabIndex = 0;
			this->btnButtonFour->Text = L"4";
			this->btnButtonFour->UseVisualStyleBackColor = true;
			// 
			// btnNumberFive
			// 
			this->btnNumberFive->Location = System::Drawing::Point(107, 266);
			this->btnNumberFive->Name = L"btnNumberFive";
			this->btnNumberFive->Size = System::Drawing::Size(35, 20);
			this->btnNumberFive->TabIndex = 1;
			this->btnNumberFive->Text = L"5";
			this->btnNumberFive->UseVisualStyleBackColor = true;
			// 
			// btnNumberThree
			// 
			this->btnNumberThree->Location = System::Drawing::Point(148, 230);
			this->btnNumberThree->Name = L"btnNumberThree";
			this->btnNumberThree->Size = System::Drawing::Size(35, 20);
			this->btnNumberThree->TabIndex = 2;
			this->btnNumberThree->Text = L"3";
			this->btnNumberThree->UseVisualStyleBackColor = true;
			// 
			// btnNumberSeven
			// 
			this->btnNumberSeven->Location = System::Drawing::Point(66, 302);
			this->btnNumberSeven->Name = L"btnNumberSeven";
			this->btnNumberSeven->Size = System::Drawing::Size(35, 20);
			this->btnNumberSeven->TabIndex = 3;
			this->btnNumberSeven->Text = L"7";
			this->btnNumberSeven->UseVisualStyleBackColor = true;
			// 
			// btnNumberEight
			// 
			this->btnNumberEight->Location = System::Drawing::Point(107, 302);
			this->btnNumberEight->Name = L"btnNumberEight";
			this->btnNumberEight->Size = System::Drawing::Size(35, 20);
			this->btnNumberEight->TabIndex = 4;
			this->btnNumberEight->Text = L"8";
			this->btnNumberEight->UseVisualStyleBackColor = true;
			// 
			// btnDecimal
			// 
			this->btnDecimal->Location = System::Drawing::Point(66, 338);
			this->btnDecimal->Name = L"btnDecimal";
			this->btnDecimal->Size = System::Drawing::Size(35, 20);
			this->btnDecimal->TabIndex = 5;
			this->btnDecimal->Text = L".";
			this->btnDecimal->UseVisualStyleBackColor = true;
			// 
			// btnNumberZero
			// 
			this->btnNumberZero->Location = System::Drawing::Point(107, 338);
			this->btnNumberZero->Name = L"btnNumberZero";
			this->btnNumberZero->Size = System::Drawing::Size(35, 20);
			this->btnNumberZero->TabIndex = 6;
			this->btnNumberZero->Text = L"0";
			this->btnNumberZero->UseVisualStyleBackColor = true;
			// 
			// btnNumberNine
			// 
			this->btnNumberNine->Location = System::Drawing::Point(148, 302);
			this->btnNumberNine->Name = L"btnNumberNine";
			this->btnNumberNine->Size = System::Drawing::Size(35, 20);
			this->btnNumberNine->TabIndex = 7;
			this->btnNumberNine->Text = L"9";
			this->btnNumberNine->UseVisualStyleBackColor = true;
			// 
			// btnNumberOne
			// 
			this->btnNumberOne->Location = System::Drawing::Point(66, 230);
			this->btnNumberOne->Name = L"btnNumberOne";
			this->btnNumberOne->Size = System::Drawing::Size(35, 20);
			this->btnNumberOne->TabIndex = 9;
			this->btnNumberOne->Text = L"1";
			this->btnNumberOne->UseVisualStyleBackColor = true;
			// 
			// btnNumberSix
			// 
			this->btnNumberSix->Location = System::Drawing::Point(148, 266);
			this->btnNumberSix->Name = L"btnNumberSix";
			this->btnNumberSix->Size = System::Drawing::Size(35, 20);
			this->btnNumberSix->TabIndex = 10;
			this->btnNumberSix->Text = L"6";
			this->btnNumberSix->UseVisualStyleBackColor = true;
			// 
			// btnExpNotation
			// 
			this->btnExpNotation->Location = System::Drawing::Point(148, 338);
			this->btnExpNotation->Name = L"btnExpNotation";
			this->btnExpNotation->Size = System::Drawing::Size(35, 20);
			this->btnExpNotation->TabIndex = 11;
			this->btnExpNotation->Text = L"x10";
			this->btnExpNotation->UseVisualStyleBackColor = true;
			// 
			// btnEqual
			// 
			this->btnEqual->Location = System::Drawing::Point(230, 266);
			this->btnEqual->Name = L"btnEqual";
			this->btnEqual->Size = System::Drawing::Size(35, 92);
			this->btnEqual->TabIndex = 12;
			this->btnEqual->Text = L"=";
			this->btnEqual->UseVisualStyleBackColor = true;
			// 
			// btnMultiplication
			// 
			this->btnMultiplication->Location = System::Drawing::Point(189, 266);
			this->btnMultiplication->Name = L"btnMultiplication";
			this->btnMultiplication->Size = System::Drawing::Size(35, 20);
			this->btnMultiplication->TabIndex = 13;
			this->btnMultiplication->Text = L"x";
			this->btnMultiplication->UseVisualStyleBackColor = true;
			// 
			// btnSubtract
			// 
			this->btnSubtract->Location = System::Drawing::Point(189, 302);
			this->btnSubtract->Name = L"btnSubtract";
			this->btnSubtract->Size = System::Drawing::Size(35, 20);
			this->btnSubtract->TabIndex = 14;
			this->btnSubtract->Text = L"-";
			this->btnSubtract->UseVisualStyleBackColor = true;
			// 
			// btnPlus
			// 
			this->btnPlus->Location = System::Drawing::Point(189, 338);
			this->btnPlus->Name = L"btnPlus";
			this->btnPlus->Size = System::Drawing::Size(35, 20);
			this->btnPlus->TabIndex = 15;
			this->btnPlus->Text = L"+";
			this->btnPlus->UseVisualStyleBackColor = true;
			// 
			// btnDivide
			// 
			this->btnDivide->Location = System::Drawing::Point(189, 230);
			this->btnDivide->Name = L"btnDivide";
			this->btnDivide->Size = System::Drawing::Size(35, 20);
			this->btnDivide->TabIndex = 16;
			this->btnDivide->Text = L"/";
			this->btnDivide->UseVisualStyleBackColor = true;
			// 
			// btnPercentage
			// 
			this->btnPercentage->Location = System::Drawing::Point(230, 230);
			this->btnPercentage->Name = L"btnPercentage";
			this->btnPercentage->Size = System::Drawing::Size(35, 20);
			this->btnPercentage->TabIndex = 17;
			this->btnPercentage->Text = L"%";
			this->btnPercentage->UseVisualStyleBackColor = true;
			// 
			// btnClearMemory
			// 
			this->btnClearMemory->Location = System::Drawing::Point(230, 122);
			this->btnClearMemory->Name = L"btnClearMemory";
			this->btnClearMemory->Size = System::Drawing::Size(35, 20);
			this->btnClearMemory->TabIndex = 22;
			this->btnClearMemory->Text = L"MC";
			this->btnClearMemory->UseVisualStyleBackColor = true;
			// 
			// btnAddMemory
			// 
			this->btnAddMemory->Location = System::Drawing::Point(189, 122);
			this->btnAddMemory->Name = L"btnAddMemory";
			this->btnAddMemory->Size = System::Drawing::Size(35, 20);
			this->btnAddMemory->TabIndex = 21;
			this->btnAddMemory->Text = L"M+";
			this->btnAddMemory->UseVisualStyleBackColor = true;
			// 
			// btnRecallMemory
			// 
			this->btnRecallMemory->Location = System::Drawing::Point(66, 122);
			this->btnRecallMemory->Name = L"btnRecallMemory";
			this->btnRecallMemory->Size = System::Drawing::Size(35, 20);
			this->btnRecallMemory->TabIndex = 20;
			this->btnRecallMemory->Text = L"MR";
			this->btnRecallMemory->UseVisualStyleBackColor = true;
			// 
			// btnStoreMemory
			// 
			this->btnStoreMemory->Location = System::Drawing::Point(107, 122);
			this->btnStoreMemory->Name = L"btnStoreMemory";
			this->btnStoreMemory->Size = System::Drawing::Size(35, 20);
			this->btnStoreMemory->TabIndex = 19;
			this->btnStoreMemory->Text = L"MS";
			this->btnStoreMemory->UseVisualStyleBackColor = true;
			// 
			// btnSubMemory
			// 
			this->btnSubMemory->Location = System::Drawing::Point(148, 122);
			this->btnSubMemory->Name = L"btnSubMemory";
			this->btnSubMemory->Size = System::Drawing::Size(35, 20);
			this->btnSubMemory->TabIndex = 18;
			this->btnSubMemory->Text = L"M-";
			this->btnSubMemory->UseVisualStyleBackColor = true;
			// 
			// button1
			// 
			this->button1->Location = System::Drawing::Point(189, 158);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(35, 20);
			this->button1->TabIndex = 27;
			this->button1->Text = L"S-D";
			this->button1->UseVisualStyleBackColor = true;
			// 
			// btnRightBracket
			// 
			this->btnRightBracket->Location = System::Drawing::Point(148, 158);
			this->btnRightBracket->Name = L"btnRightBracket";
			this->btnRightBracket->Size = System::Drawing::Size(35, 20);
			this->btnRightBracket->TabIndex = 26;
			this->btnRightBracket->Text = L")";
			this->btnRightBracket->UseVisualStyleBackColor = true;
			// 
			// btnFraction
			// 
			this->btnFraction->Location = System::Drawing::Point(66, 158);
			this->btnFraction->Name = L"btnFraction";
			this->btnFraction->Size = System::Drawing::Size(35, 20);
			this->btnFraction->TabIndex = 24;
			this->btnFraction->Text = L"*/*";
			this->btnFraction->UseVisualStyleBackColor = true;
			// 
			// btnLeftBracket
			// 
			this->btnLeftBracket->Location = System::Drawing::Point(107, 158);
			this->btnLeftBracket->Name = L"btnLeftBracket";
			this->btnLeftBracket->Size = System::Drawing::Size(35, 20);
			this->btnLeftBracket->TabIndex = 23;
			this->btnLeftBracket->Text = L"(";
			this->btnLeftBracket->UseVisualStyleBackColor = true;
			this->btnLeftBracket->UseWaitCursor = true;
			// 
			// txtboxCalDisplay
			// 
			this->txtboxCalDisplay->Location = System::Drawing::Point(16, 12);
			this->txtboxCalDisplay->Name = L"txtboxCalDisplay";
			this->txtboxCalDisplay->Size = System::Drawing::Size(249, 20);
			this->txtboxCalDisplay->TabIndex = 28;
			// 
			// btnShift
			// 
			this->btnShift->Location = System::Drawing::Point(12, 86);
			this->btnShift->Name = L"btnShift";
			this->btnShift->Size = System::Drawing::Size(48, 56);
			this->btnShift->TabIndex = 29;
			this->btnShift->Text = L"Shift";
			this->btnShift->UseVisualStyleBackColor = true;
			// 
			// btnAlpha
			// 
			this->btnAlpha->Location = System::Drawing::Point(12, 158);
			this->btnAlpha->Name = L"btnAlpha";
			this->btnAlpha->Size = System::Drawing::Size(48, 56);
			this->btnAlpha->TabIndex = 30;
			this->btnAlpha->Text = L"Alpha";
			this->btnAlpha->UseVisualStyleBackColor = true;
			// 
			// btnExponentTwo
			// 
			this->btnExponentTwo->Location = System::Drawing::Point(189, 86);
			this->btnExponentTwo->Name = L"btnExponentTwo";
			this->btnExponentTwo->Size = System::Drawing::Size(35, 20);
			this->btnExponentTwo->TabIndex = 34;
			this->btnExponentTwo->Text = L"x2";
			this->btnExponentTwo->UseVisualStyleBackColor = true;
			// 
			// btnSin
			// 
			this->btnSin->Location = System::Drawing::Point(66, 86);
			this->btnSin->Name = L"btnSin";
			this->btnSin->Size = System::Drawing::Size(35, 20);
			this->btnSin->TabIndex = 33;
			this->btnSin->Text = L"Sin";
			this->btnSin->UseVisualStyleBackColor = true;
			// 
			// btnTan
			// 
			this->btnTan->Location = System::Drawing::Point(107, 86);
			this->btnTan->Name = L"btnTan";
			this->btnTan->Size = System::Drawing::Size(35, 20);
			this->btnTan->TabIndex = 32;
			this->btnTan->Text = L"Tan";
			this->btnTan->UseVisualStyleBackColor = true;
			// 
			// btnCos
			// 
			this->btnCos->Location = System::Drawing::Point(148, 86);
			this->btnCos->Name = L"btnCos";
			this->btnCos->Size = System::Drawing::Size(35, 20);
			this->btnCos->TabIndex = 31;
			this->btnCos->Text = L"Cos";
			this->btnCos->UseVisualStyleBackColor = true;
			// 
			// btnPowerTo
			// 
			this->btnPowerTo->Location = System::Drawing::Point(230, 158);
			this->btnPowerTo->Name = L"btnPowerTo";
			this->btnPowerTo->Size = System::Drawing::Size(35, 20);
			this->btnPowerTo->TabIndex = 40;
			this->btnPowerTo->Text = L"√*";
			this->btnPowerTo->UseVisualStyleBackColor = true;
			// 
			// btnClear
			// 
			this->btnClear->Location = System::Drawing::Point(189, 194);
			this->btnClear->Name = L"btnClear";
			this->btnClear->Size = System::Drawing::Size(35, 20);
			this->btnClear->TabIndex = 39;
			this->btnClear->Text = L"C";
			this->btnClear->UseVisualStyleBackColor = true;
			// 
			// button8
			// 
			this->button8->Location = System::Drawing::Point(66, 194);
			this->button8->Name = L"button8";
			this->button8->Size = System::Drawing::Size(76, 20);
			this->button8->TabIndex = 38;
			this->button8->Text = L"<----";
			this->button8->UseVisualStyleBackColor = true;
			// 
			// btnClearEverything
			// 
			this->btnClearEverything->Location = System::Drawing::Point(148, 194);
			this->btnClearEverything->Name = L"btnClearEverything";
			this->btnClearEverything->Size = System::Drawing::Size(35, 20);
			this->btnClearEverything->TabIndex = 36;
			this->btnClearEverything->Text = L"CE";
			this->btnClearEverything->UseVisualStyleBackColor = true;
			// 
			// btnNumberTwo
			// 
			this->btnNumberTwo->Location = System::Drawing::Point(107, 230);
			this->btnNumberTwo->Name = L"btnNumberTwo";
			this->btnNumberTwo->Size = System::Drawing::Size(35, 20);
			this->btnNumberTwo->TabIndex = 8;
			this->btnNumberTwo->Text = L"2";
			this->btnNumberTwo->UseVisualStyleBackColor = true;
			// 
			// lblMemoryA
			// 
			this->lblMemoryA->AutoSize = true;
			this->lblMemoryA->Location = System::Drawing::Point(87, 109);
			this->lblMemoryA->Name = L"lblMemoryA";
			this->lblMemoryA->Size = System::Drawing::Size(14, 13);
			this->lblMemoryA->TabIndex = 41;
			this->lblMemoryA->Text = L"A";
			// 
			// lblMemoryB
			// 
			this->lblMemoryB->AutoSize = true;
			this->lblMemoryB->Location = System::Drawing::Point(128, 109);
			this->lblMemoryB->Name = L"lblMemoryB";
			this->lblMemoryB->Size = System::Drawing::Size(14, 13);
			this->lblMemoryB->TabIndex = 42;
			this->lblMemoryB->Text = L"B";
			// 
			// lblMemoryC
			// 
			this->lblMemoryC->AutoSize = true;
			this->lblMemoryC->Location = System::Drawing::Point(169, 109);
			this->lblMemoryC->Name = L"lblMemoryC";
			this->lblMemoryC->Size = System::Drawing::Size(14, 13);
			this->lblMemoryC->TabIndex = 43;
			this->lblMemoryC->Text = L"C";
			// 
			// lblMemoryD
			// 
			this->lblMemoryD->AutoSize = true;
			this->lblMemoryD->Location = System::Drawing::Point(210, 109);
			this->lblMemoryD->Name = L"lblMemoryD";
			this->lblMemoryD->Size = System::Drawing::Size(15, 13);
			this->lblMemoryD->TabIndex = 44;
			this->lblMemoryD->Text = L"D";
			// 
			// lblMemoryE
			// 
			this->lblMemoryE->AutoSize = true;
			this->lblMemoryE->Location = System::Drawing::Point(251, 109);
			this->lblMemoryE->Name = L"lblMemoryE";
			this->lblMemoryE->Size = System::Drawing::Size(14, 13);
			this->lblMemoryE->TabIndex = 45;
			this->lblMemoryE->Text = L"E";
			// 
			// button2
			// 
			this->button2->Location = System::Drawing::Point(230, 86);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(35, 20);
			this->button2->TabIndex = 46;
			this->button2->Text = L"x*";
			this->button2->UseVisualStyleBackColor = true;
			// 
			// lblMemoryF
			// 
			this->lblMemoryF->AutoSize = true;
			this->lblMemoryF->Location = System::Drawing::Point(88, 143);
			this->lblMemoryF->Name = L"lblMemoryF";
			this->lblMemoryF->Size = System::Drawing::Size(13, 13);
			this->lblMemoryF->TabIndex = 49;
			this->lblMemoryF->Text = L"F";
			// 
			// lblMemoryX
			// 
			this->lblMemoryX->AutoSize = true;
			this->lblMemoryX->Location = System::Drawing::Point(128, 143);
			this->lblMemoryX->Name = L"lblMemoryX";
			this->lblMemoryX->Size = System::Drawing::Size(14, 13);
			this->lblMemoryX->TabIndex = 50;
			this->lblMemoryX->Text = L"X";
			// 
			// lblMemoryY
			// 
			this->lblMemoryY->AutoSize = true;
			this->lblMemoryY->Location = System::Drawing::Point(169, 143);
			this->lblMemoryY->Name = L"lblMemoryY";
			this->lblMemoryY->Size = System::Drawing::Size(14, 13);
			this->lblMemoryY->TabIndex = 51;
			this->lblMemoryY->Text = L"Y";
			// 
			// lblMemoryN
			// 
			this->lblMemoryN->AutoSize = true;
			this->lblMemoryN->Location = System::Drawing::Point(209, 143);
			this->lblMemoryN->Name = L"lblMemoryN";
			this->lblMemoryN->Size = System::Drawing::Size(15, 13);
			this->lblMemoryN->TabIndex = 52;
			this->lblMemoryN->Text = L"N";
			// 
			// lblInverseSin
			// 
			this->lblInverseSin->AutoSize = true;
			this->lblInverseSin->Location = System::Drawing::Point(70, 71);
			this->lblInverseSin->Name = L"lblInverseSin";
			this->lblInverseSin->Size = System::Drawing::Size(31, 13);
			this->lblInverseSin->TabIndex = 53;
			this->lblInverseSin->Text = L"Sin-1";
			// 
			// lblInverseTan
			// 
			this->lblInverseTan->AutoSize = true;
			this->lblInverseTan->Location = System::Drawing::Point(107, 71);
			this->lblInverseTan->Name = L"lblInverseTan";
			this->lblInverseTan->Size = System::Drawing::Size(35, 13);
			this->lblInverseTan->TabIndex = 54;
			this->lblInverseTan->Text = L"Tan-1";
			// 
			// lbl
			// 
			this->lbl->AutoSize = true;
			this->lbl->Location = System::Drawing::Point(150, 71);
			this->lbl->Name = L"lbl";
			this->lbl->Size = System::Drawing::Size(34, 13);
			this->lbl->TabIndex = 55;
			this->lbl->Text = L"Cos-1";
			// 
			// lblPi
			// 
			this->lblPi->AutoSize = true;
			this->lblPi->Location = System::Drawing::Point(152, 325);
			this->lblPi->Name = L"lblPi";
			this->lblPi->Size = System::Drawing::Size(13, 13);
			this->lblPi->TabIndex = 56;
			this->lblPi->Text = L"π";
			// 
			// lblCustomPowerTo
			// 
			this->lblCustomPowerTo->AutoSize = true;
			this->lblCustomPowerTo->Location = System::Drawing::Point(236, 71);
			this->lblCustomPowerTo->Name = L"lblCustomPowerTo";
			this->lblCustomPowerTo->Size = System::Drawing::Size(21, 13);
			this->lblCustomPowerTo->TabIndex = 57;
			this->lblCustomPowerTo->Text = L"*√*";
			// 
			// lblFullFraction
			// 
			this->lblFullFraction->AutoSize = true;
			this->lblFullFraction->Location = System::Drawing::Point(60, 143);
			this->lblFullFraction->Name = L"lblFullFraction";
			this->lblFullFraction->Size = System::Drawing::Size(30, 13);
			this->lblFullFraction->TabIndex = 58;
			this->lblFullFraction->Text = L"*_*/*";
			// 
			// txtboxMemoryContent
			// 
			this->txtboxMemoryContent->Location = System::Drawing::Point(135, 38);
			this->txtboxMemoryContent->Name = L"txtboxMemoryContent";
			this->txtboxMemoryContent->Size = System::Drawing::Size(130, 20);
			this->txtboxMemoryContent->TabIndex = 59;
			// 
			// lblCurrentMemory
			// 
			this->lblCurrentMemory->AutoSize = true;
			this->lblCurrentMemory->Location = System::Drawing::Point(14, 41);
			this->lblCurrentMemory->Name = L"lblCurrentMemory";
			this->lblCurrentMemory->Size = System::Drawing::Size(91, 13);
			this->lblCurrentMemory->TabIndex = 60;
			this->lblCurrentMemory->Text = L"Memory Location:";
			// 
			// txtboxMemoryLocation
			// 
			this->txtboxMemoryLocation->Location = System::Drawing::Point(111, 38);
			this->txtboxMemoryLocation->Name = L"txtboxMemoryLocation";
			this->txtboxMemoryLocation->Size = System::Drawing::Size(18, 20);
			this->txtboxMemoryLocation->TabIndex = 61;
			// 
			// label1
			// 
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(231, 144);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(26, 13);
			this->label1->TabIndex = 62;
			this->label1->Text = L" 3√*";
			// 
			// txtboxCurrentSelector
			// 
			this->txtboxCurrentSelector->Location = System::Drawing::Point(12, 60);
			this->txtboxCurrentSelector->Name = L"txtboxCurrentSelector";
			this->txtboxCurrentSelector->Size = System::Drawing::Size(48, 20);
			this->txtboxCurrentSelector->TabIndex = 63;
			// 
			// CalculatorForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(6, 13);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(277, 367);
			this->Controls->Add(this->txtboxCurrentSelector);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->txtboxMemoryLocation);
			this->Controls->Add(this->lblCurrentMemory);
			this->Controls->Add(this->txtboxMemoryContent);
			this->Controls->Add(this->lblFullFraction);
			this->Controls->Add(this->lblCustomPowerTo);
			this->Controls->Add(this->lblPi);
			this->Controls->Add(this->lbl);
			this->Controls->Add(this->lblInverseTan);
			this->Controls->Add(this->lblInverseSin);
			this->Controls->Add(this->lblMemoryN);
			this->Controls->Add(this->lblMemoryY);
			this->Controls->Add(this->lblMemoryX);
			this->Controls->Add(this->lblMemoryF);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->lblMemoryE);
			this->Controls->Add(this->lblMemoryD);
			this->Controls->Add(this->lblMemoryC);
			this->Controls->Add(this->lblMemoryB);
			this->Controls->Add(this->lblMemoryA);
			this->Controls->Add(this->btnPowerTo);
			this->Controls->Add(this->btnClear);
			this->Controls->Add(this->button8);
			this->Controls->Add(this->btnClearEverything);
			this->Controls->Add(this->btnExponentTwo);
			this->Controls->Add(this->btnSin);
			this->Controls->Add(this->btnTan);
			this->Controls->Add(this->btnCos);
			this->Controls->Add(this->btnAlpha);
			this->Controls->Add(this->btnShift);
			this->Controls->Add(this->txtboxCalDisplay);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->btnRightBracket);
			this->Controls->Add(this->btnFraction);
			this->Controls->Add(this->btnLeftBracket);
			this->Controls->Add(this->btnClearMemory);
			this->Controls->Add(this->btnAddMemory);
			this->Controls->Add(this->btnRecallMemory);
			this->Controls->Add(this->btnStoreMemory);
			this->Controls->Add(this->btnSubMemory);
			this->Controls->Add(this->btnPercentage);
			this->Controls->Add(this->btnDivide);
			this->Controls->Add(this->btnPlus);
			this->Controls->Add(this->btnSubtract);
			this->Controls->Add(this->btnMultiplication);
			this->Controls->Add(this->btnEqual);
			this->Controls->Add(this->btnExpNotation);
			this->Controls->Add(this->btnNumberSix);
			this->Controls->Add(this->btnNumberOne);
			this->Controls->Add(this->btnNumberTwo);
			this->Controls->Add(this->btnNumberNine);
			this->Controls->Add(this->btnNumberZero);
			this->Controls->Add(this->btnDecimal);
			this->Controls->Add(this->btnNumberEight);
			this->Controls->Add(this->btnNumberSeven);
			this->Controls->Add(this->btnNumberThree);
			this->Controls->Add(this->btnNumberFive);
			this->Controls->Add(this->btnButtonFour);
			this->Name = L"CalculatorForm";
			this->Text = L"Complex Calculator";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
};
}