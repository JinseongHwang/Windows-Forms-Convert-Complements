#pragma once

namespace ConvertComplements {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	using namespace System::Text::RegularExpressions;

	/// <summary>
	/// MyForm에 대한 요약입니다.
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: 생성자 코드를 여기에 추가합니다.
			//
		}

	protected:
		/// <summary>
		/// 사용 중인 모든 리소스를 정리합니다.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::Label^ ChoiceBase;
	protected:
	private: System::Windows::Forms::Label^ InputManager;
	private: System::Windows::Forms::TextBox^ InputBox;
	private: System::Windows::Forms::RadioButton^ Btn8bit;
	private: System::Windows::Forms::RadioButton^ Btn16bit;
	private: System::Windows::Forms::RadioButton^ Btn32bit;
	private: System::Windows::Forms::RadioButton^ Btn64bit;
	private: System::Windows::Forms::Button^ Submit;
	private: System::Windows::Forms::Button^ Reset;
	private: System::Windows::Forms::ColorDialog^ colorDialog1;
	private: System::Windows::Forms::TextBox^ StatusWindow;
	private: System::Windows::Forms::GroupBox^ Stage1;
	private: System::Windows::Forms::GroupBox^ Stage2;
	private: System::Windows::Forms::Label^ StatusTitle;
	private: System::Windows::Forms::TextBox^ ResultWindow;
	private: System::Windows::Forms::GroupBox^ Stage3;
	private: System::Windows::Forms::Label^ ResultLabel;
	private: System::Windows::Forms::Button^ Exit;



	private:
		/// <summary>
		/// 필수 디자이너 변수입니다.
		/// </summary>
		System::ComponentModel::Container^ components;

#pragma region Windows Form Designer generated code
		/// <summary>
		/// 디자이너 지원에 필요한 메서드입니다. 
		/// 이 메서드의 내용을 코드 편집기로 수정하지 마세요.
		/// </summary>
		void InitializeComponent(void)
		{
			this->ChoiceBase = (gcnew System::Windows::Forms::Label());
			this->InputManager = (gcnew System::Windows::Forms::Label());
			this->InputBox = (gcnew System::Windows::Forms::TextBox());
			this->Btn8bit = (gcnew System::Windows::Forms::RadioButton());
			this->Btn16bit = (gcnew System::Windows::Forms::RadioButton());
			this->Btn32bit = (gcnew System::Windows::Forms::RadioButton());
			this->Btn64bit = (gcnew System::Windows::Forms::RadioButton());
			this->Submit = (gcnew System::Windows::Forms::Button());
			this->Reset = (gcnew System::Windows::Forms::Button());
			this->colorDialog1 = (gcnew System::Windows::Forms::ColorDialog());
			this->StatusWindow = (gcnew System::Windows::Forms::TextBox());
			this->Stage1 = (gcnew System::Windows::Forms::GroupBox());
			this->Stage2 = (gcnew System::Windows::Forms::GroupBox());
			this->StatusTitle = (gcnew System::Windows::Forms::Label());
			this->ResultWindow = (gcnew System::Windows::Forms::TextBox());
			this->Stage3 = (gcnew System::Windows::Forms::GroupBox());
			this->ResultLabel = (gcnew System::Windows::Forms::Label());
			this->Exit = (gcnew System::Windows::Forms::Button());
			this->Stage1->SuspendLayout();
			this->Stage2->SuspendLayout();
			this->Stage3->SuspendLayout();
			this->SuspendLayout();
			// 
			// ChoiceBase
			// 
			this->ChoiceBase->AutoSize = true;
			this->ChoiceBase->Font = (gcnew System::Drawing::Font(L"나눔고딕", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->ChoiceBase->Location = System::Drawing::Point(6, 17);
			this->ChoiceBase->Name = L"ChoiceBase";
			this->ChoiceBase->Size = System::Drawing::Size(451, 36);
			this->ChoiceBase->TabIndex = 0;
			this->ChoiceBase->Text = L"입력할 숫자의 bit를 선택하세요.";
			// 
			// InputManager
			// 
			this->InputManager->AutoSize = true;
			this->InputManager->Font = (gcnew System::Drawing::Font(L"나눔고딕", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->InputManager->Location = System::Drawing::Point(6, 17);
			this->InputManager->Name = L"InputManager";
			this->InputManager->Size = System::Drawing::Size(0, 36);
			this->InputManager->TabIndex = 0;
			this->InputManager->Text = L"음의 정수를 입력해주세요.";
			// 
			// InputBox
			// 
			this->InputBox->Font = (gcnew System::Drawing::Font(L"나눔고딕", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->InputBox->Location = System::Drawing::Point(6, 65);
			this->InputBox->Name = L"InputBox";
			this->InputBox->Size = System::Drawing::Size(505, 26);
			this->InputBox->TabIndex = 1;
			// 
			// Btn8bit
			// 
			this->Btn8bit->AutoSize = true;
			this->Btn8bit->Font = (gcnew System::Drawing::Font(L"나눔고딕 ExtraBold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->Btn8bit->Location = System::Drawing::Point(12, 66);
			this->Btn8bit->Name = L"Btn8bit";
			this->Btn8bit->Size = System::Drawing::Size(57, 23);
			this->Btn8bit->TabIndex = 2;
			this->Btn8bit->TabStop = true;
			this->Btn8bit->Text = L"8bit";
			this->Btn8bit->UseVisualStyleBackColor = true;
			this->Btn8bit->CheckedChanged += gcnew System::EventHandler(this, &MyForm::BitSelect);
			this->Btn8bit->Click += gcnew System::EventHandler(this, &MyForm::Select8bit);
			// 
			// Btn16bit
			// 
			this->Btn16bit->AutoSize = true;
			this->Btn16bit->Font = (gcnew System::Drawing::Font(L"나눔고딕 ExtraBold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->Btn16bit->Location = System::Drawing::Point(75, 66);
			this->Btn16bit->Name = L"Btn16bit";
			this->Btn16bit->Size = System::Drawing::Size(67, 23);
			this->Btn16bit->TabIndex = 2;
			this->Btn16bit->TabStop = true;
			this->Btn16bit->Text = L"16bit";
			this->Btn16bit->UseVisualStyleBackColor = true;
			this->Btn16bit->CheckedChanged += gcnew System::EventHandler(this, &MyForm::BitSelect);
			this->Btn16bit->Click += gcnew System::EventHandler(this, &MyForm::Select16bit);
			// 
			// Btn32bit
			// 
			this->Btn32bit->AutoSize = true;
			this->Btn32bit->Font = (gcnew System::Drawing::Font(L"나눔고딕 ExtraBold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->Btn32bit->Location = System::Drawing::Point(148, 66);
			this->Btn32bit->Name = L"Btn32bit";
			this->Btn32bit->Size = System::Drawing::Size(67, 23);
			this->Btn32bit->TabIndex = 2;
			this->Btn32bit->TabStop = true;
			this->Btn32bit->Text = L"32bit";
			this->Btn32bit->UseVisualStyleBackColor = true;
			this->Btn32bit->CheckedChanged += gcnew System::EventHandler(this, &MyForm::BitSelect);
			this->Btn32bit->Click += gcnew System::EventHandler(this, &MyForm::Select32bit);
			// 
			// Btn64bit
			// 
			this->Btn64bit->AutoSize = true;
			this->Btn64bit->Font = (gcnew System::Drawing::Font(L"나눔고딕 ExtraBold", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->Btn64bit->Location = System::Drawing::Point(221, 66);
			this->Btn64bit->Name = L"Btn64bit";
			this->Btn64bit->Size = System::Drawing::Size(67, 23);
			this->Btn64bit->TabIndex = 2;
			this->Btn64bit->TabStop = true;
			this->Btn64bit->Text = L"64bit";
			this->Btn64bit->UseVisualStyleBackColor = true;
			this->Btn64bit->CheckedChanged += gcnew System::EventHandler(this, &MyForm::BitSelect);
			this->Btn64bit->Click += gcnew System::EventHandler(this, &MyForm::Select64bit);
			// 
			// Submit
			// 
			this->Submit->AutoSize = true;
			this->Submit->Font = (gcnew System::Drawing::Font(L"나눔고딕", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->Submit->Location = System::Drawing::Point(517, 65);
			this->Submit->Name = L"Submit";
			this->Submit->Size = System::Drawing::Size(75, 29);
			this->Submit->TabIndex = 3;
			this->Submit->Text = L"확인";
			this->Submit->UseVisualStyleBackColor = true;
			this->Submit->Click += gcnew System::EventHandler(this, &MyForm::Submit_Click);
			// 
			// Reset
			// 
			this->Reset->AutoSize = true;
			this->Reset->Font = (gcnew System::Drawing::Font(L"나눔고딕", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->Reset->Location = System::Drawing::Point(375, 479);
			this->Reset->Name = L"Reset";
			this->Reset->Size = System::Drawing::Size(126, 29);
			this->Reset->TabIndex = 3;
			this->Reset->Text = L"초기화";
			this->Reset->UseVisualStyleBackColor = true;
			this->Reset->Click += gcnew System::EventHandler(this, &MyForm::Reset_Click);
			// 
			// StatusWindow
			// 
			this->StatusWindow->Font = (gcnew System::Drawing::Font(L"나눔고딕", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->StatusWindow->Location = System::Drawing::Point(634, 31);
			this->StatusWindow->Multiline = true;
			this->StatusWindow->Name = L"StatusWindow";
			this->StatusWindow->ScrollBars = System::Windows::Forms::ScrollBars::Vertical;
			this->StatusWindow->Size = System::Drawing::Size(343, 422);
			this->StatusWindow->TabIndex = 4;
			// 
			// Stage1
			// 
			this->Stage1->Controls->Add(this->ChoiceBase);
			this->Stage1->Controls->Add(this->Btn8bit);
			this->Stage1->Controls->Add(this->Btn16bit);
			this->Stage1->Controls->Add(this->Btn32bit);
			this->Stage1->Controls->Add(this->Btn64bit);
			this->Stage1->Font = (gcnew System::Drawing::Font(L"나눔고딕", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->Stage1->Location = System::Drawing::Point(30, 26);
			this->Stage1->Name = L"Stage1";
			this->Stage1->Size = System::Drawing::Size(598, 102);
			this->Stage1->TabIndex = 5;
			this->Stage1->TabStop = false;
			this->Stage1->Text = L"1단계";
			// 
			// Stage2
			// 
			this->Stage2->Controls->Add(this->InputManager);
			this->Stage2->Controls->Add(this->InputBox);
			this->Stage2->Controls->Add(this->Submit);
			this->Stage2->Font = (gcnew System::Drawing::Font(L"나눔고딕", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->Stage2->Location = System::Drawing::Point(30, 144);
			this->Stage2->Name = L"Stage2";
			this->Stage2->Size = System::Drawing::Size(598, 109);
			this->Stage2->TabIndex = 6;
			this->Stage2->TabStop = false;
			this->Stage2->Text = L"2단계";
			// 
			// StatusTitle
			// 
			this->StatusTitle->AutoSize = true;
			this->StatusTitle->Font = (gcnew System::Drawing::Font(L"나눔고딕", 12, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->StatusTitle->Location = System::Drawing::Point(755, 9);
			this->StatusTitle->Name = L"StatusTitle";
			this->StatusTitle->Size = System::Drawing::Size(107, 19);
			this->StatusTitle->TabIndex = 7;
			this->StatusTitle->Text = L"진행 상태 표시";
			// 
			// ResultWindow
			// 
			this->ResultWindow->Font = (gcnew System::Drawing::Font(L"나눔고딕", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->ResultWindow->Location = System::Drawing::Point(6, 66);
			this->ResultWindow->Multiline = true;
			this->ResultWindow->Name = L"ResultWindow";
			this->ResultWindow->Size = System::Drawing::Size(586, 111);
			this->ResultWindow->TabIndex = 8;
			// 
			// Stage3
			// 
			this->Stage3->Controls->Add(this->ResultLabel);
			this->Stage3->Controls->Add(this->ResultWindow);
			this->Stage3->Font = (gcnew System::Drawing::Font(L"나눔고딕", 9.75F, System::Drawing::FontStyle::Regular, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->Stage3->Location = System::Drawing::Point(30, 270);
			this->Stage3->Name = L"Stage3";
			this->Stage3->Size = System::Drawing::Size(598, 183);
			this->Stage3->TabIndex = 9;
			this->Stage3->TabStop = false;
			this->Stage3->Text = L"3단계";
			// 
			// ResultLabel
			// 
			this->ResultLabel->AutoSize = true;
			this->ResultLabel->Font = (gcnew System::Drawing::Font(L"나눔고딕", 24, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->ResultLabel->Location = System::Drawing::Point(6, 17);
			this->ResultLabel->Name = L"ResultLabel";
			this->ResultLabel->Size = System::Drawing::Size(308, 36);
			this->ResultLabel->TabIndex = 0;
			this->ResultLabel->Text = L"결과값을 확인하세요!";
			// 
			// Exit
			// 
			this->Exit->AutoSize = true;
			this->Exit->Font = (gcnew System::Drawing::Font(L"나눔고딕", 12, System::Drawing::FontStyle::Bold, System::Drawing::GraphicsUnit::Point,
				static_cast<System::Byte>(129)));
			this->Exit->Location = System::Drawing::Point(507, 479);
			this->Exit->Name = L"Exit";
			this->Exit->Size = System::Drawing::Size(126, 29);
			this->Exit->TabIndex = 3;
			this->Exit->Text = L"종료";
			this->Exit->UseVisualStyleBackColor = true;
			this->Exit->Click += gcnew System::EventHandler(this, &MyForm::Exit_Click);
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(7, 12);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1014, 520);
			this->Controls->Add(this->Stage3);
			this->Controls->Add(this->StatusTitle);
			this->Controls->Add(this->Stage2);
			this->Controls->Add(this->Exit);
			this->Controls->Add(this->Reset);
			this->Controls->Add(this->Stage1);
			this->Controls->Add(this->StatusWindow);
			this->Name = L"MyForm";
			this->Text = L"컴퓨터 구조 중간고사 과제1 - 1723940 황진성";
			this->Stage1->ResumeLayout(false);
			this->Stage1->PerformLayout();
			this->Stage2->ResumeLayout(false);
			this->Stage2->PerformLayout();
			this->Stage3->ResumeLayout(false);
			this->Stage3->PerformLayout();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion

		int bitSelected = 0; // 선택된 bit 수를 저장함.(default: 0)
		String^ input;

		// 확인 버튼 클릭
	private: System::Void Submit_Click(System::Object^ sender, System::EventArgs^ e) {

		if (bitSelected == 0) {
			StatusWindow->AppendText("\r\n===================================\r\n");
			StatusWindow->AppendText("bit를 먼저 선택해주세요.\r\n");
			StatusWindow->AppendText("===================================\r\n\r\n");
			InputBox->Text = "";
			return;
		}

		input = InputBox->Text;

		// 정규표현식으로 음의 정수인지 판단
		String^ pattern = "^-[0-9]+$";
		Regex^ regex = gcnew Regex(pattern);
		Match^ match = regex->Match(input);

		ResultWindow->Text = "";

		if (match->Success) {

			// signed long long의 최소값은 10진수로 대략 -9*10^18 이다.
			// 따라서 자릿수가 20개 이상일 경우는 항상 오버플로우가 발생한다.
			// '-'기호와 숫자 사이에 0이 들어가서 고의로 길이가 길어진 경우는 고려하지 않음.
			if (input->Length >= 20) {
				StatusWindow->AppendText("\r\n===================================\r\n");
				StatusWindow->AppendText("입력한 값: " + input + "\r\n");
				StatusWindow->AppendText("입력한 값은 너무 작습니다. 다시 입력해주세요.\r\n");
				StatusWindow->AppendText("===================================\r\n\r\n");
				InputBox->Text = "";
				return;
			}

			// '-'기호를 제외한 나머지 숫자가 0일때 예외처리
			bool allZero = true;
			for (int i = 1; i < input->Length; ++i) {
				if (input[i] != '0') {
					allZero = false; break;
				}
			}
			if (allZero) {
				StatusWindow->AppendText("\r\n===================================\r\n");
				StatusWindow->AppendText("입력한 값: " + input + "\r\n");
				StatusWindow->AppendText("입력한 값은 0과 같습니다. 다시 입력해주세요.\r\n");
				StatusWindow->AppendText("===================================\r\n\r\n");
				InputBox->Text = "";
				return;
			}

			// 64bit 정수 자료형으로 캐스팅
			long long int llInput = System::Int64::Parse(input);

			// bit 범위 확인
			if ((bitSelected == 8 && llInput < -0x7f) ||
				(bitSelected == 16 && llInput < -0x7fff) ||
				(bitSelected == 32 && llInput < -0x7fffffff) ||
				(bitSelected == 64 && llInput < -0x7fffffffffffffff)) {
				StatusWindow->AppendText("\r\n===================================\r\n");
				StatusWindow->AppendText("입력한 값: " + input + "\r\n");
				StatusWindow->AppendText("입력한 값이 " + bitSelected + "bit 범위를 벗어납니다. 다시 입력해주세요.\r\n");
				StatusWindow->AppendText("===================================\r\n\r\n");
				InputBox->Text = "";
				return;
			}

			// 어떤 예외에 해당되지 않는 경우 연산을 수행한다.
			StatusWindow->AppendText("\r\n===================================\r\n");
			StatusWindow->AppendText("입력한 값: " + input + "\r\n");
			StatusWindow->AppendText("입력한 값이 형식과 일치합니다. 연산을 수행합니다.\r\n");
			StatusWindow->AppendText("===================================\r\n\r\n");

			// 입력된 10진수 음의 정수값을 2진수로 변환한다.
			String^ strInput = "";
			while (llInput != 0) {
				if (llInput % 2 == 0) strInput += "0";
				else strInput += "1";
				llInput /= 2;
			}

			// bit수에 맞게 나머지 칸을 0으로 채워준다.
			while (strInput->Length != bitSelected - 1) strInput += "0";
			strInput += "1"; // 음수이기 때문에 부호를 붙힌다.

			// string reverse 문자열 뒤집기
			String^ signedInt = "";
			for (int i = bitSelected - 1; i >= 0; --i) signedInt += strInput[i];

			// 2의 보수를 쉽게 구하기 위해 마지막 0의 위치를 저장하는 변수
			int lastZeroPos = -1;

			// 1의 보수를 구하는 과정 -> 0<->1 toggle
			String^ oneCompl = "1";
			for (int i = 1; i < bitSelected; ++i) {
				if (signedInt[i] == '0') oneCompl += "1";
				else {
					oneCompl += "0";
					lastZeroPos = i;
				}
			}

			// 2의 보수: 마지막 0의 위치에 1을 넣고 그 뒤에 값이 있다면 0으로 채워준다.
			String^ twoCompl = oneCompl->Substring(0, lastZeroPos);
			twoCompl += "1";
			while (twoCompl->Length != bitSelected) twoCompl += "0";

			// 결과값 출력
			ResultWindow->AppendText("부호화 정수: " + signedInt + "\r\n");
			ResultWindow->AppendText("1의     보수: " + oneCompl + "\r\n");
			ResultWindow->AppendText("2의     보수: " + twoCompl + "\r\n");
		}
		else {
			StatusWindow->AppendText("\r\n===================================\r\n");
			StatusWindow->AppendText("입력한 값: " + input + "\r\n");
			StatusWindow->AppendText("입력한 값이 형식에 맞지 않습니다. 다시 입력해주세요.\r\n");
			StatusWindow->AppendText("===================================\r\n\r\n");
			InputBox->Text = "";
		}

	}

		   // bit 버튼 클릭 이벤트
	private: System::Void BitSelect(System::Object^ sender, System::EventArgs^ e) {

		String^ currText; // display text

		// bit 선택 후 변수에 대입
		if (Btn8bit->Checked) bitSelected = 8;
		else if (Btn16bit->Checked) bitSelected = 16;
		else if (Btn32bit->Checked) bitSelected = 32;
		else if (Btn64bit->Checked) bitSelected = 64;

		// 표현할 문자열에 append한다.
		switch (bitSelected) {
		case 8:
			currText = bitSelected + "bit"; break;
		case 16:
			currText = bitSelected + "bit"; break;
		case 32:
			currText = bitSelected + "bit"; break;
		case 64:
			currText = bitSelected + "bit"; break;
		}
		currText += "로 표현할 음의 정수를 입력해주세요.";

		InputManager->Text = currText;
	}

		   // 초기화 버튼을 눌렀을 경우
	private: System::Void Reset_Click(System::Object^ sender, System::EventArgs^ e) {
		bitSelected = 0;
		if (Btn8bit->Checked) Btn8bit->Checked = false;
		if (Btn16bit->Checked) Btn16bit->Checked = false;
		if (Btn32bit->Checked) Btn32bit->Checked = false;
		if (Btn64bit->Checked) Btn64bit->Checked = false;
		if (InputBox->Text != "") InputBox->Text = "";
		if (ResultWindow->Text != "") ResultWindow->Text = "";
		StatusWindow->AppendText("\r\n초기화를 실행했습니다.\r\n\r\n");
		InputManager->Text = "음의 정수를 입력해주세요.";
	}

		   // 종료 버튼을 눌렀을 경우
	private: System::Void Exit_Click(System::Object^ sender, System::EventArgs^ e) {
		StatusWindow->AppendText("프로그램을 종료합니다.\r\n");
		Application::Exit();
	}

	private: System::Void Select8bit(System::Object^ sender, System::EventArgs^ e) {
		StatusWindow->AppendText(" > 8bit를 선택했습니다.\r\n");
	}
	private: System::Void Select16bit(System::Object^ sender, System::EventArgs^ e) {
		StatusWindow->AppendText(" > 16bit를 선택했습니다.\r\n");
	}
	private: System::Void Select32bit(System::Object^ sender, System::EventArgs^ e) {
		StatusWindow->AppendText(" > 32bit를 선택했습니다.\r\n");
	}
	private: System::Void Select64bit(System::Object^ sender, System::EventArgs^ e) {
		StatusWindow->AppendText(" > 64bit를 선택했습니다.\r\n");
	}
	};
}