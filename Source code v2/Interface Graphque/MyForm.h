#pragma once
#include "controller.h" 
#include <msclr\marshal_cppstd.h>
namespace InterfaceGraphque {

	using namespace System;
	using namespace System::ComponentModel;
	using namespace System::Collections;
	using namespace System::Windows::Forms;
	using namespace System::Data;
	using namespace System::Drawing;
	

	/// <summary>
	/// Description résumée de MyForm
	/// </summary>
	public ref class MyForm : public System::Windows::Forms::Form
	{
	public:
		MyForm(void)
		{
			InitializeComponent();
			//
			//TODO: ajoutez ici le code du constructeur
			//
		}
	protected:
		/// <summary>
		/// Nettoyage des ressources utilisées.
		/// </summary>
		~MyForm()
		{
			if (components)
			{
				delete components;
			}
		}
	private: System::Windows::Forms::ComboBox^ comboBoxGestionaire;
	protected:
	private: System::Windows::Forms::Label^ label1;
	private: System::Windows::Forms::Button^ button1;
	private: System::Windows::Forms::ComboBox^ comboBoxTable;
	private: System::Windows::Forms::ComboBox^ comboBoxStat;
	private: System::Windows::Forms::ComboBox^ comboBoxActionTable;
	private: System::Windows::Forms::DataGridView^ dataGridView1;
	private: System::Windows::Forms::MonthCalendar^ monthCalendarPersonel;
	private: System::Windows::Forms::Label^ labelPersonel1;
	private: System::Windows::Forms::Label^ labelPersonel2;
	private: System::Windows::Forms::Label^ labelPersonel3;
	private: System::Windows::Forms::Label^ labelPersonel4;
	private: System::Windows::Forms::Label^ labelPersonel5;
	private: System::Windows::Forms::Label^ labelPersonel6;
	private: System::Windows::Forms::Label^ labelPersonel7;
	private: System::Windows::Forms::Label^ labelPersonel8;
	private: System::Windows::Forms::Label^ labelPersonel9;
	private: System::Windows::Forms::TextBox^ textBoxPersonel1;
	private: System::Windows::Forms::TextBox^ textBoxPersonel2;
	private: System::Windows::Forms::TextBox^ textBoxPersonel3;
	private: System::Windows::Forms::TextBox^ textBoxPersonel4;
	private: System::Windows::Forms::TextBox^ textBoxPersonel5;
	private: System::Windows::Forms::ComboBox^ comboBoxPersonel1;
	private: System::Windows::Forms::ComboBox^ comboBoxPersonel2;
	private: System::Windows::Forms::ComboBox^ comboBoxPersonel3;
	private: System::Windows::Forms::Label^ labelClient1;
	private: System::Windows::Forms::Label^ labelClient2;
	private: System::Windows::Forms::Label^ labelClient3;
	private: System::Windows::Forms::Label^ labelClient4;
	private: System::Windows::Forms::Label^ labelClient6;
	private: System::Windows::Forms::Label^ labelClient7;
	private: System::Windows::Forms::Label^ labelClient5;
	private: System::Windows::Forms::Label^ labelClient8;
	private: System::Windows::Forms::Label^ labelClient9;
	private: System::Windows::Forms::MonthCalendar^ monthCalendarClient;
	private: System::Windows::Forms::TextBox^ textBoxClient1;
	private: System::Windows::Forms::TextBox^ textBoxClient2;
	private: System::Windows::Forms::TextBox^ textBoxClient3;
	private: System::Windows::Forms::TextBox^ textBoxClient4;
	private: System::Windows::Forms::TextBox^ textBoxClient5;
	private: System::Windows::Forms::TextBox^ textBoxClient6;
	private: System::Windows::Forms::TextBox^ textBoxClient7;
	private: System::Windows::Forms::ComboBox^ comboBoxClient1;
	private: System::Windows::Forms::ComboBox^ comboBoxStockMagasin;
	private: System::Windows::Forms::TextBox^ textBoxStock1;
	private: System::Windows::Forms::TextBox^ textBoxStock2;
	private: System::Windows::Forms::Label^ labelStock1;
	private: System::Windows::Forms::Label^ labelStock2;
	private: System::Windows::Forms::Label^ labelStockMagasin;
	private: System::Windows::Forms::Label^ labelCommande1;
	private: System::Windows::Forms::Label^ labelCommande2;
	private: System::Windows::Forms::TextBox^ textBoxCommande1;
	private: System::Windows::Forms::TextBox^ textBoxCommande2;
	private: System::Windows::Forms::Label^ labelCommande3;
	private: System::Windows::Forms::TextBox^ textBoxCommande3;
	private: System::Windows::Forms::ComboBox^ comboBoxCommande1;
	private: System::Windows::Forms::Label^ labelCommande4;
	private: System::Windows::Forms::ComboBox^ comboBoxCommande2;
	private: System::Windows::Forms::RichTextBox^ richTextBoxCommande1;
	private: System::Windows::Forms::Label^ labelCommande5;
	private: System::Windows::Forms::Label^ labelCommande6;
	private: System::Windows::Forms::Label^ labelCommande7;
	private: System::Windows::Forms::Label^ labelCommande8;
	private: System::Windows::Forms::TextBox^ textBoxCommande4;
	private: System::Windows::Forms::TextBox^ textBoxCommande5;
	private: System::Windows::Forms::RichTextBox^ richTextBoxCommande2;
	private: System::Windows::Forms::Label^ labelCommande9;
	private: System::Windows::Forms::Label^ labelcommandeSuprimer;
	private: System::Windows::Forms::TextBox^ textBoxCommandeSuprimer;
	private: System::Windows::Forms::ComboBox^ comboBoxCalcul1;
	private: System::Windows::Forms::ComboBox^ comboBoxIdentifie1;
	private: System::Windows::Forms::RichTextBox^ richTextBoxPanierMoyen1;
	private: System::Windows::Forms::ComboBox^ comboBoxChiffre1;
	private: System::Windows::Forms::Label^ labelCalculChiffre1;
	private: System::Windows::Forms::Label^ labelChiffre2;
	private: System::Windows::Forms::TextBox^ textBoxChiffreAffaire1;
	private: System::Windows::Forms::RichTextBox^ richTextBoxValeurStock1;
	private: System::Windows::Forms::RichTextBox^ richTextBoxValeurComercial1;
	private: System::Windows::Forms::TextBox^ textBoxAchatClient1;
	private: System::Windows::Forms::Label^ labelAchatClient1;
	private: System::Windows::Forms::Label^ labelAchatClient3;
	private: System::Windows::Forms::Label^ labelAchatClient2;
	private: System::Windows::Forms::TextBox^ textBoxAchatClient3;
	private: System::Windows::Forms::TextBox^ textBoxAchatClient2;
	private: System::Windows::Forms::Label^ labelAchatClient4;
	private: System::Windows::Forms::TextBox^ textBoxAchatClient4;
	private: System::Windows::Forms::ComboBox^ comboBoxReaprovisionnerment1;
	private: System::Windows::Forms::Label^ labelReaprovisionement2;
	private: System::Windows::Forms::RichTextBox^ richTextBoxReaprovisionement1;
	private: System::Windows::Forms::RichTextBox^ richTextBoxPlusVendu1;
	private: System::Windows::Forms::RichTextBox^ richTextBoxMoinVendu1;
	private: System::Windows::Forms::Label^ labelLigne1;
	private: System::Windows::Forms::MonthCalendar^ monthCalendarCommande1;
	private: System::Windows::Forms::Label^ labelCommandeDate2;
	private: System::Windows::Forms::Label^ labelSimmule1;
	private: System::Windows::Forms::ComboBox^ comboBoxSimmule1;
	private: System::Windows::Forms::Label^ labelSimmule2;
	private: System::Windows::Forms::ComboBox^ comboBoxSimmule2;
	private: System::Windows::Forms::Label^ labelSimmule3;
	private: System::Windows::Forms::TextBox^ textBoxSimmule1;
	private: System::Windows::Forms::Label^ labelSimmule4;
	private: System::Windows::Forms::TextBox^ textBoxSimmule2;
	private: System::Windows::Forms::Label^ labelSimmule5;
	private: System::Windows::Forms::TextBox^ textBoxSimmule3;
	private: System::Windows::Forms::Label^ labelSimmule7;
	private: System::Windows::Forms::Label^ labelSimmule6;
	private: System::Windows::Forms::RichTextBox^ richTextBoxSimmule1;
	private: System::Windows::Forms::RichTextBox^ richTextBoxSimmule2;
	private: System::Windows::Forms::Label^ labelErreur;


private: System::Windows::Forms::Label^ labelIDPersonel;
private: System::Windows::Forms::TextBox^ textBoxIDPersonel;
private: System::Windows::Forms::Label^ labelIDClient;
private: System::Windows::Forms::TextBox^ textBoxIDClient;





private: System::Windows::Forms::TextBox^ textBoxIDCommande;
private: System::Windows::Forms::Label^ labelIDCommande;





	private: System::ComponentModel::IContainer^ components;
	protected:
	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>


#pragma region Windows Form Designer generated code
		/// <summary>
		/// Méthode requise pour la prise en charge du concepteur - ne modifiez pas
		/// le contenu de cette méthode avec l'éditeur de code.
		/// </summary>
		void InitializeComponent(void)
		{
			this->comboBoxGestionaire = (gcnew System::Windows::Forms::ComboBox());
			this->label1 = (gcnew System::Windows::Forms::Label());
			this->button1 = (gcnew System::Windows::Forms::Button());
			this->comboBoxTable = (gcnew System::Windows::Forms::ComboBox());
			this->comboBoxStat = (gcnew System::Windows::Forms::ComboBox());
			this->comboBoxActionTable = (gcnew System::Windows::Forms::ComboBox());
			this->dataGridView1 = (gcnew System::Windows::Forms::DataGridView());
			this->monthCalendarPersonel = (gcnew System::Windows::Forms::MonthCalendar());
			this->labelPersonel1 = (gcnew System::Windows::Forms::Label());
			this->labelPersonel2 = (gcnew System::Windows::Forms::Label());
			this->labelPersonel3 = (gcnew System::Windows::Forms::Label());
			this->labelPersonel4 = (gcnew System::Windows::Forms::Label());
			this->labelPersonel5 = (gcnew System::Windows::Forms::Label());
			this->labelPersonel6 = (gcnew System::Windows::Forms::Label());
			this->labelPersonel7 = (gcnew System::Windows::Forms::Label());
			this->labelPersonel8 = (gcnew System::Windows::Forms::Label());
			this->labelPersonel9 = (gcnew System::Windows::Forms::Label());
			this->textBoxPersonel1 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPersonel2 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPersonel3 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPersonel4 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxPersonel5 = (gcnew System::Windows::Forms::TextBox());
			this->comboBoxPersonel1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBoxPersonel2 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBoxPersonel3 = (gcnew System::Windows::Forms::ComboBox());
			this->labelClient1 = (gcnew System::Windows::Forms::Label());
			this->labelClient2 = (gcnew System::Windows::Forms::Label());
			this->labelClient3 = (gcnew System::Windows::Forms::Label());
			this->labelClient4 = (gcnew System::Windows::Forms::Label());
			this->labelClient6 = (gcnew System::Windows::Forms::Label());
			this->labelClient7 = (gcnew System::Windows::Forms::Label());
			this->labelClient5 = (gcnew System::Windows::Forms::Label());
			this->labelClient8 = (gcnew System::Windows::Forms::Label());
			this->labelClient9 = (gcnew System::Windows::Forms::Label());
			this->monthCalendarClient = (gcnew System::Windows::Forms::MonthCalendar());
			this->textBoxClient1 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxClient2 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxClient3 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxClient4 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxClient5 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxClient6 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxClient7 = (gcnew System::Windows::Forms::TextBox());
			this->comboBoxClient1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBoxStockMagasin = (gcnew System::Windows::Forms::ComboBox());
			this->textBoxStock1 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxStock2 = (gcnew System::Windows::Forms::TextBox());
			this->labelStock1 = (gcnew System::Windows::Forms::Label());
			this->labelStock2 = (gcnew System::Windows::Forms::Label());
			this->labelStockMagasin = (gcnew System::Windows::Forms::Label());
			this->labelCommande1 = (gcnew System::Windows::Forms::Label());
			this->labelCommande2 = (gcnew System::Windows::Forms::Label());
			this->textBoxCommande1 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxCommande2 = (gcnew System::Windows::Forms::TextBox());
			this->labelCommande3 = (gcnew System::Windows::Forms::Label());
			this->textBoxCommande3 = (gcnew System::Windows::Forms::TextBox());
			this->comboBoxCommande1 = (gcnew System::Windows::Forms::ComboBox());
			this->labelCommande4 = (gcnew System::Windows::Forms::Label());
			this->comboBoxCommande2 = (gcnew System::Windows::Forms::ComboBox());
			this->richTextBoxCommande1 = (gcnew System::Windows::Forms::RichTextBox());
			this->labelCommande5 = (gcnew System::Windows::Forms::Label());
			this->labelCommande6 = (gcnew System::Windows::Forms::Label());
			this->labelCommande7 = (gcnew System::Windows::Forms::Label());
			this->labelCommande8 = (gcnew System::Windows::Forms::Label());
			this->textBoxCommande4 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxCommande5 = (gcnew System::Windows::Forms::TextBox());
			this->richTextBoxCommande2 = (gcnew System::Windows::Forms::RichTextBox());
			this->labelCommande9 = (gcnew System::Windows::Forms::Label());
			this->labelcommandeSuprimer = (gcnew System::Windows::Forms::Label());
			this->textBoxCommandeSuprimer = (gcnew System::Windows::Forms::TextBox());
			this->comboBoxCalcul1 = (gcnew System::Windows::Forms::ComboBox());
			this->comboBoxIdentifie1 = (gcnew System::Windows::Forms::ComboBox());
			this->richTextBoxPanierMoyen1 = (gcnew System::Windows::Forms::RichTextBox());
			this->comboBoxChiffre1 = (gcnew System::Windows::Forms::ComboBox());
			this->labelCalculChiffre1 = (gcnew System::Windows::Forms::Label());
			this->labelChiffre2 = (gcnew System::Windows::Forms::Label());
			this->textBoxChiffreAffaire1 = (gcnew System::Windows::Forms::TextBox());
			this->richTextBoxValeurStock1 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBoxValeurComercial1 = (gcnew System::Windows::Forms::RichTextBox());
			this->textBoxAchatClient1 = (gcnew System::Windows::Forms::TextBox());
			this->labelAchatClient1 = (gcnew System::Windows::Forms::Label());
			this->labelAchatClient3 = (gcnew System::Windows::Forms::Label());
			this->labelAchatClient2 = (gcnew System::Windows::Forms::Label());
			this->textBoxAchatClient3 = (gcnew System::Windows::Forms::TextBox());
			this->textBoxAchatClient2 = (gcnew System::Windows::Forms::TextBox());
			this->labelAchatClient4 = (gcnew System::Windows::Forms::Label());
			this->textBoxAchatClient4 = (gcnew System::Windows::Forms::TextBox());
			this->comboBoxReaprovisionnerment1 = (gcnew System::Windows::Forms::ComboBox());
			this->labelReaprovisionement2 = (gcnew System::Windows::Forms::Label());
			this->richTextBoxReaprovisionement1 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBoxPlusVendu1 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBoxMoinVendu1 = (gcnew System::Windows::Forms::RichTextBox());
			this->labelLigne1 = (gcnew System::Windows::Forms::Label());
			this->monthCalendarCommande1 = (gcnew System::Windows::Forms::MonthCalendar());
			this->labelCommandeDate2 = (gcnew System::Windows::Forms::Label());
			this->labelSimmule1 = (gcnew System::Windows::Forms::Label());
			this->comboBoxSimmule1 = (gcnew System::Windows::Forms::ComboBox());
			this->labelSimmule2 = (gcnew System::Windows::Forms::Label());
			this->comboBoxSimmule2 = (gcnew System::Windows::Forms::ComboBox());
			this->labelSimmule3 = (gcnew System::Windows::Forms::Label());
			this->textBoxSimmule1 = (gcnew System::Windows::Forms::TextBox());
			this->labelSimmule4 = (gcnew System::Windows::Forms::Label());
			this->textBoxSimmule2 = (gcnew System::Windows::Forms::TextBox());
			this->labelSimmule5 = (gcnew System::Windows::Forms::Label());
			this->textBoxSimmule3 = (gcnew System::Windows::Forms::TextBox());
			this->labelSimmule7 = (gcnew System::Windows::Forms::Label());
			this->labelSimmule6 = (gcnew System::Windows::Forms::Label());
			this->richTextBoxSimmule1 = (gcnew System::Windows::Forms::RichTextBox());
			this->richTextBoxSimmule2 = (gcnew System::Windows::Forms::RichTextBox());
			this->labelErreur = (gcnew System::Windows::Forms::Label());
			this->labelIDPersonel = (gcnew System::Windows::Forms::Label());
			this->textBoxIDPersonel = (gcnew System::Windows::Forms::TextBox());
			this->labelIDClient = (gcnew System::Windows::Forms::Label());
			this->textBoxIDClient = (gcnew System::Windows::Forms::TextBox());
			this->textBoxIDCommande = (gcnew System::Windows::Forms::TextBox());
			this->labelIDCommande = (gcnew System::Windows::Forms::Label());
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->BeginInit();
			this->SuspendLayout();
			// 
			// comboBoxGestionaire
			// 
			this->comboBoxGestionaire->FormattingEnabled = true;
			this->comboBoxGestionaire->Items->AddRange(gcnew cli::array< System::Object^  >(2) { L"Table", L"Statistique" });
			this->comboBoxGestionaire->Location = System::Drawing::Point(12, 12);
			this->comboBoxGestionaire->Name = L"comboBoxGestionaire";
			this->comboBoxGestionaire->Size = System::Drawing::Size(129, 24);
			this->comboBoxGestionaire->TabIndex = 0;
			this->comboBoxGestionaire->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBoxGestionaire_SelectedIndexChanged);
			// 
			// label1
			// 
			this->label1->Anchor = System::Windows::Forms::AnchorStyles::Top;
			this->label1->AutoSize = true;
			this->label1->Location = System::Drawing::Point(548, 15);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(235, 17);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Veillez choisir le gestionaire a ouvrir";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->button1->Location = System::Drawing::Point(552, 622);
			this->button1->Name = L"button1";
			this->button1->Size = System::Drawing::Size(75, 23);
			this->button1->TabIndex = 1;
			this->button1->Text = L"Valider";
			this->button1->UseVisualStyleBackColor = true;
			this->button1->Click += gcnew System::EventHandler(this, &MyForm::button1_Click);
			// 
			// comboBoxTable
			// 
			this->comboBoxTable->FormattingEnabled = true;
			this->comboBoxTable->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"Personnel", L"Client", L"Commande", L"Stock" });
			this->comboBoxTable->Location = System::Drawing::Point(26, 42);
			this->comboBoxTable->Name = L"comboBoxTable";
			this->comboBoxTable->Size = System::Drawing::Size(129, 24);
			this->comboBoxTable->TabIndex = 6;
			this->comboBoxTable->Visible = false;
			this->comboBoxTable->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBoxTable_SelectedIndexChanged);
			// 
			// comboBoxStat
			// 
			this->comboBoxStat->FormattingEnabled = true;
			this->comboBoxStat->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Calcul", L"Identification", L"Simulation" });
			this->comboBoxStat->Location = System::Drawing::Point(26, 42);
			this->comboBoxStat->Name = L"comboBoxStat";
			this->comboBoxStat->Size = System::Drawing::Size(129, 24);
			this->comboBoxStat->TabIndex = 7;
			this->comboBoxStat->Visible = false;
			this->comboBoxStat->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBoxStat_SelectedIndexChanged);
			// 
			// comboBoxActionTable
			// 
			this->comboBoxActionTable->FormattingEnabled = true;
			this->comboBoxActionTable->Items->AddRange(gcnew cli::array< System::Object^  >(3) { L"Creer", L"Modifier", L"Supprimer" });
			this->comboBoxActionTable->Location = System::Drawing::Point(40, 72);
			this->comboBoxActionTable->Name = L"comboBoxActionTable";
			this->comboBoxActionTable->Size = System::Drawing::Size(129, 24);
			this->comboBoxActionTable->TabIndex = 8;
			this->comboBoxActionTable->Visible = false;
			this->comboBoxActionTable->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBoxActionTable_SelectedIndexChanged);
			// 
			// dataGridView1
			// 
			this->dataGridView1->ColumnHeadersHeightSizeMode = System::Windows::Forms::DataGridViewColumnHeadersHeightSizeMode::AutoSize;
			this->dataGridView1->Location = System::Drawing::Point(1063, 165);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(238, 351);
			this->dataGridView1->TabIndex = 9;
			this->dataGridView1->Visible = false;
			// 
			// monthCalendarPersonel
			// 
			this->monthCalendarPersonel->Location = System::Drawing::Point(718, 185);
			this->monthCalendarPersonel->Name = L"monthCalendarPersonel";
			this->monthCalendarPersonel->TabIndex = 11;
			this->monthCalendarPersonel->Visible = false;
			// 
			// labelPersonel1
			// 
			this->labelPersonel1->AutoSize = true;
			this->labelPersonel1->Location = System::Drawing::Point(247, 89);
			this->labelPersonel1->Name = L"labelPersonel1";
			this->labelPersonel1->Size = System::Drawing::Size(37, 17);
			this->labelPersonel1->TabIndex = 12;
			this->labelPersonel1->Text = L"Nom";
			this->labelPersonel1->Visible = false;
			// 
			// labelPersonel2
			// 
			this->labelPersonel2->AutoSize = true;
			this->labelPersonel2->Location = System::Drawing::Point(247, 162);
			this->labelPersonel2->Name = L"labelPersonel2";
			this->labelPersonel2->Size = System::Drawing::Size(57, 17);
			this->labelPersonel2->TabIndex = 13;
			this->labelPersonel2->Text = L"Prenom";
			this->labelPersonel2->Visible = false;
			// 
			// labelPersonel3
			// 
			this->labelPersonel3->AutoSize = true;
			this->labelPersonel3->Location = System::Drawing::Point(247, 241);
			this->labelPersonel3->Name = L"labelPersonel3";
			this->labelPersonel3->Size = System::Drawing::Size(76, 17);
			this->labelPersonel3->TabIndex = 14;
			this->labelPersonel3->Text = L"Telephone";
			this->labelPersonel3->Visible = false;
			// 
			// labelPersonel4
			// 
			this->labelPersonel4->AutoSize = true;
			this->labelPersonel4->Location = System::Drawing::Point(812, 107);
			this->labelPersonel4->Name = L"labelPersonel4";
			this->labelPersonel4->Size = System::Drawing::Size(119, 17);
			this->labelPersonel4->TabIndex = 15;
			this->labelPersonel4->Text = L"Date d\'embauche";
			this->labelPersonel4->Visible = false;
			// 
			// labelPersonel5
			// 
			this->labelPersonel5->AutoSize = true;
			this->labelPersonel5->Location = System::Drawing::Point(247, 333);
			this->labelPersonel5->Name = L"labelPersonel5";
			this->labelPersonel5->Size = System::Drawing::Size(87, 17);
			this->labelPersonel5->TabIndex = 16;
			this->labelPersonel5->Text = L"ID Superieur";
			this->labelPersonel5->Visible = false;
			// 
			// labelPersonel6
			// 
			this->labelPersonel6->AutoSize = true;
			this->labelPersonel6->Location = System::Drawing::Point(247, 427);
			this->labelPersonel6->Name = L"labelPersonel6";
			this->labelPersonel6->Size = System::Drawing::Size(90, 17);
			this->labelPersonel6->TabIndex = 17;
			this->labelPersonel6->Text = L"Departement";
			this->labelPersonel6->Visible = false;
			// 
			// labelPersonel7
			// 
			this->labelPersonel7->AutoSize = true;
			this->labelPersonel7->Location = System::Drawing::Point(247, 519);
			this->labelPersonel7->Name = L"labelPersonel7";
			this->labelPersonel7->Size = System::Drawing::Size(60, 17);
			this->labelPersonel7->TabIndex = 18;
			this->labelPersonel7->Text = L"Adresse";
			this->labelPersonel7->Visible = false;
			// 
			// labelPersonel8
			// 
			this->labelPersonel8->AutoSize = true;
			this->labelPersonel8->Location = System::Drawing::Point(812, 445);
			this->labelPersonel8->Name = L"labelPersonel8";
			this->labelPersonel8->Size = System::Drawing::Size(44, 17);
			this->labelPersonel8->TabIndex = 19;
			this->labelPersonel8->Text = L"Poste";
			this->labelPersonel8->Visible = false;
			// 
			// labelPersonel9
			// 
			this->labelPersonel9->AutoSize = true;
			this->labelPersonel9->Location = System::Drawing::Point(812, 537);
			this->labelPersonel9->Name = L"labelPersonel9";
			this->labelPersonel9->Size = System::Drawing::Size(61, 17);
			this->labelPersonel9->TabIndex = 20;
			this->labelPersonel9->Text = L"Magasin";
			this->labelPersonel9->Visible = false;
			// 
			// textBoxPersonel1
			// 
			this->textBoxPersonel1->Location = System::Drawing::Point(250, 125);
			this->textBoxPersonel1->Name = L"textBoxPersonel1";
			this->textBoxPersonel1->Size = System::Drawing::Size(100, 22);
			this->textBoxPersonel1->TabIndex = 21;
			this->textBoxPersonel1->Visible = false;
			// 
			// textBoxPersonel2
			// 
			this->textBoxPersonel2->Location = System::Drawing::Point(250, 197);
			this->textBoxPersonel2->Name = L"textBoxPersonel2";
			this->textBoxPersonel2->Size = System::Drawing::Size(100, 22);
			this->textBoxPersonel2->TabIndex = 22;
			this->textBoxPersonel2->Visible = false;
			// 
			// textBoxPersonel3
			// 
			this->textBoxPersonel3->Location = System::Drawing::Point(250, 283);
			this->textBoxPersonel3->Name = L"textBoxPersonel3";
			this->textBoxPersonel3->Size = System::Drawing::Size(100, 22);
			this->textBoxPersonel3->TabIndex = 23;
			this->textBoxPersonel3->Visible = false;
			// 
			// textBoxPersonel4
			// 
			this->textBoxPersonel4->Location = System::Drawing::Point(250, 383);
			this->textBoxPersonel4->Name = L"textBoxPersonel4";
			this->textBoxPersonel4->Size = System::Drawing::Size(100, 22);
			this->textBoxPersonel4->TabIndex = 24;
			this->textBoxPersonel4->Visible = false;
			// 
			// textBoxPersonel5
			// 
			this->textBoxPersonel5->Location = System::Drawing::Point(250, 573);
			this->textBoxPersonel5->Name = L"textBoxPersonel5";
			this->textBoxPersonel5->Size = System::Drawing::Size(143, 22);
			this->textBoxPersonel5->TabIndex = 25;
			this->textBoxPersonel5->Visible = false;
			// 
			// comboBoxPersonel1
			// 
			this->comboBoxPersonel1->FormattingEnabled = true;
			this->comboBoxPersonel1->Items->AddRange(gcnew cli::array< System::Object^  >(95) {
				L"Ain (01)", L"Aisne (02)", L"Allier (03)",
					L"Alpes-de-Haute-Provence (04)", L"Hautes-Alpes (05)", L"Alpes-Maritimes (06)", L"Ardèche (07)", L"Ardennes (08)", L"Ariège (09)",
					L"Aube (10)", L"Aude (11)", L"Aveyron (12)", L"Bouches-du-Rhône (13)", L"Calvados (14)", L"Cantal (15)", L"Charente (16)", L"Charente-Maritime (17)",
					L"Cher (18)", L"Corrèze (19)", L"Corse-du-Sud (2A)", L"Haute-Corse (2B)", L"Côte-d\'Or (21)", L"Côtes-d\'Armor (22)", L"Creuse (23)",
					L"Dordogne (24)", L"Doubs (25)", L"Drôme (26)", L"Eure (27)", L"Eure-et-Loir (28)", L"Finistère (29)", L"Gard (30)", L"Haute-Garonne (31)",
					L"Gers (32)", L"Gironde (33)", L"Hérault (34)", L"Ille-et-Vilaine (35)", L"Indre (36)", L"Indre-et-Loire (37)", L"Isère (38)",
					L"Jura (39)", L"Landes (40)", L"Loir-et-Cher (41)", L"Loire (42)", L"Haute-Loire (43)", L"Loire-Atlantique (44)", L"Loiret (45)",
					L"Lot (46)", L"Lot-et-Garonne (47)", L"Lozère (48)", L"Maine-et-Loire (49)", L"Manche (50)", L"Marne (51)", L"Haute-Marne (52)",
					L"Mayenne (53)", L"Meurthe-et-Moselle (54)", L"Meuse (55)", L"Morbihan (56)", L"Moselle (57)", L"Nièvre (58)", L"Nord (59)",
					L"Oise (60)", L"Orne (61)", L"Pas-de-Calais (62)", L"Puy-de-Dôme (63)", L"Pyrénées-Atlantiques (64)", L"Hautes-Pyrénées (65)",
					L"Pyrénées-Orientales (66)", L"Bas-Rhin (67)", L"Haut-Rhin (68)", L"Rhône (69)", L"Haute-Saône (70)", L"Saône-et-Loire (71)",
					L"Sarthe (72)", L"Savoie (73)", L"Haute-Savoie (74)", L"Paris (75)", L"Seine-et-Marne (77)", L"Yvelines (78)", L"Deux-Sèvres (79)",
					L"Somme (80)", L"Tarn (81)", L"Tarn-et-Garonne (82)", L"Var (83)", L"Vaucluse (84)", L"Vendée (85)", L"Vienne (86)", L"Haute-Vienne (87)",
					L"Vosges (88)", L"Yonne (89)", L"Territoire de Belfort (90)", L"Essonne (91)", L"Hauts-de-Seine (92)", L"Seine-Saint-Denis (93)",
					L"Val-de-Marne (94)", L"Val-d\'Oise (95)"
			});
			this->comboBoxPersonel1->Location = System::Drawing::Point(250, 474);
			this->comboBoxPersonel1->Name = L"comboBoxPersonel1";
			this->comboBoxPersonel1->Size = System::Drawing::Size(100, 24);
			this->comboBoxPersonel1->TabIndex = 26;
			this->comboBoxPersonel1->Visible = false;
			// 
			// comboBoxPersonel2
			// 
			this->comboBoxPersonel2->FormattingEnabled = true;
			this->comboBoxPersonel2->Items->AddRange(gcnew cli::array< System::Object^  >(13) {
				L"president directeur general", L"directeur commercial",
					L"directeur financier", L"directeur production", L"assistant marketing", L"directeur des ressources humaines", L"comptables",
					L"technicien", L"secretaire", L"informaticien", L"responsable colis", L"service apres vente", L"service clientele"
			});
			this->comboBoxPersonel2->Location = System::Drawing::Point(815, 492);
			this->comboBoxPersonel2->Name = L"comboBoxPersonel2";
			this->comboBoxPersonel2->Size = System::Drawing::Size(135, 24);
			this->comboBoxPersonel2->TabIndex = 27;
			this->comboBoxPersonel2->Visible = false;
			// 
			// comboBoxPersonel3
			// 
			this->comboBoxPersonel3->FormattingEnabled = true;
			this->comboBoxPersonel3->Items->AddRange(gcnew cli::array< System::Object^  >(14) {
				L"Cesinfo Paris", L"Cesinfo Marseille",
					L"Cesinfo Lyon", L"Cesinfo Toulouse", L"Cesinfo Nice", L"Cesinfo Nantes", L"Cesinfo Strasbourg", L"Cesinfo Montpellier", L"Cesinfo Bordeaux",
					L"Cesinfo Lille", L"Cesinfo Rennes", L"Cesinfo Le Havre", L"Cesinfo Reims", L"Cesinfo Rouen"
			});
			this->comboBoxPersonel3->Location = System::Drawing::Point(815, 588);
			this->comboBoxPersonel3->Name = L"comboBoxPersonel3";
			this->comboBoxPersonel3->Size = System::Drawing::Size(130, 24);
			this->comboBoxPersonel3->TabIndex = 28;
			this->comboBoxPersonel3->Visible = false;
			// 
			// labelClient1
			// 
			this->labelClient1->AutoSize = true;
			this->labelClient1->Location = System::Drawing::Point(247, 89);
			this->labelClient1->Name = L"labelClient1";
			this->labelClient1->Size = System::Drawing::Size(37, 17);
			this->labelClient1->TabIndex = 31;
			this->labelClient1->Text = L"Nom";
			this->labelClient1->Visible = false;
			// 
			// labelClient2
			// 
			this->labelClient2->AutoSize = true;
			this->labelClient2->Location = System::Drawing::Point(247, 162);
			this->labelClient2->Name = L"labelClient2";
			this->labelClient2->Size = System::Drawing::Size(57, 17);
			this->labelClient2->TabIndex = 32;
			this->labelClient2->Text = L"Prenom";
			this->labelClient2->Visible = false;
			// 
			// labelClient3
			// 
			this->labelClient3->AutoSize = true;
			this->labelClient3->Location = System::Drawing::Point(247, 241);
			this->labelClient3->Name = L"labelClient3";
			this->labelClient3->Size = System::Drawing::Size(108, 17);
			this->labelClient3->TabIndex = 33;
			this->labelClient3->Text = L"Numero compte";
			this->labelClient3->Visible = false;
			// 
			// labelClient4
			// 
			this->labelClient4->AutoSize = true;
			this->labelClient4->Location = System::Drawing::Point(730, 107);
			this->labelClient4->Name = L"labelClient4";
			this->labelClient4->Size = System::Drawing::Size(126, 17);
			this->labelClient4->TabIndex = 34;
			this->labelClient4->Text = L"Date de naissance";
			this->labelClient4->Visible = false;
			// 
			// labelClient6
			// 
			this->labelClient6->AutoSize = true;
			this->labelClient6->Location = System::Drawing::Point(812, 537);
			this->labelClient6->Name = L"labelClient6";
			this->labelClient6->Size = System::Drawing::Size(76, 17);
			this->labelClient6->TabIndex = 35;
			this->labelClient6->Text = L"Telephone";
			this->labelClient6->Visible = false;
			// 
			// labelClient7
			// 
			this->labelClient7->AutoSize = true;
			this->labelClient7->Location = System::Drawing::Point(812, 445);
			this->labelClient7->Name = L"labelClient7";
			this->labelClient7->Size = System::Drawing::Size(105, 17);
			this->labelClient7->TabIndex = 36;
			this->labelClient7->Text = L"Point de fidelite";
			this->labelClient7->Visible = false;
			// 
			// labelClient5
			// 
			this->labelClient5->AutoSize = true;
			this->labelClient5->Location = System::Drawing::Point(247, 333);
			this->labelClient5->Name = L"labelClient5";
			this->labelClient5->Size = System::Drawing::Size(33, 17);
			this->labelClient5->TabIndex = 37;
			this->labelClient5->Text = L"Mail";
			this->labelClient5->Visible = false;
			// 
			// labelClient8
			// 
			this->labelClient8->AutoSize = true;
			this->labelClient8->Location = System::Drawing::Point(247, 519);
			this->labelClient8->Name = L"labelClient8";
			this->labelClient8->Size = System::Drawing::Size(60, 17);
			this->labelClient8->TabIndex = 38;
			this->labelClient8->Text = L"Adresse";
			this->labelClient8->Visible = false;
			// 
			// labelClient9
			// 
			this->labelClient9->AutoSize = true;
			this->labelClient9->Location = System::Drawing::Point(247, 427);
			this->labelClient9->Name = L"labelClient9";
			this->labelClient9->Size = System::Drawing::Size(90, 17);
			this->labelClient9->TabIndex = 39;
			this->labelClient9->Text = L"Departement";
			this->labelClient9->Visible = false;
			// 
			// monthCalendarClient
			// 
			this->monthCalendarClient->Location = System::Drawing::Point(669, 185);
			this->monthCalendarClient->Name = L"monthCalendarClient";
			this->monthCalendarClient->TabIndex = 40;
			this->monthCalendarClient->Visible = false;
			// 
			// textBoxClient1
			// 
			this->textBoxClient1->Location = System::Drawing::Point(250, 125);
			this->textBoxClient1->Name = L"textBoxClient1";
			this->textBoxClient1->Size = System::Drawing::Size(100, 22);
			this->textBoxClient1->TabIndex = 41;
			this->textBoxClient1->Visible = false;
			// 
			// textBoxClient2
			// 
			this->textBoxClient2->Location = System::Drawing::Point(250, 197);
			this->textBoxClient2->Name = L"textBoxClient2";
			this->textBoxClient2->Size = System::Drawing::Size(100, 22);
			this->textBoxClient2->TabIndex = 42;
			this->textBoxClient2->Visible = false;
			// 
			// textBoxClient3
			// 
			this->textBoxClient3->Location = System::Drawing::Point(250, 283);
			this->textBoxClient3->Name = L"textBoxClient3";
			this->textBoxClient3->Size = System::Drawing::Size(100, 22);
			this->textBoxClient3->TabIndex = 43;
			this->textBoxClient3->Visible = false;
			// 
			// textBoxClient4
			// 
			this->textBoxClient4->Location = System::Drawing::Point(250, 383);
			this->textBoxClient4->Name = L"textBoxClient4";
			this->textBoxClient4->Size = System::Drawing::Size(100, 22);
			this->textBoxClient4->TabIndex = 44;
			this->textBoxClient4->Visible = false;
			// 
			// textBoxClient5
			// 
			this->textBoxClient5->Location = System::Drawing::Point(250, 575);
			this->textBoxClient5->Name = L"textBoxClient5";
			this->textBoxClient5->Size = System::Drawing::Size(100, 22);
			this->textBoxClient5->TabIndex = 45;
			this->textBoxClient5->Visible = false;
			// 
			// textBoxClient6
			// 
			this->textBoxClient6->Location = System::Drawing::Point(815, 590);
			this->textBoxClient6->Name = L"textBoxClient6";
			this->textBoxClient6->Size = System::Drawing::Size(100, 22);
			this->textBoxClient6->TabIndex = 46;
			this->textBoxClient6->Visible = false;
			// 
			// textBoxClient7
			// 
			this->textBoxClient7->Location = System::Drawing::Point(815, 492);
			this->textBoxClient7->Name = L"textBoxClient7";
			this->textBoxClient7->Size = System::Drawing::Size(100, 22);
			this->textBoxClient7->TabIndex = 47;
			this->textBoxClient7->Visible = false;
			// 
			// comboBoxClient1
			// 
			this->comboBoxClient1->FormattingEnabled = true;
			this->comboBoxClient1->Items->AddRange(gcnew cli::array< System::Object^  >(95) {
				L"Ain (01)", L"Aisne (02)", L"Allier (03)",
					L"Alpes-de-Haute-Provence (04)", L"Hautes-Alpes (05)", L"Alpes-Maritimes (06)", L"Ardèche (07)", L"Ardennes (08)", L"Ariège (09)",
					L"Aube (10)", L"Aude (11)", L"Aveyron (12)", L"Bouches-du-Rhône (13)", L"Calvados (14)", L"Cantal (15)", L"Charente (16)", L"Charente-Maritime (17)",
					L"Cher (18)", L"Corrèze (19)", L"Corse-du-Sud (2A)", L"Haute-Corse (2B)", L"Côte-d\'Or (21)", L"Côtes-d\'Armor (22)", L"Creuse (23)",
					L"Dordogne (24)", L"Doubs (25)", L"Drôme (26)", L"Eure (27)", L"Eure-et-Loir (28)", L"Finistère (29)", L"Gard (30)", L"Haute-Garonne (31)",
					L"Gers (32)", L"Gironde (33)", L"Hérault (34)", L"Ille-et-Vilaine (35)", L"Indre (36)", L"Indre-et-Loire (37)", L"Isère (38)",
					L"Jura (39)", L"Landes (40)", L"Loir-et-Cher (41)", L"Loire (42)", L"Haute-Loire (43)", L"Loire-Atlantique (44)", L"Loiret (45)",
					L"Lot (46)", L"Lot-et-Garonne (47)", L"Lozère (48)", L"Maine-et-Loire (49)", L"Manche (50)", L"Marne (51)", L"Haute-Marne (52)",
					L"Mayenne (53)", L"Meurthe-et-Moselle (54)", L"Meuse (55)", L"Morbihan (56)", L"Moselle (57)", L"Nièvre (58)", L"Nord (59)",
					L"Oise (60)", L"Orne (61)", L"Pas-de-Calais (62)", L"Puy-de-Dôme (63)", L"Pyrénées-Atlantiques (64)", L"Hautes-Pyrénées (65)",
					L"Pyrénées-Orientales (66)", L"Bas-Rhin (67)", L"Haut-Rhin (68)", L"Rhône (69)", L"Haute-Saône (70)", L"Saône-et-Loire (71)",
					L"Sarthe (72)", L"Savoie (73)", L"Haute-Savoie (74)", L"Paris (75)", L"Seine-et-Marne (77)", L"Yvelines (78)", L"Deux-Sèvres (79)",
					L"Somme (80)", L"Tarn (81)", L"Tarn-et-Garonne (82)", L"Var (83)", L"Vaucluse (84)", L"Vendée (85)", L"Vienne (86)", L"Haute-Vienne (87)",
					L"Vosges (88)", L"Yonne (89)", L"Territoire de Belfort (90)", L"Essonne (91)", L"Hauts-de-Seine (92)", L"Seine-Saint-Denis (93)",
					L"Val-de-Marne (94)", L"Val-d\'Oise (95)"
			});
			this->comboBoxClient1->Location = System::Drawing::Point(250, 474);
			this->comboBoxClient1->Name = L"comboBoxClient1";
			this->comboBoxClient1->Size = System::Drawing::Size(100, 24);
			this->comboBoxClient1->TabIndex = 48;
			this->comboBoxClient1->Visible = false;
			// 
			// comboBoxStockMagasin
			// 
			this->comboBoxStockMagasin->FormattingEnabled = true;
			this->comboBoxStockMagasin->Items->AddRange(gcnew cli::array< System::Object^  >(14) {
				L"Cesinfo Paris", L"Cesinfo Marseille",
					L"Cesinfo Lyon", L"Cesinfo Toulouse", L"Cesinfo Nice", L"Cesinfo Nantes", L"Cesinfo Strasbourg", L"Cesinfo Montpellier", L"Cesinfo Bordeaux",
					L"Cesinfo Lille", L"Cesinfo Rennes", L"Cesinfo Le Havre", L"Cesinfo Reims", L"Cesinfo Rouen"
			});
			this->comboBoxStockMagasin->Location = System::Drawing::Point(496, 98);
			this->comboBoxStockMagasin->Name = L"comboBoxStockMagasin";
			this->comboBoxStockMagasin->Size = System::Drawing::Size(131, 24);
			this->comboBoxStockMagasin->TabIndex = 51;
			this->comboBoxStockMagasin->Visible = false;
			// 
			// textBoxStock1
			// 
			this->textBoxStock1->Location = System::Drawing::Point(506, 209);
			this->textBoxStock1->Name = L"textBoxStock1";
			this->textBoxStock1->Size = System::Drawing::Size(100, 22);
			this->textBoxStock1->TabIndex = 54;
			this->textBoxStock1->Visible = false;
			// 
			// textBoxStock2
			// 
			this->textBoxStock2->Location = System::Drawing::Point(506, 341);
			this->textBoxStock2->Name = L"textBoxStock2";
			this->textBoxStock2->Size = System::Drawing::Size(100, 22);
			this->textBoxStock2->TabIndex = 55;
			this->textBoxStock2->Visible = false;
			// 
			// labelStock1
			// 
			this->labelStock1->AutoSize = true;
			this->labelStock1->Location = System::Drawing::Point(529, 170);
			this->labelStock1->Name = L"labelStock1";
			this->labelStock1->Size = System::Drawing::Size(53, 17);
			this->labelStock1->TabIndex = 56;
			this->labelStock1->Text = L"Produit";
			this->labelStock1->Visible = false;
			// 
			// labelStock2
			// 
			this->labelStock2->AutoSize = true;
			this->labelStock2->Location = System::Drawing::Point(528, 283);
			this->labelStock2->Name = L"labelStock2";
			this->labelStock2->Size = System::Drawing::Size(62, 17);
			this->labelStock2->TabIndex = 57;
			this->labelStock2->Text = L"Quantité";
			this->labelStock2->Visible = false;
			// 
			// labelStockMagasin
			// 
			this->labelStockMagasin->AutoSize = true;
			this->labelStockMagasin->Location = System::Drawing::Point(528, 62);
			this->labelStockMagasin->Name = L"labelStockMagasin";
			this->labelStockMagasin->Size = System::Drawing::Size(61, 17);
			this->labelStockMagasin->TabIndex = 60;
			this->labelStockMagasin->Text = L"Magasin";
			this->labelStockMagasin->Visible = false;
			// 
			// labelCommande1
			// 
			this->labelCommande1->AutoSize = true;
			this->labelCommande1->Location = System::Drawing::Point(247, 89);
			this->labelCommande1->Name = L"labelCommande1";
			this->labelCommande1->Size = System::Drawing::Size(37, 17);
			this->labelCommande1->TabIndex = 61;
			this->labelCommande1->Text = L"Nom";
			this->labelCommande1->Visible = false;
			// 
			// labelCommande2
			// 
			this->labelCommande2->AutoSize = true;
			this->labelCommande2->Location = System::Drawing::Point(247, 162);
			this->labelCommande2->Name = L"labelCommande2";
			this->labelCommande2->Size = System::Drawing::Size(57, 17);
			this->labelCommande2->TabIndex = 62;
			this->labelCommande2->Text = L"Prenom";
			this->labelCommande2->Visible = false;
			// 
			// textBoxCommande1
			// 
			this->textBoxCommande1->Location = System::Drawing::Point(250, 127);
			this->textBoxCommande1->Name = L"textBoxCommande1";
			this->textBoxCommande1->Size = System::Drawing::Size(100, 22);
			this->textBoxCommande1->TabIndex = 63;
			this->textBoxCommande1->Visible = false;
			// 
			// textBoxCommande2
			// 
			this->textBoxCommande2->Location = System::Drawing::Point(250, 197);
			this->textBoxCommande2->Name = L"textBoxCommande2";
			this->textBoxCommande2->Size = System::Drawing::Size(100, 22);
			this->textBoxCommande2->TabIndex = 64;
			this->textBoxCommande2->Visible = false;
			// 
			// labelCommande3
			// 
			this->labelCommande3->AutoSize = true;
			this->labelCommande3->Location = System::Drawing::Point(247, 241);
			this->labelCommande3->Name = L"labelCommande3";
			this->labelCommande3->Size = System::Drawing::Size(108, 17);
			this->labelCommande3->TabIndex = 65;
			this->labelCommande3->Text = L"Numero compte";
			this->labelCommande3->Visible = false;
			// 
			// textBoxCommande3
			// 
			this->textBoxCommande3->Location = System::Drawing::Point(250, 283);
			this->textBoxCommande3->Name = L"textBoxCommande3";
			this->textBoxCommande3->Size = System::Drawing::Size(100, 22);
			this->textBoxCommande3->TabIndex = 66;
			this->textBoxCommande3->Visible = false;
			// 
			// comboBoxCommande1
			// 
			this->comboBoxCommande1->FormattingEnabled = true;
			this->comboBoxCommande1->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"VISA", L"PayPal", L"carte bancaire",
					L"paysafecard", L"BTC"
			});
			this->comboBoxCommande1->Location = System::Drawing::Point(250, 383);
			this->comboBoxCommande1->Name = L"comboBoxCommande1";
			this->comboBoxCommande1->Size = System::Drawing::Size(100, 24);
			this->comboBoxCommande1->TabIndex = 67;
			this->comboBoxCommande1->Visible = false;
			// 
			// labelCommande4
			// 
			this->labelCommande4->AutoSize = true;
			this->labelCommande4->Location = System::Drawing::Point(247, 333);
			this->labelCommande4->Name = L"labelCommande4";
			this->labelCommande4->Size = System::Drawing::Size(124, 17);
			this->labelCommande4->TabIndex = 68;
			this->labelCommande4->Text = L"Moyen de paiment";
			this->labelCommande4->Visible = false;
			// 
			// comboBoxCommande2
			// 
			this->comboBoxCommande2->FormattingEnabled = true;
			this->comboBoxCommande2->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"0%", L"5%", L"10%", L"20%" });
			this->comboBoxCommande2->Location = System::Drawing::Point(250, 571);
			this->comboBoxCommande2->Name = L"comboBoxCommande2";
			this->comboBoxCommande2->Size = System::Drawing::Size(100, 24);
			this->comboBoxCommande2->TabIndex = 71;
			this->comboBoxCommande2->Visible = false;
			// 
			// richTextBoxCommande1
			// 
			this->richTextBoxCommande1->Location = System::Drawing::Point(781, 185);
			this->richTextBoxCommande1->Name = L"richTextBoxCommande1";
			this->richTextBoxCommande1->Size = System::Drawing::Size(262, 207);
			this->richTextBoxCommande1->TabIndex = 72;
			this->richTextBoxCommande1->Text = L"";
			this->richTextBoxCommande1->Visible = false;
			// 
			// labelCommande5
			// 
			this->labelCommande5->AutoSize = true;
			this->labelCommande5->Location = System::Drawing::Point(823, 107);
			this->labelCommande5->Name = L"labelCommande5";
			this->labelCommande5->Size = System::Drawing::Size(104, 17);
			this->labelCommande5->TabIndex = 73;
			this->labelCommande5->Text = L"Liste des achat";
			this->labelCommande5->Visible = false;
			// 
			// labelCommande6
			// 
			this->labelCommande6->AutoSize = true;
			this->labelCommande6->Location = System::Drawing::Point(812, 445);
			this->labelCommande6->Name = L"labelCommande6";
			this->labelCommande6->Size = System::Drawing::Size(48, 17);
			this->labelCommande6->TabIndex = 74;
			this->labelCommande6->Text = L"Marge";
			this->labelCommande6->Visible = false;
			// 
			// labelCommande7
			// 
			this->labelCommande7->AutoSize = true;
			this->labelCommande7->Location = System::Drawing::Point(247, 427);
			this->labelCommande7->Name = L"labelCommande7";
			this->labelCommande7->Size = System::Drawing::Size(55, 17);
			this->labelCommande7->TabIndex = 75;
			this->labelCommande7->Text = L"Remise";
			this->labelCommande7->Visible = false;
			// 
			// labelCommande8
			// 
			this->labelCommande8->AutoSize = true;
			this->labelCommande8->Location = System::Drawing::Point(249, 519);
			this->labelCommande8->Name = L"labelCommande8";
			this->labelCommande8->Size = System::Drawing::Size(35, 17);
			this->labelCommande8->TabIndex = 76;
			this->labelCommande8->Text = L"TVA";
			this->labelCommande8->Visible = false;
			// 
			// textBoxCommande4
			// 
			this->textBoxCommande4->Location = System::Drawing::Point(815, 494);
			this->textBoxCommande4->Name = L"textBoxCommande4";
			this->textBoxCommande4->Size = System::Drawing::Size(100, 22);
			this->textBoxCommande4->TabIndex = 77;
			this->textBoxCommande4->Visible = false;
			// 
			// textBoxCommande5
			// 
			this->textBoxCommande5->Location = System::Drawing::Point(250, 476);
			this->textBoxCommande5->Name = L"textBoxCommande5";
			this->textBoxCommande5->Size = System::Drawing::Size(100, 22);
			this->textBoxCommande5->TabIndex = 78;
			this->textBoxCommande5->Visible = false;
			// 
			// richTextBoxCommande2
			// 
			this->richTextBoxCommande2->Location = System::Drawing::Point(781, 588);
			this->richTextBoxCommande2->Name = L"richTextBoxCommande2";
			this->richTextBoxCommande2->Size = System::Drawing::Size(262, 38);
			this->richTextBoxCommande2->TabIndex = 79;
			this->richTextBoxCommande2->Text = L"";
			this->richTextBoxCommande2->Visible = false;
			// 
			// labelCommande9
			// 
			this->labelCommande9->AutoSize = true;
			this->labelCommande9->Location = System::Drawing::Point(810, 537);
			this->labelCommande9->Name = L"labelCommande9";
			this->labelCommande9->Size = System::Drawing::Size(184, 17);
			this->labelCommande9->TabIndex = 80;
			this->labelCommande9->Text = L"Adresse facturation/livration";
			this->labelCommande9->Visible = false;
			// 
			// labelcommandeSuprimer
			// 
			this->labelcommandeSuprimer->AutoSize = true;
			this->labelcommandeSuprimer->Location = System::Drawing::Point(247, 333);
			this->labelcommandeSuprimer->Name = L"labelcommandeSuprimer";
			this->labelcommandeSuprimer->Size = System::Drawing::Size(98, 17);
			this->labelcommandeSuprimer->TabIndex = 81;
			this->labelcommandeSuprimer->Text = L"ID_commande";
			this->labelcommandeSuprimer->Visible = false;
			// 
			// textBoxCommandeSuprimer
			// 
			this->textBoxCommandeSuprimer->Location = System::Drawing::Point(250, 383);
			this->textBoxCommandeSuprimer->Name = L"textBoxCommandeSuprimer";
			this->textBoxCommandeSuprimer->Size = System::Drawing::Size(100, 22);
			this->textBoxCommandeSuprimer->TabIndex = 82;
			this->textBoxCommandeSuprimer->Visible = false;
			// 
			// comboBoxCalcul1
			// 
			this->comboBoxCalcul1->FormattingEnabled = true;
			this->comboBoxCalcul1->Items->AddRange(gcnew cli::array< System::Object^  >(5) {
				L"panier moyen", L"Chiffre d\'affaire", L"achat client",
					L"valeur commercial stock", L"valeur achat stock"
			});
			this->comboBoxCalcul1->Location = System::Drawing::Point(40, 72);
			this->comboBoxCalcul1->Name = L"comboBoxCalcul1";
			this->comboBoxCalcul1->Size = System::Drawing::Size(129, 24);
			this->comboBoxCalcul1->TabIndex = 83;
			this->comboBoxCalcul1->Visible = false;
			this->comboBoxCalcul1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBoxCalcul1_SelectedIndexChanged);
			// 
			// comboBoxIdentifie1
			// 
			this->comboBoxIdentifie1->FormattingEnabled = true;
			this->comboBoxIdentifie1->Items->AddRange(gcnew cli::array< System::Object^  >(3) {
				L"produit a réaprovisioner", L"produit plus vendu",
					L"produit moin vendu"
			});
			this->comboBoxIdentifie1->Location = System::Drawing::Point(40, 72);
			this->comboBoxIdentifie1->Name = L"comboBoxIdentifie1";
			this->comboBoxIdentifie1->Size = System::Drawing::Size(129, 24);
			this->comboBoxIdentifie1->TabIndex = 84;
			this->comboBoxIdentifie1->Visible = false;
			this->comboBoxIdentifie1->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBoxIdentifie1_SelectedIndexChanged);
			// 
			// richTextBoxPanierMoyen1
			// 
			this->richTextBoxPanierMoyen1->Location = System::Drawing::Point(444, 209);
			this->richTextBoxPanierMoyen1->Name = L"richTextBoxPanierMoyen1";
			this->richTextBoxPanierMoyen1->Size = System::Drawing::Size(262, 207);
			this->richTextBoxPanierMoyen1->TabIndex = 85;
			this->richTextBoxPanierMoyen1->Text = L"";
			this->richTextBoxPanierMoyen1->Visible = false;
			// 
			// comboBoxChiffre1
			// 
			this->comboBoxChiffre1->FormattingEnabled = true;
			this->comboBoxChiffre1->Items->AddRange(gcnew cli::array< System::Object^  >(12) {
				L"Janvier", L"Fevrier", L"Mars", L"Avril",
					L"Mai", L"Juin", L"Juillet", L"Aout", L"Septembre", L"Octobre", L"Novembre", L"Decembre"
			});
			this->comboBoxChiffre1->Location = System::Drawing::Point(496, 98);
			this->comboBoxChiffre1->Name = L"comboBoxChiffre1";
			this->comboBoxChiffre1->Size = System::Drawing::Size(131, 24);
			this->comboBoxChiffre1->TabIndex = 86;
			this->comboBoxChiffre1->Visible = false;
			// 
			// labelCalculChiffre1
			// 
			this->labelCalculChiffre1->AutoSize = true;
			this->labelCalculChiffre1->Location = System::Drawing::Point(532, 64);
			this->labelCalculChiffre1->Name = L"labelCalculChiffre1";
			this->labelCalculChiffre1->Size = System::Drawing::Size(37, 17);
			this->labelCalculChiffre1->TabIndex = 87;
			this->labelCalculChiffre1->Text = L"Mois";
			this->labelCalculChiffre1->Visible = false;
			// 
			// labelChiffre2
			// 
			this->labelChiffre2->AutoSize = true;
			this->labelChiffre2->Location = System::Drawing::Point(515, 300);
			this->labelChiffre2->Name = L"labelChiffre2";
			this->labelChiffre2->Size = System::Drawing::Size(91, 17);
			this->labelChiffre2->TabIndex = 88;
			this->labelChiffre2->Text = L"chiffre affaire";
			this->labelChiffre2->Visible = false;
			// 
			// textBoxChiffreAffaire1
			// 
			this->textBoxChiffreAffaire1->Location = System::Drawing::Point(506, 320);
			this->textBoxChiffreAffaire1->Name = L"textBoxChiffreAffaire1";
			this->textBoxChiffreAffaire1->Size = System::Drawing::Size(100, 22);
			this->textBoxChiffreAffaire1->TabIndex = 89;
			this->textBoxChiffreAffaire1->Visible = false;
			// 
			// richTextBoxValeurStock1
			// 
			this->richTextBoxValeurStock1->Location = System::Drawing::Point(444, 211);
			this->richTextBoxValeurStock1->Name = L"richTextBoxValeurStock1";
			this->richTextBoxValeurStock1->Size = System::Drawing::Size(262, 207);
			this->richTextBoxValeurStock1->TabIndex = 90;
			this->richTextBoxValeurStock1->Text = L"";
			this->richTextBoxValeurStock1->Visible = false;
			// 
			// richTextBoxValeurComercial1
			// 
			this->richTextBoxValeurComercial1->Location = System::Drawing::Point(444, 209);
			this->richTextBoxValeurComercial1->Name = L"richTextBoxValeurComercial1";
			this->richTextBoxValeurComercial1->Size = System::Drawing::Size(262, 207);
			this->richTextBoxValeurComercial1->TabIndex = 91;
			this->richTextBoxValeurComercial1->Text = L"";
			this->richTextBoxValeurComercial1->Visible = false;
			// 
			// textBoxAchatClient1
			// 
			this->textBoxAchatClient1->Location = System::Drawing::Point(838, 210);
			this->textBoxAchatClient1->Name = L"textBoxAchatClient1";
			this->textBoxAchatClient1->Size = System::Drawing::Size(100, 22);
			this->textBoxAchatClient1->TabIndex = 92;
			this->textBoxAchatClient1->Visible = false;
			// 
			// labelAchatClient1
			// 
			this->labelAchatClient1->AutoSize = true;
			this->labelAchatClient1->Location = System::Drawing::Point(845, 143);
			this->labelAchatClient1->Name = L"labelAchatClient1";
			this->labelAchatClient1->Size = System::Drawing::Size(93, 17);
			this->labelAchatClient1->TabIndex = 93;
			this->labelAchatClient1->Text = L"numero client";
			this->labelAchatClient1->Visible = false;
			// 
			// labelAchatClient3
			// 
			this->labelAchatClient3->AutoSize = true;
			this->labelAchatClient3->Location = System::Drawing::Point(257, 125);
			this->labelAchatClient3->Name = L"labelAchatClient3";
			this->labelAchatClient3->Size = System::Drawing::Size(37, 17);
			this->labelAchatClient3->TabIndex = 94;
			this->labelAchatClient3->Text = L"Nom";
			this->labelAchatClient3->Visible = false;
			// 
			// labelAchatClient2
			// 
			this->labelAchatClient2->AutoSize = true;
			this->labelAchatClient2->Location = System::Drawing::Point(515, 98);
			this->labelAchatClient2->Name = L"labelAchatClient2";
			this->labelAchatClient2->Size = System::Drawing::Size(57, 17);
			this->labelAchatClient2->TabIndex = 95;
			this->labelAchatClient2->Text = L"Prenom";
			this->labelAchatClient2->Visible = false;
			// 
			// textBoxAchatClient3
			// 
			this->textBoxAchatClient3->Location = System::Drawing::Point(250, 192);
			this->textBoxAchatClient3->Name = L"textBoxAchatClient3";
			this->textBoxAchatClient3->Size = System::Drawing::Size(100, 22);
			this->textBoxAchatClient3->TabIndex = 96;
			this->textBoxAchatClient3->Visible = false;
			// 
			// textBoxAchatClient2
			// 
			this->textBoxAchatClient2->Location = System::Drawing::Point(508, 165);
			this->textBoxAchatClient2->Name = L"textBoxAchatClient2";
			this->textBoxAchatClient2->Size = System::Drawing::Size(100, 22);
			this->textBoxAchatClient2->TabIndex = 97;
			this->textBoxAchatClient2->Visible = false;
			// 
			// labelAchatClient4
			// 
			this->labelAchatClient4->AutoSize = true;
			this->labelAchatClient4->Location = System::Drawing::Point(488, 283);
			this->labelAchatClient4->Name = L"labelAchatClient4";
			this->labelAchatClient4->Size = System::Drawing::Size(139, 17);
			this->labelAchatClient4->TabIndex = 98;
			this->labelAchatClient4->Text = L"Achat Total du Client";
			this->labelAchatClient4->Visible = false;
			// 
			// textBoxAchatClient4
			// 
			this->textBoxAchatClient4->Location = System::Drawing::Point(508, 341);
			this->textBoxAchatClient4->Name = L"textBoxAchatClient4";
			this->textBoxAchatClient4->Size = System::Drawing::Size(100, 22);
			this->textBoxAchatClient4->TabIndex = 99;
			this->textBoxAchatClient4->Visible = false;
			// 
			// comboBoxReaprovisionnerment1
			// 
			this->comboBoxReaprovisionnerment1->FormattingEnabled = true;
			this->comboBoxReaprovisionnerment1->Items->AddRange(gcnew cli::array< System::Object^  >(14) {
				L"Cesinfo Paris", L"Cesinfo Marseille",
					L"Cesinfo Lyon", L"Cesinfo Toulouse", L"Cesinfo Nice", L"Cesinfo Nantes", L"Cesinfo Strasbourg", L"Cesinfo Montpellier", L"Cesinfo Bordeaux",
					L"Cesinfo Lille", L"Cesinfo Rennes", L"Cesinfo Le Havre", L"Cesinfo Reims", L"Cesinfo Rouen"
			});
			this->comboBoxReaprovisionnerment1->Location = System::Drawing::Point(496, 163);
			this->comboBoxReaprovisionnerment1->Name = L"comboBoxReaprovisionnerment1";
			this->comboBoxReaprovisionnerment1->Size = System::Drawing::Size(131, 24);
			this->comboBoxReaprovisionnerment1->TabIndex = 101;
			this->comboBoxReaprovisionnerment1->Visible = false;
			// 
			// labelReaprovisionement2
			// 
			this->labelReaprovisionement2->AutoSize = true;
			this->labelReaprovisionement2->Location = System::Drawing::Point(532, 138);
			this->labelReaprovisionement2->Name = L"labelReaprovisionement2";
			this->labelReaprovisionement2->Size = System::Drawing::Size(61, 17);
			this->labelReaprovisionement2->TabIndex = 102;
			this->labelReaprovisionement2->Text = L"Magasin";
			this->labelReaprovisionement2->Visible = false;
			// 
			// richTextBoxReaprovisionement1
			// 
			this->richTextBoxReaprovisionement1->Location = System::Drawing::Point(444, 209);
			this->richTextBoxReaprovisionement1->Name = L"richTextBoxReaprovisionement1";
			this->richTextBoxReaprovisionement1->Size = System::Drawing::Size(262, 207);
			this->richTextBoxReaprovisionement1->TabIndex = 103;
			this->richTextBoxReaprovisionement1->Text = L"";
			this->richTextBoxReaprovisionement1->Visible = false;
			// 
			// richTextBoxPlusVendu1
			// 
			this->richTextBoxPlusVendu1->Location = System::Drawing::Point(444, 209);
			this->richTextBoxPlusVendu1->Name = L"richTextBoxPlusVendu1";
			this->richTextBoxPlusVendu1->Size = System::Drawing::Size(262, 207);
			this->richTextBoxPlusVendu1->TabIndex = 104;
			this->richTextBoxPlusVendu1->Text = L"";
			this->richTextBoxPlusVendu1->Visible = false;
			// 
			// richTextBoxMoinVendu1
			// 
			this->richTextBoxMoinVendu1->Location = System::Drawing::Point(444, 210);
			this->richTextBoxMoinVendu1->Name = L"richTextBoxMoinVendu1";
			this->richTextBoxMoinVendu1->Size = System::Drawing::Size(262, 207);
			this->richTextBoxMoinVendu1->TabIndex = 105;
			this->richTextBoxMoinVendu1->Text = L"";
			this->richTextBoxMoinVendu1->Visible = false;
			// 
			// labelLigne1
			// 
			this->labelLigne1->AutoSize = true;
			this->labelLigne1->Location = System::Drawing::Point(196, -20);
			this->labelLigne1->Name = L"labelLigne1";
			this->labelLigne1->Size = System::Drawing::Size(11, 748);
			this->labelLigne1->TabIndex = 106;
			this->labelLigne1->Text = L"|\r\n|\r\n|\r\n|\r\n|\r\n|\r\n|\r\n|\r\n|\r\n|\r\n|\r\n|\r\n|\r\n|\r\n|\r\n|\r\n|\r\n|\r\n|\r\n|\r\n|\r\n|\r\n|\r\n|\r\n|\r\n|\r\n|\r\n"
				L"|\r\n|\r\n|\r\n|\r\n|\r\n|\r\n|\r\n|\r\n|\r\n|\r\n|\r\n|\r\n|\r\n|\r\n|\r\n|\r\n|\r\n";
			// 
			// monthCalendarCommande1
			// 
			this->monthCalendarCommande1->Location = System::Drawing::Point(435, 283);
			this->monthCalendarCommande1->Name = L"monthCalendarCommande1";
			this->monthCalendarCommande1->TabIndex = 107;
			this->monthCalendarCommande1->Visible = false;
			// 
			// labelCommandeDate2
			// 
			this->labelCommandeDate2->AutoSize = true;
			this->labelCommandeDate2->Location = System::Drawing::Point(493, 234);
			this->labelCommandeDate2->Name = L"labelCommandeDate2";
			this->labelCommandeDate2->Size = System::Drawing::Size(131, 17);
			this->labelCommandeDate2->TabIndex = 108;
			this->labelCommandeDate2->Text = L"Date de commande";
			this->labelCommandeDate2->Visible = false;
			// 
			// labelSimmule1
			// 
			this->labelSimmule1->AutoSize = true;
			this->labelSimmule1->Location = System::Drawing::Point(532, 138);
			this->labelSimmule1->Name = L"labelSimmule1";
			this->labelSimmule1->Size = System::Drawing::Size(61, 17);
			this->labelSimmule1->TabIndex = 109;
			this->labelSimmule1->Text = L"Magasin";
			this->labelSimmule1->Visible = false;
			// 
			// comboBoxSimmule1
			// 
			this->comboBoxSimmule1->FormattingEnabled = true;
			this->comboBoxSimmule1->Items->AddRange(gcnew cli::array< System::Object^  >(14) {
				L"Cesinfo Paris", L"Cesinfo Marseille",
					L"Cesinfo Lyon", L"Cesinfo Toulouse", L"Cesinfo Nice", L"Cesinfo Nantes", L"Cesinfo Strasbourg", L"Cesinfo Montpellier", L"Cesinfo Bordeaux",
					L"Cesinfo Lille", L"Cesinfo Rennes", L"Cesinfo Le Havre", L"Cesinfo Reims", L"Cesinfo Rouen"
			});
			this->comboBoxSimmule1->Location = System::Drawing::Point(496, 159);
			this->comboBoxSimmule1->Name = L"comboBoxSimmule1";
			this->comboBoxSimmule1->Size = System::Drawing::Size(131, 24);
			this->comboBoxSimmule1->TabIndex = 110;
			this->comboBoxSimmule1->Visible = false;
			// 
			// labelSimmule2
			// 
			this->labelSimmule2->AutoSize = true;
			this->labelSimmule2->Location = System::Drawing::Point(249, 519);
			this->labelSimmule2->Name = L"labelSimmule2";
			this->labelSimmule2->Size = System::Drawing::Size(35, 17);
			this->labelSimmule2->TabIndex = 111;
			this->labelSimmule2->Text = L"TVA";
			this->labelSimmule2->Visible = false;
			// 
			// comboBoxSimmule2
			// 
			this->comboBoxSimmule2->FormattingEnabled = true;
			this->comboBoxSimmule2->Items->AddRange(gcnew cli::array< System::Object^  >(4) { L"0%", L"5%", L"10%", L"20%" });
			this->comboBoxSimmule2->Location = System::Drawing::Point(250, 573);
			this->comboBoxSimmule2->Name = L"comboBoxSimmule2";
			this->comboBoxSimmule2->Size = System::Drawing::Size(100, 24);
			this->comboBoxSimmule2->TabIndex = 112;
			this->comboBoxSimmule2->Visible = false;
			// 
			// labelSimmule3
			// 
			this->labelSimmule3->AutoSize = true;
			this->labelSimmule3->Location = System::Drawing::Point(249, 427);
			this->labelSimmule3->Name = L"labelSimmule3";
			this->labelSimmule3->Size = System::Drawing::Size(55, 17);
			this->labelSimmule3->TabIndex = 113;
			this->labelSimmule3->Text = L"Remise";
			this->labelSimmule3->Visible = false;
			// 
			// textBoxSimmule1
			// 
			this->textBoxSimmule1->Location = System::Drawing::Point(250, 476);
			this->textBoxSimmule1->Name = L"textBoxSimmule1";
			this->textBoxSimmule1->Size = System::Drawing::Size(100, 22);
			this->textBoxSimmule1->TabIndex = 114;
			this->textBoxSimmule1->Visible = false;
			// 
			// labelSimmule4
			// 
			this->labelSimmule4->AutoSize = true;
			this->labelSimmule4->Location = System::Drawing::Point(249, 333);
			this->labelSimmule4->Name = L"labelSimmule4";
			this->labelSimmule4->Size = System::Drawing::Size(48, 17);
			this->labelSimmule4->TabIndex = 115;
			this->labelSimmule4->Text = L"Marge";
			this->labelSimmule4->Visible = false;
			// 
			// textBoxSimmule2
			// 
			this->textBoxSimmule2->Location = System::Drawing::Point(250, 385);
			this->textBoxSimmule2->Name = L"textBoxSimmule2";
			this->textBoxSimmule2->Size = System::Drawing::Size(100, 22);
			this->textBoxSimmule2->TabIndex = 116;
			this->textBoxSimmule2->Visible = false;
			// 
			// labelSimmule5
			// 
			this->labelSimmule5->AutoSize = true;
			this->labelSimmule5->Location = System::Drawing::Point(247, 241);
			this->labelSimmule5->Name = L"labelSimmule5";
			this->labelSimmule5->Size = System::Drawing::Size(74, 17);
			this->labelSimmule5->TabIndex = 117;
			this->labelSimmule5->Text = L"Demarque";
			this->labelSimmule5->Visible = false;
			// 
			// textBoxSimmule3
			// 
			this->textBoxSimmule3->Location = System::Drawing::Point(252, 283);
			this->textBoxSimmule3->Name = L"textBoxSimmule3";
			this->textBoxSimmule3->Size = System::Drawing::Size(100, 22);
			this->textBoxSimmule3->TabIndex = 118;
			this->textBoxSimmule3->Visible = false;
			// 
			// labelSimmule7
			// 
			this->labelSimmule7->AutoSize = true;
			this->labelSimmule7->Location = System::Drawing::Point(823, 143);
			this->labelSimmule7->Name = L"labelSimmule7";
			this->labelSimmule7->Size = System::Drawing::Size(145, 17);
			this->labelSimmule7->TabIndex = 119;
			this->labelSimmule7->Text = L"Valeur achat du stock";
			this->labelSimmule7->Visible = false;
			// 
			// labelSimmule6
			// 
			this->labelSimmule6->AutoSize = true;
			this->labelSimmule6->Location = System::Drawing::Point(813, 401);
			this->labelSimmule6->Name = L"labelSimmule6";
			this->labelSimmule6->Size = System::Drawing::Size(181, 17);
			this->labelSimmule6->TabIndex = 120;
			this->labelSimmule6->Text = L"Valeur commercial du stock";
			this->labelSimmule6->Visible = false;
			// 
			// richTextBoxSimmule1
			// 
			this->richTextBoxSimmule1->Location = System::Drawing::Point(781, 185);
			this->richTextBoxSimmule1->Name = L"richTextBoxSimmule1";
			this->richTextBoxSimmule1->Size = System::Drawing::Size(262, 207);
			this->richTextBoxSimmule1->TabIndex = 121;
			this->richTextBoxSimmule1->Text = L"";
			this->richTextBoxSimmule1->Visible = false;
			// 
			// richTextBoxSimmule2
			// 
			this->richTextBoxSimmule2->Location = System::Drawing::Point(781, 427);
			this->richTextBoxSimmule2->Name = L"richTextBoxSimmule2";
			this->richTextBoxSimmule2->Size = System::Drawing::Size(262, 207);
			this->richTextBoxSimmule2->TabIndex = 122;
			this->richTextBoxSimmule2->Text = L"";
			this->richTextBoxSimmule2->Visible = false;
			// 
			// labelErreur
			// 
			this->labelErreur->AutoSize = true;
			this->labelErreur->Location = System::Drawing::Point(1183, 519);
			this->labelErreur->Name = L"labelErreur";
			this->labelErreur->Size = System::Drawing::Size(0, 17);
			this->labelErreur->TabIndex = 123;
			// 
			// labelIDPersonel
			// 
			this->labelIDPersonel->AutoSize = true;
			this->labelIDPersonel->Location = System::Drawing::Point(539, 200);
			this->labelIDPersonel->Name = L"labelIDPersonel";
			this->labelIDPersonel->Size = System::Drawing::Size(85, 17);
			this->labelIDPersonel->TabIndex = 125;
			this->labelIDPersonel->Text = L"ID_Personel";
			this->labelIDPersonel->Visible = false;
			// 
			// textBoxIDPersonel
			// 
			this->textBoxIDPersonel->Location = System::Drawing::Point(527, 234);
			this->textBoxIDPersonel->Name = L"textBoxIDPersonel";
			this->textBoxIDPersonel->Size = System::Drawing::Size(100, 22);
			this->textBoxIDPersonel->TabIndex = 126;
			this->textBoxIDPersonel->Visible = false;
			// 
			// labelIDClient
			// 
			this->labelIDClient->AutoSize = true;
			this->labelIDClient->Location = System::Drawing::Point(539, 200);
			this->labelIDClient->Name = L"labelIDClient";
			this->labelIDClient->Size = System::Drawing::Size(64, 17);
			this->labelIDClient->TabIndex = 127;
			this->labelIDClient->Text = L"ID_Client";
			this->labelIDClient->Visible = false;
			// 
			// textBoxIDClient
			// 
			this->textBoxIDClient->Location = System::Drawing::Point(527, 234);
			this->textBoxIDClient->Name = L"textBoxIDClient";
			this->textBoxIDClient->Size = System::Drawing::Size(100, 22);
			this->textBoxIDClient->TabIndex = 128;
			this->textBoxIDClient->Visible = false;
			// 
			// textBoxIDCommande
			// 
			this->textBoxIDCommande->Location = System::Drawing::Point(527, 175);
			this->textBoxIDCommande->Name = L"textBoxIDCommande";
			this->textBoxIDCommande->Size = System::Drawing::Size(100, 22);
			this->textBoxIDCommande->TabIndex = 130;
			this->textBoxIDCommande->Visible = false;
			// 
			// labelIDCommande
			// 
			this->labelIDCommande->AutoSize = true;
			this->labelIDCommande->Location = System::Drawing::Point(524, 132);
			this->labelIDCommande->Name = L"labelIDCommande";
			this->labelIDCommande->Size = System::Drawing::Size(100, 17);
			this->labelIDCommande->TabIndex = 129;
			this->labelIDCommande->Text = L"ID_Commande";
			this->labelIDCommande->Visible = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1313, 677);
			this->Controls->Add(this->textBoxIDCommande);
			this->Controls->Add(this->labelIDCommande);
			this->Controls->Add(this->textBoxIDClient);
			this->Controls->Add(this->labelIDClient);
			this->Controls->Add(this->textBoxIDPersonel);
			this->Controls->Add(this->labelIDPersonel);
			this->Controls->Add(this->labelErreur);
			this->Controls->Add(this->richTextBoxSimmule2);
			this->Controls->Add(this->richTextBoxSimmule1);
			this->Controls->Add(this->labelSimmule6);
			this->Controls->Add(this->labelSimmule7);
			this->Controls->Add(this->textBoxSimmule3);
			this->Controls->Add(this->labelSimmule5);
			this->Controls->Add(this->textBoxSimmule2);
			this->Controls->Add(this->labelSimmule4);
			this->Controls->Add(this->textBoxSimmule1);
			this->Controls->Add(this->labelSimmule3);
			this->Controls->Add(this->comboBoxSimmule2);
			this->Controls->Add(this->labelSimmule2);
			this->Controls->Add(this->comboBoxSimmule1);
			this->Controls->Add(this->labelSimmule1);
			this->Controls->Add(this->labelCommandeDate2);
			this->Controls->Add(this->monthCalendarCommande1);
			this->Controls->Add(this->labelLigne1);
			this->Controls->Add(this->richTextBoxMoinVendu1);
			this->Controls->Add(this->richTextBoxPlusVendu1);
			this->Controls->Add(this->richTextBoxReaprovisionement1);
			this->Controls->Add(this->labelReaprovisionement2);
			this->Controls->Add(this->comboBoxReaprovisionnerment1);
			this->Controls->Add(this->textBoxAchatClient4);
			this->Controls->Add(this->labelAchatClient4);
			this->Controls->Add(this->textBoxAchatClient2);
			this->Controls->Add(this->textBoxAchatClient3);
			this->Controls->Add(this->labelAchatClient2);
			this->Controls->Add(this->labelAchatClient3);
			this->Controls->Add(this->labelAchatClient1);
			this->Controls->Add(this->textBoxAchatClient1);
			this->Controls->Add(this->richTextBoxValeurComercial1);
			this->Controls->Add(this->richTextBoxValeurStock1);
			this->Controls->Add(this->textBoxChiffreAffaire1);
			this->Controls->Add(this->labelChiffre2);
			this->Controls->Add(this->labelCalculChiffre1);
			this->Controls->Add(this->comboBoxChiffre1);
			this->Controls->Add(this->richTextBoxPanierMoyen1);
			this->Controls->Add(this->comboBoxIdentifie1);
			this->Controls->Add(this->comboBoxCalcul1);
			this->Controls->Add(this->textBoxCommandeSuprimer);
			this->Controls->Add(this->labelcommandeSuprimer);
			this->Controls->Add(this->labelCommande9);
			this->Controls->Add(this->richTextBoxCommande2);
			this->Controls->Add(this->textBoxCommande5);
			this->Controls->Add(this->textBoxCommande4);
			this->Controls->Add(this->labelCommande8);
			this->Controls->Add(this->labelCommande7);
			this->Controls->Add(this->labelCommande6);
			this->Controls->Add(this->labelCommande5);
			this->Controls->Add(this->richTextBoxCommande1);
			this->Controls->Add(this->comboBoxCommande2);
			this->Controls->Add(this->labelCommande4);
			this->Controls->Add(this->comboBoxCommande1);
			this->Controls->Add(this->textBoxCommande3);
			this->Controls->Add(this->labelCommande3);
			this->Controls->Add(this->textBoxCommande2);
			this->Controls->Add(this->textBoxCommande1);
			this->Controls->Add(this->labelCommande2);
			this->Controls->Add(this->labelCommande1);
			this->Controls->Add(this->labelClient1);
			this->Controls->Add(this->labelStockMagasin);
			this->Controls->Add(this->labelStock2);
			this->Controls->Add(this->labelStock1);
			this->Controls->Add(this->textBoxStock2);
			this->Controls->Add(this->textBoxStock1);
			this->Controls->Add(this->comboBoxStockMagasin);
			this->Controls->Add(this->comboBoxClient1);
			this->Controls->Add(this->textBoxClient7);
			this->Controls->Add(this->textBoxClient6);
			this->Controls->Add(this->textBoxClient5);
			this->Controls->Add(this->textBoxClient4);
			this->Controls->Add(this->textBoxClient3);
			this->Controls->Add(this->textBoxClient2);
			this->Controls->Add(this->textBoxClient1);
			this->Controls->Add(this->monthCalendarClient);
			this->Controls->Add(this->labelClient9);
			this->Controls->Add(this->labelClient8);
			this->Controls->Add(this->labelClient5);
			this->Controls->Add(this->labelClient7);
			this->Controls->Add(this->labelClient6);
			this->Controls->Add(this->labelClient4);
			this->Controls->Add(this->labelClient3);
			this->Controls->Add(this->labelClient2);
			this->Controls->Add(this->comboBoxPersonel3);
			this->Controls->Add(this->comboBoxPersonel2);
			this->Controls->Add(this->comboBoxPersonel1);
			this->Controls->Add(this->textBoxPersonel5);
			this->Controls->Add(this->textBoxPersonel4);
			this->Controls->Add(this->textBoxPersonel3);
			this->Controls->Add(this->textBoxPersonel2);
			this->Controls->Add(this->textBoxPersonel1);
			this->Controls->Add(this->labelPersonel9);
			this->Controls->Add(this->labelPersonel8);
			this->Controls->Add(this->labelPersonel7);
			this->Controls->Add(this->labelPersonel6);
			this->Controls->Add(this->labelPersonel5);
			this->Controls->Add(this->labelPersonel4);
			this->Controls->Add(this->labelPersonel3);
			this->Controls->Add(this->labelPersonel2);
			this->Controls->Add(this->labelPersonel1);
			this->Controls->Add(this->monthCalendarPersonel);
			this->Controls->Add(this->dataGridView1);
			this->Controls->Add(this->comboBoxActionTable);
			this->Controls->Add(this->comboBoxStat);
			this->Controls->Add(this->comboBoxTable);
			this->Controls->Add(this->label1);
			this->Controls->Add(this->button1);
			this->Controls->Add(this->comboBoxGestionaire);
			this->Name = L"MyForm";
			this->Text = L"MyForm";
			(cli::safe_cast<System::ComponentModel::ISupportInitialize^>(this->dataGridView1))->EndInit();
			this->ResumeLayout(false);
			this->PerformLayout();

		}
#pragma endregion
	private: System::Void button1_Click(System::Object^ sender, System::EventArgs^ e)
	{
		Controller controller;
		System::String^ result = "";
		if (this->comboBoxGestionaire->SelectedIndex == 0)
		{
			if (this->comboBoxTable->SelectedIndex == 0)
			{
				if (this->comboBoxActionTable->SelectedIndex == 0)
				{
					result += "CreePersonel";
					//nom
					System::String^ nom = "";
					nom += this->textBoxPersonel1->Text;
					//prenom
					System::String^ prenom = "";
					prenom += this->textBoxPersonel2->Text;
					//telephone
					System::String^ telephone = "";
					telephone += this->textBoxPersonel3->Text;
					//ID_superieur
					System::String^ ID_superieur = "";
					ID_superieur += this->textBoxPersonel4->Text;
					//adresse
					System::String^ adresse = "";
					adresse += this->textBoxPersonel5->Text;
					//date_embauche
					System::String^ date_embauche = "";
					date_embauche += this->monthCalendarPersonel->SelectionEnd;
					date_embauche = date_embauche->Substring(0, 10);
					//departement
					adresse += this->comboBoxPersonel1->SelectedText;
					//poste
					System::String^ poste = "";
					poste += this->comboBoxPersonel2->SelectedText;
					//magasin
					System::String^ magasin = "";
					magasin += this->comboBoxPersonel2->SelectedText;
					result = "staff:create:" + nom + "," + prenom + "," + telephone + "," + date_embauche + "," + poste + "," + adresse + "," + ID_superieur;
					controller.Table(result);
				}
				if (this->comboBoxActionTable->SelectedIndex == 1)
				{
					result += "ModifiePersonel";
					//nom
					System::String^ nom = "";
					nom += this->textBoxPersonel1->Text;
					//prenom
					System::String^ prenom = "";
					prenom += this->textBoxPersonel2->Text;
					//telephone
					System::String^ telephone = "";
					telephone += this->textBoxPersonel3->Text;
					//ID_superieur
					System::String^ ID_superieur = "";
					ID_superieur += this->textBoxPersonel4->Text;
					//adresse
					System::String^ adresse = "";
					adresse += this->textBoxPersonel5->Text;
					//date_embauche
					System::String^ date_embauche = "";
					date_embauche += this->monthCalendarPersonel->SelectionEnd;
					date_embauche = date_embauche->Substring(0, 10);
					//departement
					adresse += this->comboBoxPersonel1->SelectedText;
					//poste
					System::String^ poste = "";
					poste += this->comboBoxPersonel2->SelectedText;
					//magasin
					System::String^ magasin = "";
					magasin += this->comboBoxPersonel2->SelectedText;
					//ID
					System::String^ ID = "";
					ID += this->textBoxIDPersonel->Text;
					result = "staff:modify:"+ ID + "," + nom + "," + prenom + "," + telephone + "," + date_embauche + "," + poste + "," + adresse + "," + ID_superieur;
					controller.Table(result);
				}
				if (this->comboBoxActionTable->SelectedIndex == 2)
				{
					result += "DeletePersonel";
					//nom
					System::String^ nom = "";
					nom += this->textBoxPersonel1->Text;
					//prenom
					System::String^ prenom = "";
					prenom += this->textBoxPersonel2->Text;
					//telephone
					System::String^ telephone = "";
					telephone += this->textBoxPersonel3->Text;
					//ID
					System::String^ ID = "";
					ID += this->textBoxIDPersonel->Text;
					result = "staff:delete:" + ID;
					controller.Table(result);
				}
			}
			if (this->comboBoxTable->SelectedIndex == 1)
			{
				if (this->comboBoxActionTable->SelectedIndex == 0)
				{
					result += "CreeClient";
					//nom
					System::String^ Nom = "";
					Nom += this->textBoxClient1->Text;
					//prenom
					System::String^ Prenom = "";
					Prenom += this->textBoxClient2->Text;
					//Numero_Compte
					System::String^ Numero_Compte = "";
					Numero_Compte += this->textBoxClient3->Text;
					//mail
					System::String^ Mail = "";
					Mail += this->textBoxClient4->Text;
					//adresse
					System::String^ Adresse = "";
					Adresse += this->textBoxClient5->Text;
					//departement
					Adresse += this->comboBoxClient1->SelectedText;
					//Point
					System::String^ Point = "";
					Point += this->textBoxClient7->Text;
					//Telephone
					System::String^ Telephone = "";
					Telephone += this->textBoxClient6->Text;
					//Date_Naissance
					System::String^ Date_Naissance = "";
					Date_Naissance += this->monthCalendarClient->SelectionEnd;
					Date_Naissance = Date_Naissance->Substring(0, 10);
					result = "client::create" + Nom + "," + Prenom + "," + Mail + "," + Telephone + "," + Adresse + "," + Date_Naissance;
					controller.Table(result);
					this->label1->Text = result;
				}
				if (this->comboBoxActionTable->SelectedIndex == 1)
				{
					result += "ModifieClient";
					//nom
					System::String^ Nom = "";
					Nom += this->textBoxClient1->Text;
					//prenom
					System::String^ Prenom = "";
					Prenom += this->textBoxClient2->Text;
					//Numero_Compte
					System::String^ Numero_Compte = "";
					Numero_Compte += this->textBoxClient3->Text;
					//mail
					System::String^ Mail = "";
					Mail += this->textBoxClient4->Text;
					//adresse
					System::String^ Adresse = "";
					Adresse += this->textBoxClient5->Text;
					//departement
					Adresse += this->comboBoxClient1->SelectedText;
					//Point
					System::String^ Point = "";
					Point += this->textBoxClient7->Text;
					//Telephone
					System::String^ Telephone = "";
					Telephone += this->textBoxClient6->Text;
					//Date_Naissance
					System::String^ Date_Naissance = "";
					Date_Naissance += this->monthCalendarClient->SelectionEnd;
					//ID
					System::String^ ID = "";
					ID += this->textBoxIDClient->Text;
					result = "client::modify" + ID + "," + Nom + "," + Prenom + "," + Mail + "," + Telephone + "," + Adresse + "," + Date_Naissance;
					controller.Table(result);
				}
				if (this->comboBoxActionTable->SelectedIndex == 2)
				{
					result += "DeleteClient";
					//nom
					System::String^ Nom = "";
					Nom += this->textBoxClient1->Text;
					//prenom
					System::String^ Prenom = "";
					Prenom += this->textBoxClient2->Text;
					//Numero_Compte
					System::String^ Numero_Compte = "";
					Numero_Compte += this->textBoxClient3->Text;
					//ID
					System::String^ ID = "";
					ID += this->textBoxIDClient->Text;
					result = "client::delete" + ID;
					controller.Table(result);
				}
			}
			if (this->comboBoxTable->SelectedIndex == 2)
			{
				if (this->comboBoxActionTable->SelectedIndex == 0)
				{
					result += "CreeCommande";
					//Nom
					System::String^ Nom = "";
					Nom += this->textBoxCommande1->Text;
					//Prenom
					System::String^ Prenom = "";
					Prenom += this->textBoxCommande2->Text;
					//Numero_Compte
					System::String^ Numero_Compte = "";
					Numero_Compte += this->textBoxCommande3->Text;
					//Moyen_Payment
					System::String^ Moyen_Payment = "";
					Moyen_Payment += this->comboBoxCommande1->SelectedText;
					//Remise
					System::String^ Remise = "";
					Remise += this->textBoxCommande5->Text;
					//TVA
					System::String^ TVA = "";
					TVA += this->comboBoxCommande2->SelectedText;
					//Date_Commande
					System::String^ Date_Commande = "";
					Date_Commande += this->monthCalendarCommande1->SelectionEnd;
					//Liste_Achat
					System::String^ Liste_Achat = "";
					Liste_Achat += this->richTextBoxCommande1->Text;
					//Marge
					System::String^ Marge = "";
					Marge += this->textBoxCommande4->Text;
					//Adresse 
					System::String^ Adresse = "";
					Adresse += this->richTextBoxCommande2->Text;
					result = "order::create" + Date_Commande + "," + Date_Commande + "," + "1" + "," + Moyen_Payment + "," + Marge + "," + Remise + "," + TVA + "," + Numero_Compte;
					controller.Table(result);
				}
				if (this->comboBoxActionTable->SelectedIndex == 1)
				{
					result += "ModifieCommande";
					//Nom
					System::String^ Nom = "";
					Nom += this->textBoxCommande1->Text;
					//Prenom
					System::String^ Prenom = "";
					Prenom += this->textBoxCommande2->Text;
					//Numero_Compte
					System::String^ Numero_Compte = "";
					Numero_Compte += this->textBoxCommande3->Text;
					//Moyen_Payment
					System::String^ Moyen_Payment = "";
					Moyen_Payment += this->comboBoxCommande1->SelectedText;
					//Remise
					System::String^ Remise = "";
					Remise += this->textBoxCommande5->Text;
					//TVA
					System::String^ TVA = "";
					TVA += this->comboBoxCommande2->SelectedText;
					//Date_Commande
					System::String^ Date_Commande = "";
					Date_Commande += this->monthCalendarCommande1->SelectionEnd;
					//Liste_Achat
					System::String^ Liste_Achat = "";
					Liste_Achat += this->richTextBoxCommande1->Text;
					//Marge
					System::String^ Marge = "";
					Marge += this->textBoxCommande4->Text;
					//Adresse 
					System::String^ Adresse = "";
					Adresse += this->richTextBoxCommande2->Text;
					//ID 
					System::String^ ID = "";
					ID = this->textBoxIDCommande->Text;
					result = "order::modify" + ID + "," + Date_Commande + "," + Date_Commande + "," + "1" + "," + Moyen_Payment + "," + Marge + "," + Remise + "," + TVA + "," + Numero_Compte;
					controller.Table(result);
				}
				if (this->comboBoxActionTable->SelectedIndex == 2)
				{
					result += "DeleteCommande";
					//Nom
					System::String^ Nom = "";
					Nom += this->textBoxCommande1->Text;
					//Prenom
					System::String^ Prenom = "";
					Prenom += this->textBoxCommande2->Text;
					//Numero_Compte
					System::String^ Numero_Compte = "";
					Numero_Compte += this->textBoxCommande3->Text;
					//ID_commande
					System::String^ ID_Commande = "";
					ID_Commande += this->textBoxCommandeSuprimer->Text;
					result = "order::delete" + ID_Commande;
					controller.Table(result);
				}
			}
			if (this->comboBoxTable->SelectedIndex == 3)
			{
				if (this->comboBoxActionTable->SelectedIndex == 0)
				{
					result += "CreeStock";
					//Magasin
					System::String^ Magasin = "";
					Magasin += this->comboBoxStockMagasin->SelectedText;
					//Produit
					System::String^ Produit = "";
					Produit += this->textBoxStock1->Text;
					//Quantite
					System::String^ Quantite = "";
					Quantite += this->textBoxStock2->Text;
					result = "stock::create" + Produit + "," + Magasin + "," + Quantite;
					controller.Table(result);
				}
				if (this->comboBoxActionTable->SelectedIndex == 1)
				{
					result += "ModifieStock";
					//Magasin
					System::String^ Magasin = "";
					Magasin += this->comboBoxStockMagasin->SelectedText;
					//Produit
					System::String^ Produit = "";
					Produit += this->textBoxStock1->Text;
					//Quantite
					System::String^ Quantite = "";
					Quantite += this->textBoxStock2->Text;
					result = "stock::modofy" + Produit + "," + Magasin + "," + Quantite;
					controller.Table(result);
				}
				if (this->comboBoxActionTable->SelectedIndex == 2)
				{
					result += "DeleteStock";
					//Magasin
					System::String^ Magasin = "";
					Magasin += this->comboBoxStockMagasin->SelectedText;
					//Produit
					System::String^ Produit = "";
					Produit += this->textBoxStock1->Text;
					result = "stock::modofy" + Produit + "," + Magasin;
					controller.Table(result);
				}
			}
		}
		if (this->comboBoxGestionaire->SelectedIndex == 1)
		{
			if (this->comboBoxStat->SelectedIndex == 0)
			{
				if (this->comboBoxCalcul1->SelectedIndex == 0)
				{
					result += "PanierMoyen";
				}
				if (this->comboBoxCalcul1->SelectedIndex == 1)
				{
					result += "ChiffreAffaire";
					//Mois
					System::String^ Mois = "";
					Mois += this->comboBoxChiffre1->SelectedText;
				}
				if (this->comboBoxCalcul1->SelectedIndex == 2)
				{
					result += "AchatClient";
					//Nom
					System::String^ Nom = "";
					Nom += this->textBoxAchatClient1->Text;
					//Prenom
					System::String^ Prenom = "";
					Prenom += this->textBoxAchatClient2->Text;
					//Numero_Client
					System::String^ Numero_Client = "";
					Numero_Client += this->textBoxAchatClient3->Text;
				}
				if (this->comboBoxCalcul1->SelectedIndex == 3)
				{
					result += "ValeurCommercial";
				}
				if (this->comboBoxCalcul1->SelectedIndex == 4)
				{
					result += "ValeurAchat";
				}
			}
			if (this->comboBoxStat->SelectedIndex == 1)
			{
				if (this->comboBoxIdentifie1->SelectedIndex == 0)
				{
					result += "Reaprovision";
					//Magasin
					System::String^ Magasin = "";
					Magasin += this->comboBoxReaprovisionnerment1->SelectedText;
				}
				if (this->comboBoxIdentifie1->SelectedIndex == 1)
				{
					result += "PlusVendu";
				}
				if (this->comboBoxIdentifie1->SelectedIndex == 2)
				{
					result += "MoinVendu";
				}
			}
			if (this->comboBoxStat->SelectedIndex == 2)
			{
				result += "Simmulation";
				//Remise
				System::String^ Remise = "";
				Remise += this->textBoxSimmule1->Text;
				//Marge
				System::String^ Marge = "";
				Marge += this->textBoxSimmule2->Text;
				//Demarque
				System::String^ Demarque = "";
				Demarque += this->textBoxSimmule3->Text;
				//Magasin
				System::String^ Magasin = "";
				Magasin += this->comboBoxSimmule1->SelectedText;
				//TVA
				System::String^ TVA = "";
				TVA += this->comboBoxSimmule2->SelectedText;
			}
		}
	}
	private: System::Void comboBoxGestionaire_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if (this->comboBoxGestionaire->SelectedIndex == 0)
		{
			this->comboBoxTable->Visible = true;
			this->comboBoxStat->Visible = false;
			this->label1->Text = L"Veillez choisir la Table a gerer";
			this->comboBoxCalcul1->Visible = false;
			this->comboBoxIdentifie1->Visible = false;
			this->richTextBoxPanierMoyen1->Visible = false;
			this->labelChiffre2->Visible = false;
			this->labelCalculChiffre1->Visible = false;
			this->textBoxChiffreAffaire1->Visible = false;
			this->richTextBoxValeurComercial1->Visible = false;
			this->richTextBoxValeurStock1->Visible = false;
			this->textBoxAchatClient1->Visible = false;
			this->textBoxAchatClient2->Visible = false;
			this->textBoxAchatClient3->Visible = false;
			this->textBoxAchatClient4->Visible = false;
			this->labelAchatClient1->Visible = false;
			this->labelAchatClient2->Visible = false;
			this->labelAchatClient3->Visible = false;
			this->labelAchatClient4->Visible = false;
			this->labelReaprovisionement2->Visible = false;
			this->comboBoxReaprovisionnerment1->Visible = false;
			this->richTextBoxReaprovisionement1->Visible = false;
			this->richTextBoxPlusVendu1->Visible = false;
			this->richTextBoxMoinVendu1->Visible = false;
			this->labelSimmule1->Visible = false;
			this->labelSimmule2->Visible = false;
			this->labelSimmule3->Visible = false;
			this->labelSimmule4->Visible = false;
			this->labelSimmule5->Visible = false;
			this->labelSimmule6->Visible = false;
			this->labelSimmule7->Visible = false;
			this->comboBoxSimmule1->Visible = false;
			this->comboBoxSimmule2->Visible = false;
			this->textBoxSimmule1->Visible = false;
			this->textBoxSimmule2->Visible = false;
			this->textBoxSimmule3->Visible = false;
			this->richTextBoxSimmule1->Visible = false;
			this->richTextBoxSimmule2->Visible = false;
		}
		else if (this->comboBoxGestionaire->SelectedIndex == 1)
		{
			this->comboBoxTable->Visible = false;
			this->comboBoxStat->Visible = true;
			this->label1->Text = L"Veillez choisir l'action de Stat a faire";
			this->comboBoxActionTable->Visible = false;
			this->labelPersonel1->Visible = false;
			this->labelPersonel2->Visible = false;
			this->labelPersonel3->Visible = false;
			this->labelPersonel4->Visible = false;
			this->labelPersonel5->Visible = false;
			this->labelPersonel6->Visible = false;
			this->labelPersonel7->Visible = false;
			this->labelPersonel8->Visible = false;
			this->labelPersonel9->Visible = false;
			this->textBoxPersonel1->Visible = false;
			this->textBoxPersonel2->Visible = false;
			this->textBoxPersonel3->Visible = false;
			this->textBoxPersonel4->Visible = false;
			this->textBoxPersonel5->Visible = false;
			this->monthCalendarPersonel->Visible = false;
			this->comboBoxPersonel1->Visible = false;
			this->comboBoxPersonel2->Visible = false;
			this->comboBoxPersonel3->Visible = false;
			this->labelClient1->Visible = false;
			this->labelClient2->Visible = false;
			this->labelClient3->Visible = false;
			this->labelClient4->Visible = false;
			this->labelClient5->Visible = false;
			this->labelClient6->Visible = false;
			this->labelClient7->Visible = false;
			this->labelClient8->Visible = false;
			this->labelClient9->Visible = false;
			this->textBoxClient1->Visible = false;
			this->textBoxClient2->Visible = false;
			this->textBoxClient3->Visible = false;
			this->textBoxClient4->Visible = false;
			this->textBoxClient5->Visible = false;
			this->textBoxClient6->Visible = false;
			this->textBoxClient7->Visible = false;
			this->monthCalendarClient->Visible = false;
			this->comboBoxClient1->Visible = false;
			this->labelStock1->Visible = false;
			this->labelStock2->Visible = false;
			this->textBoxStock1->Visible = false;
			this->textBoxStock2->Visible = false;
			this->labelStockMagasin->Visible = false;
			this->comboBoxStockMagasin->Visible = false;
			this->labelCommande1->Visible = false;
			this->labelCommande2->Visible = false;
			this->labelCommande3->Visible = false;
			this->labelCommande4->Visible = false;
			this->labelCommande5->Visible = false;
			this->labelCommande6->Visible = false;
			this->labelCommande7->Visible = false;
			this->labelCommande8->Visible = false;
			this->labelCommande9->Visible = false;
			this->textBoxCommande1->Visible = false;
			this->textBoxCommande2->Visible = false;
			this->textBoxCommande3->Visible = false;
			this->textBoxCommande4->Visible = false;
			this->textBoxCommande5->Visible = false;
			this->comboBoxCommande1->Visible = false;
			this->comboBoxCommande2->Visible = false;
			this->richTextBoxCommande1->Visible = false;
			this->richTextBoxCommande2->Visible = false;
			this->textBoxCommandeSuprimer->Visible = false;
			this->labelcommandeSuprimer->Visible = false;
			this->monthCalendarCommande1->Visible = false;
			this->labelCommandeDate2->Visible = false;
			this->labelIDClient->Visible = false;
			this->labelIDCommande->Visible = false;
			this->labelIDPersonel->Visible = false;
			this->textBoxIDClient->Visible = false;
			this->textBoxIDCommande->Visible = false;
			this->textBoxIDPersonel->Visible = false;
		}
	}
	private: System::Void comboBoxTable_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		this->comboBoxActionTable->Visible = true;
		this->comboBoxCalcul1->Visible = false;
		this->comboBoxIdentifie1->Visible = false;
		this->label1->Text = L"Veillez choisir l'action a effectuer sur la table";
		this->labelPersonel1->Visible = false;
		this->labelPersonel2->Visible = false;
		this->labelPersonel3->Visible = false;
		this->labelPersonel4->Visible = false;
		this->labelPersonel5->Visible = false;
		this->labelPersonel6->Visible = false;
		this->labelPersonel7->Visible = false;
		this->labelPersonel8->Visible = false;
		this->labelPersonel9->Visible = false;
		this->textBoxPersonel1->Visible = false;
		this->textBoxPersonel2->Visible = false;
		this->textBoxPersonel3->Visible = false;
		this->textBoxPersonel4->Visible = false;
		this->textBoxPersonel5->Visible = false;
		this->monthCalendarPersonel->Visible = false;
		this->comboBoxPersonel1->Visible = false;
		this->comboBoxPersonel2->Visible = false;
		this->comboBoxPersonel3->Visible = false;
		this->labelClient1->Visible = false;
		this->labelClient2->Visible = false;
		this->labelClient3->Visible = false;
		this->labelClient4->Visible = false;
		this->labelClient5->Visible = false;
		this->labelClient6->Visible = false;
		this->labelClient7->Visible = false;
		this->labelClient8->Visible = false;
		this->labelClient9->Visible = false;
		this->textBoxClient1->Visible = false;
		this->textBoxClient2->Visible = false;
		this->textBoxClient3->Visible = false;
		this->textBoxClient4->Visible = false;
		this->textBoxClient5->Visible = false;
		this->textBoxClient6->Visible = false;
		this->textBoxClient7->Visible = false;
		this->monthCalendarClient->Visible = false;
		this->comboBoxClient1->Visible = false;
		this->labelStock1->Visible = false;
		this->labelStock2->Visible = false;
		this->textBoxStock1->Visible = false;
		this->textBoxStock2->Visible = false;
		this->labelStockMagasin->Visible = false;
		this->comboBoxStockMagasin->Visible = false;
		this->labelCommande1->Visible = false;
		this->labelCommande2->Visible = false;
		this->labelCommande3->Visible = false;
		this->labelCommande4->Visible = false;
		this->labelCommande5->Visible = false;
		this->labelCommande6->Visible = false;
		this->labelCommande7->Visible = false;
		this->labelCommande8->Visible = false;
		this->labelCommande9->Visible = false;
		this->textBoxCommande1->Visible = false;
		this->textBoxCommande2->Visible = false;
		this->textBoxCommande3->Visible = false;
		this->textBoxCommande4->Visible = false;
		this->textBoxCommande5->Visible = false;
		this->comboBoxCommande1->Visible = false;
		this->comboBoxCommande2->Visible = false;
		this->richTextBoxCommande1->Visible = false;
		this->richTextBoxCommande2->Visible = false;
		this->textBoxCommandeSuprimer->Visible = false;
		this->labelcommandeSuprimer->Visible = false;
		this->monthCalendarCommande1->Visible = false;
		this->labelCommandeDate2->Visible = false;
		this->labelIDPersonel->Visible = false;
		this->textBoxIDPersonel->Visible = false;
	}
	private: System::Void comboBoxStat_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		this->comboBoxActionTable->Visible = false;
		if (this->comboBoxStat->SelectedIndex == 0)
		{
			this->label1->Text = L"Veillez choisir le calcul a effectue";
			this->comboBoxCalcul1->Visible = true;
			this->comboBoxIdentifie1->Visible = false;
			this->labelReaprovisionement2->Visible = false;
			this->comboBoxReaprovisionnerment1->Visible = false;
			this->richTextBoxReaprovisionement1->Visible = false;
			this->richTextBoxPlusVendu1->Visible = false;
			this->richTextBoxMoinVendu1->Visible = false;
			this->labelSimmule1->Visible = false;
			this->labelSimmule2->Visible = false;
			this->labelSimmule3->Visible = false;
			this->labelSimmule4->Visible = false;
			this->labelSimmule5->Visible = false;
			this->labelSimmule6->Visible = false;
			this->labelSimmule7->Visible = false;
			this->comboBoxSimmule1->Visible = false;
			this->comboBoxSimmule2->Visible = false;
			this->textBoxSimmule1->Visible = false;
			this->textBoxSimmule2->Visible = false;
			this->textBoxSimmule3->Visible = false;
			this->richTextBoxSimmule1->Visible = false;
			this->richTextBoxSimmule2->Visible = false;
		}
		if (this->comboBoxStat->SelectedIndex == 1)
		{
			this->label1->Text = L"Veillez choisir la stat a identifie";
			this->comboBoxCalcul1->Visible = false;
			this->comboBoxIdentifie1->Visible = true;
			this->richTextBoxPanierMoyen1->Visible = false;
			this->labelCalculChiffre1->Visible = false;
			this->labelChiffre2->Visible = false;
			this->comboBoxChiffre1->Visible = false;
			this->textBoxChiffreAffaire1->Visible = false;
			this->richTextBoxValeurComercial1->Visible = false;
			this->richTextBoxValeurStock1->Visible = false;
			this->textBoxAchatClient1->Visible = false;
			this->textBoxAchatClient2->Visible = false;
			this->textBoxAchatClient3->Visible = false;
			this->textBoxAchatClient4->Visible = false;
			this->labelAchatClient1->Visible = false;
			this->labelAchatClient2->Visible = false;
			this->labelAchatClient3->Visible = false;
			this->labelAchatClient4->Visible = false;
			this->labelSimmule1->Visible = false;
			this->labelSimmule2->Visible = false;
			this->labelSimmule3->Visible = false;
			this->labelSimmule4->Visible = false;
			this->labelSimmule5->Visible = false;
			this->labelSimmule6->Visible = false;
			this->labelSimmule7->Visible = false;
			this->comboBoxSimmule1->Visible = false;
			this->comboBoxSimmule2->Visible = false;
			this->textBoxSimmule1->Visible = false;
			this->textBoxSimmule2->Visible = false;
			this->textBoxSimmule3->Visible = false;
			this->richTextBoxSimmule1->Visible = false;
			this->richTextBoxSimmule2->Visible = false;
		}
		if (this->comboBoxStat->SelectedIndex == 2)
		{
			this->label1->Text = L"Veillez choisir les paramètre de la simulation";
			this->comboBoxCalcul1->Visible = false;
			this->comboBoxIdentifie1->Visible = false;
			this->richTextBoxPanierMoyen1->Visible = false;
			this->labelCalculChiffre1->Visible = false;
			this->labelChiffre2->Visible = false;
			this->comboBoxChiffre1->Visible = false;
			this->textBoxChiffreAffaire1->Visible = false;
			this->richTextBoxValeurComercial1->Visible = false;
			this->richTextBoxValeurStock1->Visible = false;
			this->textBoxAchatClient1->Visible = false;
			this->textBoxAchatClient2->Visible = false;
			this->textBoxAchatClient3->Visible = false;
			this->textBoxAchatClient4->Visible = false;
			this->labelAchatClient1->Visible = false;
			this->labelAchatClient2->Visible = false;
			this->labelAchatClient3->Visible = false;
			this->labelAchatClient4->Visible = false;
			this->labelReaprovisionement2->Visible = false;
			this->comboBoxReaprovisionnerment1->Visible = false;
			this->richTextBoxReaprovisionement1->Visible = false;
			this->richTextBoxPlusVendu1->Visible = false;
			this->richTextBoxMoinVendu1->Visible = false;
			this->labelSimmule1->Visible = true;
			this->labelSimmule2->Visible = true;
			this->labelSimmule3->Visible = true;
			this->labelSimmule4->Visible = true;
			this->labelSimmule5->Visible = true;
			this->labelSimmule6->Visible = true;
			this->labelSimmule7->Visible = true;
			this->comboBoxSimmule1->Visible = true;
			this->comboBoxSimmule2->Visible = true;
			this->textBoxSimmule1->Visible = true;
			this->textBoxSimmule2->Visible = true;
			this->textBoxSimmule3->Visible = true;
			this->richTextBoxSimmule1->Visible = true;
			this->richTextBoxSimmule2->Visible = true;
		}
	}
	private: System::Void comboBoxActionTable_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if (this->comboBoxActionTable->SelectedIndex == 0 && this->comboBoxTable->SelectedIndex == 0)
		{
			this->label1->Text = L"Veillez renseigner les info du personnel";
			this->labelPersonel1->Visible = true;
			this->labelPersonel2->Visible = true;
			this->labelPersonel3->Visible = true;
			this->labelPersonel4->Visible = true;
			this->labelPersonel5->Visible = true;
			this->labelPersonel6->Visible = true;
			this->labelPersonel7->Visible = true;
			this->labelPersonel8->Visible = true;
			this->labelPersonel9->Visible = true;
			this->textBoxPersonel1->Visible = true;
			this->textBoxPersonel2->Visible = true;
			this->textBoxPersonel3->Visible = true;
			this->textBoxPersonel4->Visible = true;
			this->textBoxPersonel5->Visible = true;
			this->monthCalendarPersonel->Visible = true;
			this->comboBoxPersonel1->Visible = true;
			this->comboBoxPersonel2->Visible = true;
			this->comboBoxPersonel3->Visible = true;
			this->dataGridView1->Visible = true;
			this->labelIDPersonel->Visible = false;
			this->textBoxIDPersonel->Visible = false;
		}
		if (this->comboBoxActionTable->SelectedIndex == 1 && this->comboBoxTable->SelectedIndex == 0)
		{
			this->label1->Text = L"Veillez renseigner les info du personnel a modifier";
			this->labelPersonel1->Visible = true;
			this->labelPersonel2->Visible = true;
			this->labelPersonel3->Visible = true;
			this->labelPersonel4->Visible = true;
			this->labelPersonel5->Visible = true;
			this->labelPersonel6->Visible = true;
			this->labelPersonel7->Visible = true;
			this->labelPersonel8->Visible = true;
			this->labelPersonel9->Visible = true;
			this->textBoxPersonel1->Visible = true;
			this->textBoxPersonel2->Visible = true;
			this->textBoxPersonel3->Visible = true;
			this->textBoxPersonel4->Visible = true;
			this->textBoxPersonel5->Visible = true;
			this->monthCalendarPersonel->Visible = true;
			this->comboBoxPersonel1->Visible = true;
			this->comboBoxPersonel2->Visible = true;
			this->comboBoxPersonel3->Visible = true;
			this->dataGridView1->Visible = true;
			this->labelIDPersonel->Visible = true;
			this->textBoxIDPersonel->Visible = true;
		}
		if (this->comboBoxActionTable->SelectedIndex == 2 && this->comboBoxTable->SelectedIndex == 0)
		{
			this->label1->Text = L"Veillez renseigner le personnel a suprimer";
			this->labelPersonel1->Visible = true;
			this->labelPersonel2->Visible = true;
			this->labelPersonel3->Visible = true;
			this->labelPersonel4->Visible = false;
			this->labelPersonel5->Visible = false;
			this->labelPersonel6->Visible = false;
			this->labelPersonel7->Visible = false;
			this->labelPersonel8->Visible = false;
			this->labelPersonel9->Visible = false;
			this->textBoxPersonel1->Visible = true;
			this->textBoxPersonel2->Visible = true;
			this->textBoxPersonel3->Visible = true;
			this->textBoxPersonel4->Visible = false;
			this->textBoxPersonel5->Visible = false;
			this->monthCalendarPersonel->Visible = false;
			this->comboBoxPersonel1->Visible = false;
			this->comboBoxPersonel2->Visible = false;
			this->comboBoxPersonel3->Visible = false;
			this->dataGridView1->Visible = true;
			this->labelIDPersonel->Visible = true;
			this->textBoxIDPersonel->Visible = true;
		}
		if (this->comboBoxActionTable->SelectedIndex == 0 && this->comboBoxTable->SelectedIndex == 1)
		{
			this->label1->Text = L"Veillez renseigner les info du client";
			this->labelClient1->Visible = true;
			this->labelClient2->Visible = true;
			this->labelClient3->Visible = true;
			this->labelClient4->Visible = true;
			this->labelClient5->Visible = true;
			this->labelClient6->Visible = true;
			this->labelClient7->Visible = true;
			this->labelClient8->Visible = true;
			this->labelClient9->Visible = true;
			this->textBoxClient1->Visible = true;
			this->textBoxClient2->Visible = true;
			this->textBoxClient3->Visible = true;
			this->textBoxClient4->Visible = true;
			this->textBoxClient5->Visible = true;
			this->textBoxClient6->Visible = true;
			this->textBoxClient7->Visible = true;
			this->monthCalendarClient->Visible = true;
			this->comboBoxClient1->Visible = true;
			this->dataGridView1->Visible = true;
			this->labelIDClient->Visible = false;
			this->textBoxIDClient->Visible = false;
		}
		if (this->comboBoxActionTable->SelectedIndex == 1 && this->comboBoxTable->SelectedIndex == 1)
		{
			this->label1->Text = L"Veillez renseigner les info du client a modifier";
			this->labelClient1->Visible = true;
			this->labelClient2->Visible = true;
			this->labelClient3->Visible = true;
			this->labelClient4->Visible = true;
			this->labelClient5->Visible = true;
			this->labelClient6->Visible = true;
			this->labelClient7->Visible = true;
			this->labelClient8->Visible = true;
			this->labelClient9->Visible = true;
			this->textBoxClient1->Visible = true;
			this->textBoxClient2->Visible = true;
			this->textBoxClient3->Visible = true;
			this->textBoxClient4->Visible = true;
			this->textBoxClient5->Visible = true;
			this->textBoxClient6->Visible = true;
			this->textBoxClient7->Visible = true;
			this->monthCalendarClient->Visible = true;
			this->comboBoxClient1->Visible = true;
			this->dataGridView1->Visible = true;
			this->labelIDClient->Visible = true;
			this->textBoxIDClient->Visible = true;
		}
		if (this->comboBoxActionTable->SelectedIndex == 2 && this->comboBoxTable->SelectedIndex == 1)
		{
			this->label1->Text = L"Veillez renseigner le client a suprimer";
			this->labelClient1->Visible = true;
			this->labelClient2->Visible = true;
			this->labelClient3->Visible = true;
			this->labelClient4->Visible = false;
			this->labelClient5->Visible = false;
			this->labelClient6->Visible = false;
			this->labelClient7->Visible = false;
			this->labelClient8->Visible = false;
			this->labelClient9->Visible = false;
			this->textBoxClient1->Visible = true;
			this->textBoxClient2->Visible = true;
			this->textBoxClient3->Visible = true;
			this->textBoxClient4->Visible = false;
			this->textBoxClient5->Visible = false;
			this->textBoxClient6->Visible = false;
			this->textBoxClient7->Visible = false;
			this->monthCalendarClient->Visible = false;
			this->comboBoxClient1->Visible = false;
			this->dataGridView1->Visible = true;
			this->labelIDClient->Visible = true;
			this->textBoxIDClient->Visible = true;
		}
		if (this->comboBoxActionTable->SelectedIndex == 0 && this->comboBoxTable->SelectedIndex == 3)
		{
			this->label1->Text = L"Veillez renseigner le stock ";
			this->labelStock1->Visible = true;
			this->labelStock2->Visible = true;
			this->textBoxStock1->Visible = true;
			this->textBoxStock2->Visible = true;
			this->labelStockMagasin->Visible = true;
			this->comboBoxStockMagasin->Visible = true;
			this->dataGridView1->Visible = true;
		}
		if (this->comboBoxActionTable->SelectedIndex == 1 && this->comboBoxTable->SelectedIndex == 3)
		{
			this->label1->Text = L"Veillez renseigner le stock a modifier";
			this->labelStock1->Visible = true;
			this->labelStock2->Visible = true;
			this->textBoxStock1->Visible = true;
			this->textBoxStock2->Visible = true;
			this->labelStockMagasin->Visible = true;
			this->comboBoxStockMagasin->Visible = true;
			this->dataGridView1->Visible = true;
		}
		if (this->comboBoxActionTable->SelectedIndex == 2 && this->comboBoxTable->SelectedIndex == 3)
		{
			this->label1->Text = L"Veillez renseigner le stock a supprimer";
			this->labelStock1->Visible = true;
			this->labelStock2->Visible = false;
			this->textBoxStock1->Visible = true;
			this->textBoxStock2->Visible = false;
			this->labelStockMagasin->Visible = true;
			this->comboBoxStockMagasin->Visible = true;
			this->dataGridView1->Visible = true;
		}
		if (this->comboBoxActionTable->SelectedIndex == 0 && this->comboBoxTable->SelectedIndex == 2)
		{
			this->label1->Text = L"Veillez renseigner la commande";
			this->labelCommande1->Visible = true;
			this->labelCommande2->Visible = true;
			this->labelCommande3->Visible = true;
			this->labelCommande4->Visible = true;
			this->labelCommande5->Visible = true;
			this->labelCommande6->Visible = true;
			this->labelCommande7->Visible = true;
			this->labelCommande8->Visible = true;
			this->labelCommande9->Visible = true;
			this->textBoxCommande1->Visible = true;
			this->textBoxCommande2->Visible = true;
			this->textBoxCommande3->Visible = true;
			this->textBoxCommande4->Visible = true;
			this->textBoxCommande5->Visible = true;
			this->comboBoxCommande1->Visible = true;
			this->comboBoxCommande2->Visible = true;
			this->richTextBoxCommande1->Visible = true;
			this->richTextBoxCommande2->Visible = true;
			this->textBoxCommandeSuprimer->Visible = false;
			this->labelcommandeSuprimer->Visible = false;
			this->dataGridView1->Visible = true;
			this->monthCalendarCommande1->Visible = true;
			this->labelCommandeDate2->Visible = true;
			this->labelIDCommande->Visible = false;
			this->textBoxIDCommande->Visible = false;
		}
		if (this->comboBoxActionTable->SelectedIndex == 1 && this->comboBoxTable->SelectedIndex == 2)
		{
			this->label1->Text = L"Veillez renseigner la commande a modifier";
			this->labelCommande1->Visible = true;
			this->labelCommande2->Visible = true;
			this->labelCommande3->Visible = true;
			this->labelCommande4->Visible = true;
			this->labelCommande5->Visible = true;
			this->labelCommande6->Visible = true;
			this->labelCommande7->Visible = true;
			this->labelCommande8->Visible = true;
			this->labelCommande9->Visible = true;
			this->textBoxCommande1->Visible = true;
			this->textBoxCommande2->Visible = true;
			this->textBoxCommande3->Visible = true;
			this->textBoxCommande4->Visible = true;
			this->textBoxCommande5->Visible = true;
			this->comboBoxCommande1->Visible = true;
			this->comboBoxCommande2->Visible = true;
			this->richTextBoxCommande1->Visible = true;
			this->richTextBoxCommande2->Visible = true;
			this->textBoxCommandeSuprimer->Visible = false;
			this->labelcommandeSuprimer->Visible = false;
			this->dataGridView1->Visible = true;
			this->monthCalendarCommande1->Visible = true;
			this->labelCommandeDate2->Visible = true;
			this->labelIDCommande->Visible = true;
			this->textBoxIDCommande->Visible = true;
		}
		if (this->comboBoxActionTable->SelectedIndex == 2 && this->comboBoxTable->SelectedIndex == 2)
		{
			this->label1->Text = L"Veillez renseigner la commande a supprimer";
			this->labelCommande1->Visible = true;
			this->labelCommande2->Visible = true;
			this->labelCommande3->Visible = true;
			this->labelCommande4->Visible = false;
			this->labelCommande5->Visible = false;
			this->labelCommande6->Visible = false;
			this->labelCommande7->Visible = false;
			this->labelCommande8->Visible = false;
			this->labelCommande9->Visible = false;
			this->textBoxCommande1->Visible = true;
			this->textBoxCommande2->Visible = true;
			this->textBoxCommande3->Visible = true;
			this->textBoxCommande4->Visible = false;
			this->textBoxCommande5->Visible = false;
			this->comboBoxCommande1->Visible = false;
			this->comboBoxCommande2->Visible = false;
			this->richTextBoxCommande1->Visible = false;
			this->richTextBoxCommande2->Visible = false;
			this->textBoxCommandeSuprimer->Visible = true;
			this->labelcommandeSuprimer->Visible = true;
			this->dataGridView1->Visible = true;
			this->monthCalendarCommande1->Visible = false;
			this->labelCommandeDate2->Visible = false;
			this->labelIDCommande->Visible = false;
			this->textBoxIDCommande->Visible = false;
		}
	}
	private: System::Void comboBoxCalcul1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if (this->comboBoxCalcul1->SelectedIndex == 0)
		{
			this->label1->Text = L"voici le panier moyen apres remise";
			this->richTextBoxPanierMoyen1->Visible = true;
			this->labelCalculChiffre1->Visible = false;
			this->labelChiffre2->Visible = false;
			this->comboBoxChiffre1->Visible = false;
			this->textBoxChiffreAffaire1->Visible = false;
			this->richTextBoxValeurComercial1->Visible = false;
			this->richTextBoxValeurStock1->Visible = false;
			this->textBoxAchatClient1->Visible = false;
			this->textBoxAchatClient2->Visible = false;
			this->textBoxAchatClient3->Visible = false;
			this->textBoxAchatClient4->Visible = false;
			this->labelAchatClient1->Visible = false;
			this->labelAchatClient2->Visible = false;
			this->labelAchatClient3->Visible = false;
			this->labelAchatClient4->Visible = false;
		}
		if (this->comboBoxCalcul1->SelectedIndex == 1)
		{
			this->label1->Text = L"voici le chiffre d'affaire part rapport au mois";
			this->richTextBoxPanierMoyen1->Visible = false;
			this->labelCalculChiffre1->Visible = true;
			this->comboBoxChiffre1->Visible = true;
			this->labelChiffre2->Visible = true;
			this->textBoxChiffreAffaire1->Visible = true;
			this->richTextBoxValeurComercial1->Visible = false;
			this->richTextBoxValeurStock1->Visible = false;
			this->textBoxAchatClient1->Visible = false;
			this->textBoxAchatClient2->Visible = false;
			this->textBoxAchatClient3->Visible = false;
			this->textBoxAchatClient4->Visible = false;
			this->labelAchatClient1->Visible = false;
			this->labelAchatClient2->Visible = false;
			this->labelAchatClient3->Visible = false;
			this->labelAchatClient4->Visible = false;
		}
		if (this->comboBoxCalcul1->SelectedIndex == 2)
		{
			this->label1->Text = L"voici le panier total par rapport au client";
			this->richTextBoxPanierMoyen1->Visible = false;
			this->labelCalculChiffre1->Visible = false;
			this->comboBoxChiffre1->Visible = false;
			this->labelChiffre2->Visible = false;
			this->textBoxChiffreAffaire1->Visible = false;
			this->richTextBoxValeurComercial1->Visible = false;
			this->richTextBoxValeurStock1->Visible = false;
			this->textBoxAchatClient1->Visible = true;
			this->textBoxAchatClient2->Visible = true;
			this->textBoxAchatClient3->Visible = true;
			this->textBoxAchatClient4->Visible = true;
			this->labelAchatClient1->Visible = true;
			this->labelAchatClient2->Visible = true;
			this->labelAchatClient3->Visible = true;
			this->labelAchatClient4->Visible = true;

		}
		if (this->comboBoxCalcul1->SelectedIndex == 3)
		{
			this->label1->Text = L"voici le valeur commercial du stock";
			this->richTextBoxPanierMoyen1->Visible = false;
			this->labelCalculChiffre1->Visible = false;
			this->comboBoxChiffre1->Visible = false;
			this->labelChiffre2->Visible = false;
			this->textBoxChiffreAffaire1->Visible = false;
			this->richTextBoxValeurComercial1->Visible = true;
			this->richTextBoxValeurStock1->Visible = false;
			this->textBoxAchatClient1->Visible = false;
			this->textBoxAchatClient2->Visible = false;
			this->textBoxAchatClient3->Visible = false;
			this->textBoxAchatClient4->Visible = false;
			this->labelAchatClient1->Visible = false;
			this->labelAchatClient2->Visible = false;
			this->labelAchatClient3->Visible = false;
			this->labelAchatClient4->Visible = false;
		}
		if (this->comboBoxCalcul1->SelectedIndex == 4)
		{
			this->label1->Text = L"voici le valeur d'achat du stock";
			this->richTextBoxPanierMoyen1->Visible = false;
			this->labelCalculChiffre1->Visible = false;
			this->labelChiffre2->Visible = false;
			this->comboBoxChiffre1->Visible = false;
			this->textBoxChiffreAffaire1->Visible = false;
			this->richTextBoxValeurComercial1->Visible = false;
			this->richTextBoxValeurStock1->Visible = true;
			this->textBoxAchatClient1->Visible = false;
			this->textBoxAchatClient2->Visible = false;
			this->textBoxAchatClient3->Visible = false;
			this->textBoxAchatClient4->Visible = false;
			this->labelAchatClient1->Visible = false;
			this->labelAchatClient2->Visible = false;
			this->labelAchatClient3->Visible = false;
			this->labelAchatClient4->Visible = false;
		}
	}
	private: System::Void comboBoxIdentifie1_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
		if (this->comboBoxIdentifie1->SelectedIndex == 0)
		{
			this->label1->Text = L"liste des produit a reprovosioner";
			this->labelReaprovisionement2->Visible = true;
			this->comboBoxReaprovisionnerment1->Visible = true;
			this->richTextBoxReaprovisionement1->Visible = true;
			this->richTextBoxPlusVendu1->Visible = false;
			this->richTextBoxMoinVendu1->Visible = false;
		}
		if (this->comboBoxIdentifie1->SelectedIndex == 1)
		{
			this->label1->Text = L"produit les plus vendu";
			this->labelReaprovisionement2->Visible = false;
			this->comboBoxReaprovisionnerment1->Visible = false;
			this->richTextBoxReaprovisionement1->Visible = false;
			this->richTextBoxPlusVendu1->Visible = true;
			this->richTextBoxMoinVendu1->Visible = false;
		}
		if (this->comboBoxIdentifie1->SelectedIndex == 2)
		{
			this->label1->Text = L"produit les moins vendu";
			this->labelReaprovisionement2->Visible = false;
			this->comboBoxReaprovisionnerment1->Visible = false;
			this->richTextBoxReaprovisionement1->Visible = false;
			this->richTextBoxPlusVendu1->Visible = false;
			this->richTextBoxMoinVendu1->Visible = true;
		}
	}
	};
}
