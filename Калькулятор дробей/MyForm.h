#pragma once
#include "cmath"
namespace calculator {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;

	/// <summary>
	/// Сводка для MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: добавьте код конструктора
			//
		}

	protected:
		/// <summary>
		/// Освободить все используемые ресурсы.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::TextBox^ textBox1;

	private: System::Windows::Forms::Label^ label1;

	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::Label^ label2;
	private: System::Windows::Forms::TextBox^ textBox2;
	private: System::Windows::Forms::TextBox^ textBox3;
	private: System::Windows::Forms::TextBox^ textBox4;
	private: System::Windows::Forms::TextBox^ textBox5;
	private: System::Windows::Forms::TextBox^ textBox6;
	private: System::Windows::Forms::TextBox^ textBox7;
	private: System::Windows::Forms::Label^ label3;
	private: System::Windows::Forms::TextBox^ textBox8;
	private: System::Windows::Forms::TextBox^ textBox9;
	private: System::Windows::Forms::Label^ label4;
	private: System::Windows::Forms::Label^ label5;
	private: System::Windows::Forms::ComboBox^ comboBox2;
	private: System::Windows::Forms::Button^ button2;
	private: System::Windows::Forms::TextBox^ textBox10;
	private: System::Windows::Forms::Label^ label6;
	private: System::Windows::Forms::TextBox^ textBox11;
	private: System::Windows::Forms::TextBox^ textBox12;
	private: System::Windows::Forms::Label^ label7;
	private: System::Windows::Forms::Label^ label8;
	private: System::Windows::Forms::Button^ button3;
	private: System::Windows::Forms::ComboBox^ comboBox1;
	private: System::Windows::Forms::Button^ button4;
	private: System::Windows::Forms::Button^ button5;
	private: System::Windows::Forms::Label^ label11;













	private: System::ComponentModel::IContainer^ components;
	protected:

	private:
		/// <summary>
		/// Обязательная переменная конструктора.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Требуемый метод для поддержки конструктора — не изменяйте 
		/// содержимое этого метода с помощью редактора кода.
		/// </summary>
		void InitializeComponent(void)
		{
			System::ComponentModel::ComponentResourceManager^ resources = (gcnew System::ComponentModel::ComponentResourceManager(MyForm::typeid));
			this->textBox1 = (gcnew System::Windows::Forms::TextBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->label2 = (gcnew System::Windows::Forms::Label());
			this->textBox2 = (gcnew System::Windows::Forms::TextBox());
			this->textBox3 = (gcnew System::Windows::Forms::TextBox());
			this->textBox4 = (gcnew System::Windows::Forms::TextBox());
			this->textBox5 = (gcnew System::Windows::Forms::TextBox());
			this->textBox6 = (gcnew System::Windows::Forms::TextBox());
			this->textBox7 = (gcnew System::Windows::Forms::TextBox());
			this->label3 = (gcnew System::Windows::Forms::Label());
			this->textBox8 = (gcnew System::Windows::Forms::TextBox());
			this->textBox9 = (gcnew System::Windows::Forms::TextBox());
			this->label4 = (gcnew System::Windows::Forms::Label());
			this->label5 = (gcnew System::Windows::Forms::Label());
			this->comboBox2 = (gcnew System::Windows::Forms::ComboBox());
			this->button2 = (gcnew System::Windows::Forms::Button());
			this->textBox10 = (gcnew System::Windows::Forms::TextBox());
			this->label6 = (gcnew System::Windows::Forms::Label());
			this->textBox11 = (gcnew System::Windows::Forms::TextBox());
			this->textBox12 = (gcnew System::Windows::Forms::TextBox());
			this->label7 = (gcnew System::Windows::Forms::Label());
			this->label8 = (gcnew System::Windows::Forms::Label());
			this->button3 = (gcnew System::Windows::Forms::Button());
			this->comboBox1 = (gcnew System::Windows::Forms::ComboBox());
			this->button4 = (gcnew System::Windows::Forms::Button());
			this->button5 = (gcnew System::Windows::Forms::Button());
			this->label11 = (gcnew System::Windows::Forms::Label());
			this->SuspendLayout();
			// 
			// textBox1	- целая часть результата вычисления обыкновенных дробей
			// 
			this->textBox1->BackColor = System::Drawing::SystemColors::Window;
			this->textBox1->Cursor = System::Windows::Forms::Cursors::No;
			this->textBox1->Location = System::Drawing::Point(41, 318);
			this->textBox1->Name = L"textBox1";
			this->textBox1->ReadOnly = true;
			this->textBox1->Size = System::Drawing::Size(69, 22);
			this->textBox1->TabIndex = 32;
			// 
			// label1
			// 
			this->label1->BackColor = System::Drawing::Color::Transparent;
			this->label1->Location = System::Drawing::Point(32, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(163, 23);
			this->label1->TabIndex = 31;
			this->label1->Text = L"Обыкновенные дроби";
			this->label1->Click += gcnew System::EventHandler(this, &MyForm::label1_Click);
			// 
			// button1  Кнопка вычисления обыкновенных дробей
			// 
			this->button1->BackColor = System::Drawing::Color::Gray;
			this->button1->Location = System::Drawing::Point(131, 55);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(93, 26);
			this->button1->TabIndex = 30;
			this->button1->Text = L"Вычислить";
			this->button1->UseVisualStyleBackColor = false;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// label2
			// 
			this->label2->BackColor = System::Drawing::Color::Transparent;
			this->label2->Location = System::Drawing::Point(38, 99);
			this->label2->Name = L"label2";
			this->label2->Size = System::Drawing::Size(108, 23);
			this->label2->TabIndex = 29;
			this->label2->Text = L"Первая дробь: ";
			// 
			// textBox2 - Числитель первой обыкновенной дроби
			// 
			this->textBox2->Location = System::Drawing::Point(116, 128);
			this->textBox2->Name = L"textBox2";
			this->textBox2->Size = System::Drawing::Size(108, 22);
			this->textBox2->TabIndex = 6;
			// 
			// textBox3 - Числитель второй обыкновенной дроби
			// 
			this->textBox3->Location = System::Drawing::Point(116, 224);
			this->textBox3->Name = L"textBox3";
			this->textBox3->Size = System::Drawing::Size(108, 22);
			this->textBox3->TabIndex = 7;
			// 
			// textBox4 - Знаменатель первой обыкновенной дроби
			// 
			this->textBox4->Location = System::Drawing::Point(116, 154);
			this->textBox4->Name = L"textBox4";
			this->textBox4->Size = System::Drawing::Size(108, 22);
			this->textBox4->TabIndex = 8;
			// 
			// textBox5 - Знаменатель результата вычисления обыкновенных дробей
			// 
			this->textBox5->BackColor = System::Drawing::SystemColors::Window;
			this->textBox5->Cursor = System::Windows::Forms::Cursors::No;
			this->textBox5->Location = System::Drawing::Point(116, 331);
			this->textBox5->Name = L"textBox5";
			this->textBox5->ReadOnly = true;
			this->textBox5->Size = System::Drawing::Size(108, 22);
			this->textBox5->TabIndex = 9;
			// 
			// textBox6 - Числитель результата вычисления обыкновенных дробей
			// 
			this->textBox6->BackColor = System::Drawing::SystemColors::Window;
			this->textBox6->Cursor = System::Windows::Forms::Cursors::No;
			this->textBox6->Location = System::Drawing::Point(116, 303);
			this->textBox6->Name = L"textBox6";
			this->textBox6->ReadOnly = true;
			this->textBox6->Size = System::Drawing::Size(108, 22);
			this->textBox6->TabIndex = 10;
			// 
			// textBox7 - Знаменатель второй обыкновенной дроби
			// 
			this->textBox7->Location = System::Drawing::Point(116, 249);
			this->textBox7->Name = L"textBox7";
			this->textBox7->Size = System::Drawing::Size(108, 22);
			this->textBox7->TabIndex = 11;
			// 
			// label3
			// 
			this->label3->BackColor = System::Drawing::Color::Transparent;
			this->label3->Location = System::Drawing::Point(38, 185);
			this->label3->Name = L"label3";
			this->label3->Size = System::Drawing::Size(111, 23);
			this->label3->TabIndex = 28;
			this->label3->Text = L"Вторая дробь: ";
			// 
			// textBox8 - Целая часть второй обыкновенной дроби
			// 
			this->textBox8->Location = System::Drawing::Point(41, 237);
			this->textBox8->Name = L"textBox8";
			this->textBox8->Size = System::Drawing::Size(69, 22);
			this->textBox8->TabIndex = 27;
			// 
			// textBox9 - Целая часть первой обыкновенной дроби
			// 
			this->textBox9->Location = System::Drawing::Point(41, 139);
			this->textBox9->Name = L"textBox9";
			this->textBox9->Size = System::Drawing::Size(69, 22);
			this->textBox9->TabIndex = 26;
			// 
			// label4
			// 
			this->label4->AutoSize = true;
			this->label4->BackColor = System::Drawing::Color::Transparent;
			this->label4->Location = System::Drawing::Point(38, 280);
			this->label4->Name = L"label4";
			this->label4->Size = System::Drawing::Size(80, 17);
			this->label4->TabIndex = 15;
			this->label4->Text = L"Результат:";
			// 
			// label5
			// 
			this->label5->AutoSize = true;
			this->label5->BackColor = System::Drawing::Color::Transparent;
			this->label5->Location = System::Drawing::Point(320, 19);
			this->label5->Name = L"label5";
			this->label5->Size = System::Drawing::Size(135, 17);
			this->label5->TabIndex = 16;
			this->label5->Text = L"Десятичные дроби";
			// 
			// comboBox2 - Выбор действия для работы с десятичными дробями
			// 
			this->comboBox2->FormattingEnabled = true;
			this->comboBox2->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Сложение", L"Вычитание", L"Умножение", L"Деление" });
			this->comboBox2->Location = System::Drawing::Point(287, 55);
			this->comboBox2->Name = L"comboBox2";
			this->comboBox2->Size = System::Drawing::Size(113, 24);
			this->comboBox2->TabIndex = 17;
			this->comboBox2->Text = L"Действие";
			// 
			// button2 - Кнопка вычисления для десятичных дробей
			// 
			this->button2->BackColor = System::Drawing::Color::Gray;
			this->button2->Location = System::Drawing::Point(406, 54);
			this->button2->Name = L"button2";
			this->button2->Size = System::Drawing::Size(97, 28);
			this->button2->TabIndex = 18;
			this->button2->Text = L"Вычислить";
			this->button2->UseVisualStyleBackColor = false;
			this->button2->Click += gcnew System::EventHandler(this, &MyForm::button2_Click);
			// 
			// textBox10 - Первая десятичная дробь
			// 
			this->textBox10->Location = System::Drawing::Point(296, 128);
			this->textBox10->Name = L"textBox10";
			this->textBox10->Size = System::Drawing::Size(193, 22);
			this->textBox10->TabIndex = 19;
			// 
			// label6
			// 
			this->label6->AutoSize = true;
			this->label6->BackColor = System::Drawing::Color::Transparent;
			this->label6->Location = System::Drawing::Point(319, 99);
			this->label6->Name = L"label6";
			this->label6->Size = System::Drawing::Size(104, 17);
			this->label6->TabIndex = 20;
			this->label6->Text = L"Первое число:";
			// 
			// textBox11 - Вторая десятичная дробь 
			// 
			this->textBox11->Location = System::Drawing::Point(296, 185);
			this->textBox11->Name = L"textBox11";
			this->textBox11->Size = System::Drawing::Size(193, 22);
			this->textBox11->TabIndex = 21;
			// 
			// textBox12 - результат вычисления десятичных дробей
			// 
			this->textBox12->BackColor = System::Drawing::SystemColors::Window;
			this->textBox12->Cursor = System::Windows::Forms::Cursors::No;
			this->textBox12->Location = System::Drawing::Point(296, 249);
			this->textBox12->Name = L"textBox12";
			this->textBox12->ReadOnly = true;
			this->textBox12->Size = System::Drawing::Size(193, 22);
			this->textBox12->TabIndex = 22;
			// 
			// label7
			// 
			this->label7->AutoSize = true;
			this->label7->BackColor = System::Drawing::Color::Transparent;
			this->label7->Location = System::Drawing::Point(320, 157);
			this->label7->Name = L"label7";
			this->label7->Size = System::Drawing::Size(103, 17);
			this->label7->TabIndex = 23;
			this->label7->Text = L"Второе число:";
			// 
			// label8
			// 
			this->label8->AutoSize = true;
			this->label8->BackColor = System::Drawing::Color::Transparent;
			this->label8->Location = System::Drawing::Point(320, 224);
			this->label8->Name = L"label8";
			this->label8->Size = System::Drawing::Size(80, 17);
			this->label8->TabIndex = 24;
			this->label8->Text = L"Результат:";
			// 
			// button3 - Очищение всех полей
			// 
			this->button3->Location = System::Drawing::Point(495, 10);
			this->button3->Name = L"button3";
			this->button3->Size = System::Drawing::Size(120, 35);
			this->button3->TabIndex = 25;
			this->button3->Text = L"Очистить все";
			this->button3->UseVisualStyleBackColor = true;
			this->button3->Click += gcnew System::EventHandler(this, &MyForm::button3_Click);
			// 
			// comboBox1 - Выбор действия для работы с обыкновенными дробями
			// 
			this->comboBox1->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Сложение", L"Вычитание", L"Умножение", L"Деление" });
			this->comboBox1->Location = System::Drawing::Point(4, 57);
			this->comboBox1->Name = L"comboBox1";
			this->comboBox1->Size = System::Drawing::Size(121, 24);
			this->comboBox1->TabIndex = 39;
			this->comboBox1->Text = L"Действие";
			// 
			// button4 - Перевод из обыкновенной дроби в десятичную
			// 
			this->button4->BackColor = System::Drawing::Color::Gray;
			this->button4->Location = System::Drawing::Point(287, 327);
			this->button4->Name = L"button4";
			this->button4->Size = System::Drawing::Size(113, 33);
			this->button4->TabIndex = 34;
			this->button4->Text = L"В десятичную";
			this->button4->UseVisualStyleBackColor = false;
			this->button4->Click += gcnew System::EventHandler(this, &MyForm::button4_Click);
			// 
			// button5 - Перевод из десятичной дроби в обыкновенную
			// 
			this->button5->BackColor = System::Drawing::Color::Gray;
			this->button5->Location = System::Drawing::Point(442, 327);
			this->button5->Name = L"button5";
			this->button5->Size = System::Drawing::Size(133, 33);
			this->button5->TabIndex = 35;
			this->button5->Text = L"В обыкновенную";
			this->button5->UseVisualStyleBackColor = false;
			this->button5->Click += gcnew System::EventHandler(this, &MyForm::button5_Click);
			// 
			// label11
			// 
			this->label11->BackColor = System::Drawing::Color::Transparent;
			this->label11->Location = System::Drawing::Point(340, 291);
			this->label11->Name = L"label11";
			this->label11->Size = System::Drawing::Size(163, 23);
			this->label11->TabIndex = 38;
			this->label11->Text = L"Перевод результата";
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->BackColor = System::Drawing::SystemColors::ActiveCaption;
			this->BackgroundImage = (cli::safe_cast<System::Drawing::Image^>(resources->GetObject(L"$this.BackgroundImage")));
			this->BackgroundImageLayout = System::Windows::Forms::ImageLayout::Stretch;
			this->ClientSize = System::Drawing::Size(624, 371);
			this->Controls->Add(this->label11);
			this->Controls->Add(this->button5);
			this->Controls->Add(this->button4);
			this->Controls->Add(this->comboBox1);
			this->Controls->Add(this->button3);
			this->Controls->Add(this->label8);
			this->Controls->Add(this->label7);
			this->Controls->Add(this->textBox12);
			this->Controls->Add(this->textBox11);
			this->Controls->Add(this->label6);
			this->Controls->Add(this->textBox10);
			this->Controls->Add(this->button2);
			this->Controls->Add(this->comboBox2);
			this->Controls->Add(this->label5);
			this->Controls->Add(this->label4);
			this->Controls->Add(this->textBox9);
			this->Controls->Add(this->textBox8);
			this->Controls->Add(this->label3);
			this->Controls->Add(this->textBox7);
			this->Controls->Add(this->textBox6);
			this->Controls->Add(this->textBox5);
			this->Controls->Add(this->textBox4);
			this->Controls->Add(this->textBox3);
			this->Controls->Add(this->textBox2);
			this->Controls->Add(this->label2);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->textBox1);
			this->Icon = (cli::safe_cast<System::Drawing::Icon^>(resources->GetObject(L"$this.Icon")));
			this->MaximumSize = System::Drawing::Size(642, 418);
			this->MinimumSize = System::Drawing::Size(642, 418);
			this->Name = L"MyForm";
			this->Text = L"Calculator";
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion


	private: System::Void label1_Click(System::Object^ sender, System::EventArgs^ e) {
		
}
private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e) { //Работа с обыкновенными дробями
	bool f = true;
	for (int i = 0; i < textBox9->Text->Length; i++) { 
		if ((textBox9->Text[i] >= '0') && (textBox9->Text[i] <= '9')) {} // Проверка являются ли все символы в textBox'е цифрами
		else { f = false; } 
	}
	for (int i = 0; i < textBox2->Text->Length; i++) {
		if ((textBox2->Text[i] >= '0') && (textBox2->Text[i] <= '9')) {} 
		else { f = false; }
	}
	for (int i = 0; i < textBox4->Text->Length; i++) {
		if ((textBox4->Text[i] >= '0') && (textBox4->Text[i] <= '9')) {}
		else { f = false; }
	}
	for (int i = 0; i < textBox8->Text->Length; i++) {
		if ((textBox8->Text[i] >= '0') && (textBox8->Text[i] <= '9')) {}
		else { f = false; }
	}
	for (int i = 0; i < textBox3->Text->Length; i++) {
		if ((textBox3->Text[i] >= '0') && (textBox3->Text[i] <= '9')) {}
		else { f = false; }
	}
	for (int i = 0; i < textBox7->Text->Length; i++) {
		if ((textBox7->Text[i] >= '0') && (textBox7->Text[i] <= '9')) {}
		else { f = false; }
	}
	if (!f) 
	{
		MessageBox::Show("Неверный ввод", "Ошибка"); // Если хотя бы в одном textBox'е символ не является цифрой
	}
	else {
		if ((comboBox1->SelectedItem != "Сложение") && (comboBox1->SelectedItem != "Вычитание") && (comboBox1->SelectedItem != "Умножение") && (comboBox1->SelectedItem != "Деление")) // Проверка на выбраность действия в comboBox'е
		{
			MessageBox::Show("Действие не выбрано", "Ошибка"); // Если ничего не выбрать, то вылазит ошибка о том, что действие не выбрано
		}
		else {
			long int c1, ch1, z1, c2, ch2, z2, c3, z3, ch3; // с - целая часть, ch- числитель, z - знаменатель, цифры - номер дроби
			c1 = System::Convert::ToInt32(textBox9->Text); // Конвертирование текста в числа
			ch1 = System::Convert::ToInt32(textBox2->Text); 
			z1 = System::Convert::ToInt32(textBox4->Text); 
			c2 = System::Convert::ToInt32(textBox8->Text); 
			ch2 = System::Convert::ToInt32(textBox3->Text); 
			z2 = System::Convert::ToInt32(textBox7->Text); 
			ch1 = c1 * z1 + ch1; // Перевод целой части в числитель
			ch2 = c2 * z2 + ch2;
			if ((z1 == 0) || (z2 == 0)) // Проверка знаменателя на 0
			{
				MessageBox::Show("Знаменатель не должен равняться 0", "Ошибка");
			}
			else {
				if (comboBox1->SelectedItem == "Умножение") // Умножение дробей
				{
					z3 = z1 * z2; 
					ch3 = ch1 * ch2;
				}
				else if (comboBox1->SelectedItem == "Деление") // Деление дробей
				{
					if (ch2 == 0) // Проверка числителя второй дроби на 0
					{
						MessageBox::Show("Деление на 0", "Ошибка");
					}
					else {
						z3 = z1 * ch2;
						ch3 = z2 * ch1;
					}
				}
				else if (comboBox1->SelectedItem == "Сложение") // Сложение дробей
				{
					ch1 = ch1 * z2; // Домножение дроби до одинакого знаменателя
					ch2 = ch2 * z1; 
					z3 = z1 * z2;
					ch3 = ch1 + ch2;
				}
				else if (comboBox1->SelectedItem == "Вычитание") // Вычитание дробей
				{
					ch1 = ch1 * z2; // Домножение дроби до одинакого знаменателя
					ch2 = ch2 * z1;
					z3 = z1 * z2;
					ch3 = ch1 - ch2;
				}
				c3 = ch3 / z3; // Выделение целой части результата вычисления дробей
				ch3 = ch3 % z3; // Числитель результата вычисления дробей
				while ((ch3 % 2 == 0) && (z3 % 2 == 0)) // Сокращение результата на 2
				{
					ch3 = ch3 / 2;
					z3 = z3 / 2;
				}
				while ((ch3 % 3 == 0) && (z3 % 3 == 0)) // Сокращение результата на 3
				{
					ch3 = ch3 / 3;
					z3 = z3 / 3;
				}
				while ((ch3 % 5 == 0) && (z3 % 5 == 0)) // Сокращение результата на 5
				{
					ch3 = ch3 / 5;
					z3 = z3 / 5;
				}
				while ((ch3 % 7 == 0) && (z3 % 7 == 0)) // Сокращение результата на 7
				{
					ch3 = ch3 / 7;
					z3 = z3 / 7;
				}
				while ((ch3 % 11 == 0) && (z3 % 11 == 0)) // Сокращение результата на 11
				{
					ch3 = ch3 / 11;
					z3 = z3 / 11;
				}
				while ((ch3 % 13 == 0) && (z3 % 13 == 0)) // Сокращение результата на 13
				{
					ch3 = ch3 / 13;
					z3 = z3 / 13;
				}
				while ((ch3 % 17 == 0) && (z3 % 17 == 0)) // Сокращение результата на 17
				{
					ch3 = ch3 / 17;
					z3 = z3 / 17;
				}
				textBox1->Text = System::Convert::ToString(c3); // Конвертирование из чисел в текст и вывод результата
				textBox6->Text = System::Convert::ToString(ch3);
				textBox5->Text = System::Convert::ToString(z3);
			}
		}
	}
}
private: System::Void button2_Click(System::Object^ sender, System::EventArgs^ e) { // работа с десятичными дробями
	bool f = true;
	for (int i = 0; i < textBox10->Text->Length; i++) {
		if ((textBox10->Text[i] >= '0') && (textBox10->Text[i] <= '9')||(textBox10->Text[i] == ',')) // Проверка являются ли все символы цифрами или запятой
		{ 
			if (textBox10->Text[i] == ',') // Проверка на повтор запятой в дроби
			{
				for (int j = i + 1; j < textBox10->Text->Length; j++)
				{
					if ((textBox10->Text[j] == ','))
					{
						f = false;
					}
				}
			}
		}
		else { f = false; }
	}
	for (int i = 0; i < textBox11->Text->Length; i++) {
		if ((textBox11->Text[i] >= '0') && (textBox11->Text[i] <= '9')|| (textBox10->Text[i] == ',')) {
			if (textBox10->Text[i] == ',')
			{
				for (int j = i + 1; j < textBox10->Text->Length; j++)
				{
					if ((textBox10->Text[j] == ','))
					{
						f = false;
					}
				}
			}
		}
		else { f = false; }
	}
	if (!f)
	{
		MessageBox::Show("Неверный ввод", "Ошибка"); // Если хотя бы в одном textBox'е символ не является цифрой

	}
	else {
		if ((comboBox2->SelectedItem != "Сложение") && (comboBox2->SelectedItem != "Вычитание") && (comboBox2->SelectedItem != "Умножение") && (comboBox2->SelectedItem != "Деление")) // Проверка на выбраность действия в comboBox'е
		{
			MessageBox::Show("Действие не выбрано", "Ошибка");
		}
		else {
			double d1,d2,d3; // d -дробь, цифры - номер дроби
			d1 = System::Convert::ToDouble(textBox10->Text); // Конвертирование из текста в числа
			d2 = System::Convert::ToDouble(textBox11->Text);
			if (comboBox2->SelectedItem == "Умножение") // Умножение дробей
			{
				d3 = d1 * d2;
			}
			else if (comboBox2->SelectedItem == "Деление") // Деление дробей
			{
				if (d2 == 0) // Проверка делимости на 0
				{
					MessageBox::Show("Деление на 0", "Ошибка");
				}
				else {
					d3 = d1 / d2;
				}
			}
			else if (comboBox2->SelectedItem == "Сложение") // Сложение дробей
			{
				d3 = d1 + d2;
			}
			else if (comboBox2->SelectedItem == "Вычитание") // Вычитание дробей
			{
				d3 = d1 - d2;
			}
			textBox12->Text = System::Convert::ToString(d3); // Конвертирование чисел в текст и вывод
		}
	}
}
private: System::Void button3_Click(System::Object^ sender, System::EventArgs^ e) {// Кнопка очистить все, очищает каждый textBox
	textBox1->Text = L"";
	textBox2->Text = L"";
	textBox3->Text = L"";
	textBox4->Text = L"";
	textBox5->Text = L"";
	textBox6->Text = L"";
	textBox7->Text = L"";
	textBox8->Text = L"";
	textBox9->Text = L"";
	textBox10->Text = L"";
	textBox11->Text = L"";
	textBox12->Text = L"";
	comboBox1->Text = L"Действие";
	comboBox2->Text = L"Действие";
}
private: System::Void button4_Click(System::Object^ sender, System::EventArgs^ e) { // Перевод из обыкновенной дроби в десятичную
	
		double c3, ch3, z3,d3; // c- целая часть, ch - числитель, z - знаменатель, d - десятичная дробь
		c3 = System::Convert::ToDouble(textBox1->Text); // Конвертирование текста в числа
		ch3 = System::Convert::ToDouble(textBox6->Text);
		z3 = System::Convert::ToDouble(textBox5->Text);
		if (z3 == 0)
		{
			MessageBox::Show("Знаменатель не должен равняться 0", "Ошибка");
		}
		else {
			ch3 = c3 * z3 + ch3; // Перевод целой части в числитель 
			d3 = ch3*1.0 / z3*1.0; // Нецелочисленное деление
			textBox12->Text = System::Convert::ToString(d3); // Конвертирование чисел в текст
	}
}
private: System::Void button5_Click(System::Object^ sender, System::EventArgs^ e) {// Перевод из десятичной дроби в обыкновенную
	double d3; // Десятичная дробь
		long int c3, ch3, z3,d3h = 0; // с - целая часть, ch - числитель, z -знаменатель, d3h - вспомогательная переменная
		d3 = System::Convert::ToDouble(textBox12->Text); // Конвертирование текста в числа
		c3 = (int)d3; // выделение целой части
		for (int i = 0; i < textBox12->Text->Length; i++) {
			if (textBox12->Text[i] == ',') { d3h = 0; } // Подсчет количества знаков после запятой
			else{ d3h++; }
		}
		if ((d3 - c3) == 0) {
			z3 = 1;
			ch3 = 0;
		}
		else{
			z3 = pow(10, d3h); // Вычисление знаменателя обыкновенной дроби
			ch3 = (d3 - c3) * z3; // Вычисление числителя обыкновенной дроби
		}
		while ((ch3 % 2 == 0) && (z3 % 2 == 0)) // Сокращение десятичной дроби на 2
		{
			ch3 = ch3 / 2;
			z3 = z3 / 2;
		}
		while ((ch3 % 3 == 0) && (z3 % 3 == 0)) // Сокращение десятичной дроби на 3
		{
			ch3 = ch3 / 3;
			z3 = z3 / 3;
		}
		while ((ch3 % 5 == 0) && (z3 % 5 == 0)) // Сокращение десятичной дроби на 5
		{
			ch3 = ch3 / 5;
			z3 = z3 / 5;
		}
		while ((ch3 % 7 == 0) && (z3 % 7 == 0)) // Сокращение десятичной дроби на 7
		{
			ch3 = ch3 / 7;
			z3 = z3 / 7;
		}
		while ((ch3 % 11 == 0) && (z3 % 11 == 0)) // Сокращение десятичной дроби на 11
		{
			ch3 = ch3 / 11;
			z3 = z3 / 11;
		}
		while ((ch3 % 13 == 0) && (z3 % 13 == 0)) // Сокращение десятичной дроби на 13
		{
			ch3 = ch3 / 13;
			z3 = z3 / 13;
		}
		while ((ch3 % 17 == 0) && (z3 % 17 == 0)) // Сокращение десятичной дроби на 17
		{
			ch3 = ch3 / 17;
			z3 = z3 / 17;
		}
		textBox1->Text = System::Convert::ToString(c3); // Конвертирование чисел в текст
		textBox5->Text = System::Convert::ToString(z3);
		textBox6->Text = System::Convert::ToString(ch3);
}
};
}
