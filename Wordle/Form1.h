// 1. ����������� ��������� � ���������� ������������ ����
#include <fstream>
#include <iostream>
#include <string>
#include <vector>

namespace CppCLRWinFormsProject {

    using namespace System;
    using namespace System::Windows::Forms;
    using namespace System::Collections::Generic;

    // 2. ����������� ������ Form1
    public ref class Form1 : public System::Windows::Forms::Form
    {
    private:
        static List<String^>^ wordsToGuess; // ������ ���� ��� ����������
        array<TextBox^>^ textBoxes; // ������ ��������� �����
        Panel^ menuPanel; // ������ ����
        Panel^ gamePanel; // ������� ������
        Button^ playButton; // ������ "������"
        System::Windows::Forms::Label^ label2; // ��������� ����
        int attemptCount = 0; // ������� �������
        String^ correctWord; // ���������� ��� �������� ����������� �����

    public:
        // 3. �����������
        Form1(void)
        {
            //InitializeComponent(); // ������������� ����������� �����
            //CreateMenu(); // �������� �������� ����
            //CreateGamePanel(); // �������� ������� ������
            //SubscribeToTextChangedEvents(); // �������� �� ������� ��������� ������
            //SubscribeToKeyDownEvents(); // �������� �� ������� ������� ������
            InitializeWords(); // ������������� ������ ����
        }

    protected:
        // 4. ����������
        ~Form1()
        {
            if (components)
            {
                delete components; // ������������ ��������
            }
        }

    private:
        System::ComponentModel::IContainer^ components; // ��������� �����������

        // 5. ������������� ����
        void InitializeWords()
        {
            wordsToGuess = gcnew List<String^>();
            wordsToGuess->Add("����");
            // �������� ������ ���� ��� �������������
            SelectRandomWord(); // ����� ���������� ����� ��� ����������
        }

        // 6. ����� ���������� �����
        void SelectRandomWord()
        {
            Random^ rand = gcnew Random();
            int index = rand->Next(wordsToGuess->Count);
            correctWord = wordsToGuess[index]; // ��������� ����������� �����
        }
    };
}