#pragma once

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
	protected:
	private:
		/// <summary>
		/// Variable nécessaire au concepteur.
		/// </summary>
		System::ComponentModel::Container ^components;

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
			this->label1->Location = System::Drawing::Point(517, 19);
			this->label1->Name = L"label1";
			this->label1->Size = System::Drawing::Size(235, 17);
			this->label1->TabIndex = 5;
			this->label1->Text = L"Veillez choisir le gestionaire a ouvrir";
			this->label1->TextAlign = System::Drawing::ContentAlignment::MiddleCenter;
			// 
			// button1
			// 
			this->button1->Anchor = System::Windows::Forms::AnchorStyles::Bottom;
			this->button1->Location = System::Drawing::Point(592, 746);
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
			this->dataGridView1->Location = System::Drawing::Point(1104, 72);
			this->dataGridView1->Name = L"dataGridView1";
			this->dataGridView1->RowHeadersWidth = 51;
			this->dataGridView1->RowTemplate->Height = 24;
			this->dataGridView1->Size = System::Drawing::Size(238, 351);
			this->dataGridView1->TabIndex = 9;
			this->dataGridView1->Visible = false;
			// 
			// monthCalendarPersonel
			// 
			this->monthCalendarPersonel->Location = System::Drawing::Point(779, 166);
			this->monthCalendarPersonel->Name = L"monthCalendarPersonel";
			this->monthCalendarPersonel->TabIndex = 11;
			this->monthCalendarPersonel->Visible = false;
			// 
			// labelPersonel1
			// 
			this->labelPersonel1->AutoSize = true;
			this->labelPersonel1->Location = System::Drawing::Point(354, 93);
			this->labelPersonel1->Name = L"labelPersonel1";
			this->labelPersonel1->Size = System::Drawing::Size(37, 17);
			this->labelPersonel1->TabIndex = 12;
			this->labelPersonel1->Text = L"Nom";
			this->labelPersonel1->Visible = false;
			// 
			// labelPersonel2
			// 
			this->labelPersonel2->AutoSize = true;
			this->labelPersonel2->Location = System::Drawing::Point(354, 166);
			this->labelPersonel2->Name = L"labelPersonel2";
			this->labelPersonel2->Size = System::Drawing::Size(57, 17);
			this->labelPersonel2->TabIndex = 13;
			this->labelPersonel2->Text = L"Prenom";
			this->labelPersonel2->Visible = false;
			// 
			// labelPersonel3
			// 
			this->labelPersonel3->AutoSize = true;
			this->labelPersonel3->Location = System::Drawing::Point(354, 245);
			this->labelPersonel3->Name = L"labelPersonel3";
			this->labelPersonel3->Size = System::Drawing::Size(76, 17);
			this->labelPersonel3->TabIndex = 14;
			this->labelPersonel3->Text = L"Telephone";
			this->labelPersonel3->Visible = false;
			// 
			// labelPersonel4
			// 
			this->labelPersonel4->AutoSize = true;
			this->labelPersonel4->Location = System::Drawing::Point(848, 93);
			this->labelPersonel4->Name = L"labelPersonel4";
			this->labelPersonel4->Size = System::Drawing::Size(119, 17);
			this->labelPersonel4->TabIndex = 15;
			this->labelPersonel4->Text = L"Date d\'embauche";
			this->labelPersonel4->Visible = false;
			// 
			// labelPersonel5
			// 
			this->labelPersonel5->AutoSize = true;
			this->labelPersonel5->Location = System::Drawing::Point(354, 337);
			this->labelPersonel5->Name = L"labelPersonel5";
			this->labelPersonel5->Size = System::Drawing::Size(87, 17);
			this->labelPersonel5->TabIndex = 16;
			this->labelPersonel5->Text = L"ID Superieur";
			this->labelPersonel5->Visible = false;
			// 
			// labelPersonel6
			// 
			this->labelPersonel6->AutoSize = true;
			this->labelPersonel6->Location = System::Drawing::Point(354, 431);
			this->labelPersonel6->Name = L"labelPersonel6";
			this->labelPersonel6->Size = System::Drawing::Size(90, 17);
			this->labelPersonel6->TabIndex = 17;
			this->labelPersonel6->Text = L"Departement";
			this->labelPersonel6->Visible = false;
			// 
			// labelPersonel7
			// 
			this->labelPersonel7->AutoSize = true;
			this->labelPersonel7->Location = System::Drawing::Point(354, 523);
			this->labelPersonel7->Name = L"labelPersonel7";
			this->labelPersonel7->Size = System::Drawing::Size(60, 17);
			this->labelPersonel7->TabIndex = 18;
			this->labelPersonel7->Text = L"Adresse";
			this->labelPersonel7->Visible = false;
			// 
			// labelPersonel8
			// 
			this->labelPersonel8->AutoSize = true;
			this->labelPersonel8->Location = System::Drawing::Point(848, 431);
			this->labelPersonel8->Name = L"labelPersonel8";
			this->labelPersonel8->Size = System::Drawing::Size(44, 17);
			this->labelPersonel8->TabIndex = 19;
			this->labelPersonel8->Text = L"Poste";
			this->labelPersonel8->Visible = false;
			// 
			// labelPersonel9
			// 
			this->labelPersonel9->AutoSize = true;
			this->labelPersonel9->Location = System::Drawing::Point(848, 523);
			this->labelPersonel9->Name = L"labelPersonel9";
			this->labelPersonel9->Size = System::Drawing::Size(61, 17);
			this->labelPersonel9->TabIndex = 20;
			this->labelPersonel9->Text = L"Magasin";
			this->labelPersonel9->Visible = false;
			// 
			// textBoxPersonel1
			// 
			this->textBoxPersonel1->Location = System::Drawing::Point(357, 129);
			this->textBoxPersonel1->Name = L"textBoxPersonel1";
			this->textBoxPersonel1->Size = System::Drawing::Size(100, 22);
			this->textBoxPersonel1->TabIndex = 21;
			this->textBoxPersonel1->Visible = false;
			// 
			// textBoxPersonel2
			// 
			this->textBoxPersonel2->Location = System::Drawing::Point(357, 201);
			this->textBoxPersonel2->Name = L"textBoxPersonel2";
			this->textBoxPersonel2->Size = System::Drawing::Size(100, 22);
			this->textBoxPersonel2->TabIndex = 22;
			this->textBoxPersonel2->Visible = false;
			// 
			// textBoxPersonel3
			// 
			this->textBoxPersonel3->Location = System::Drawing::Point(357, 287);
			this->textBoxPersonel3->Name = L"textBoxPersonel3";
			this->textBoxPersonel3->Size = System::Drawing::Size(100, 22);
			this->textBoxPersonel3->TabIndex = 23;
			this->textBoxPersonel3->Visible = false;
			// 
			// textBoxPersonel4
			// 
			this->textBoxPersonel4->Location = System::Drawing::Point(357, 387);
			this->textBoxPersonel4->Name = L"textBoxPersonel4";
			this->textBoxPersonel4->Size = System::Drawing::Size(100, 22);
			this->textBoxPersonel4->TabIndex = 24;
			this->textBoxPersonel4->Visible = false;
			// 
			// textBoxPersonel5
			// 
			this->textBoxPersonel5->Location = System::Drawing::Point(357, 574);
			this->textBoxPersonel5->Name = L"textBoxPersonel5";
			this->textBoxPersonel5->Size = System::Drawing::Size(100, 22);
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
			this->comboBoxPersonel1->Location = System::Drawing::Point(357, 478);
			this->comboBoxPersonel1->Name = L"comboBoxPersonel1";
			this->comboBoxPersonel1->Size = System::Drawing::Size(100, 24);
			this->comboBoxPersonel1->TabIndex = 26;
			this->comboBoxPersonel1->Visible = false;
			// 
			// comboBoxPersonel2
			// 
			this->comboBoxPersonel2->FormattingEnabled = true;
			this->comboBoxPersonel2->Items->AddRange(gcnew cli::array< System::Object^  >(11) {
				L"PDG (Président Directeur Général)", L"COO (Chief Operating Officer)",
					L"CFO (Chief Financial Officer)", L"DRH", L"Directeur Marketing ", L"Directeur Commercial", L"Directeur des Ventes", L"Chef de Projet",
					L"Responsable de Département", L"Spécialiste", L"Employé"
			});
			this->comboBoxPersonel2->Location = System::Drawing::Point(851, 478);
			this->comboBoxPersonel2->Name = L"comboBoxPersonel2";
			this->comboBoxPersonel2->Size = System::Drawing::Size(100, 24);
			this->comboBoxPersonel2->TabIndex = 27;
			this->comboBoxPersonel2->Visible = false;
			// 
			// comboBoxPersonel3
			// 
			this->comboBoxPersonel3->FormattingEnabled = true;
			this->comboBoxPersonel3->Items->AddRange(gcnew cli::array< System::Object^  >(40) {
				L"Cesinfo Paris", L"Cesinfo Marseille",
					L"Cesinfo Lyon", L"Cesinfo Toulouse", L"Cesinfo Nice", L"Cesinfo Nantes", L"Cesinfo Strasbourg", L"Cesinfo Montpellier", L"Cesinfo Bordeaux",
					L"Cesinfo Lille", L"Cesinfo Rennes", L"Cesinfo Le Havre", L"Cesinfo Reims", L"Cesinfo Saint-Étienne", L"Cesinfo Toulon", L"Cesinfo Grenoble",
					L"Cesinfo Dijon", L"Cesinfo Angers", L"Cesinfo Villeurbanne", L"Cesinfo Le Mans", L"Cesinfo Aix-en-Provence", L"Cesinfo Brest",
					L"Cesinfo Tours", L"Cesinfo Amiens", L"Cesinfo Limoges", L"Cesinfo Annecy", L"Cesinfo Perpignan", L"Cesinfo Besançon", L"Cesinfo Boulogne-Billancourt",
					L"Cesinfo Orléans", L"Cesinfo Mulhouse", L"Cesinfo Caen", L"Cesinfo Nancy", L"Cesinfo Argenteuil", L"Cesinfo Rouen", L"Cesinfo Montreuil",
					L"Cesinfo Saint-Denis", L"Cesinfo Avignon", L"Cesinfo Nanterre", L"Cesinfo Poitiers"
			});
			this->comboBoxPersonel3->Location = System::Drawing::Point(851, 574);
			this->comboBoxPersonel3->Name = L"comboBoxPersonel3";
			this->comboBoxPersonel3->Size = System::Drawing::Size(100, 24);
			this->comboBoxPersonel3->TabIndex = 28;
			this->comboBoxPersonel3->Visible = false;
			// 
			// labelClient1
			// 
			this->labelClient1->AutoSize = true;
			this->labelClient1->Location = System::Drawing::Point(354, 93);
			this->labelClient1->Name = L"labelClient1";
			this->labelClient1->Size = System::Drawing::Size(37, 17);
			this->labelClient1->TabIndex = 31;
			this->labelClient1->Text = L"Nom";
			this->labelClient1->Visible = false;
			// 
			// labelClient2
			// 
			this->labelClient2->AutoSize = true;
			this->labelClient2->Location = System::Drawing::Point(354, 166);
			this->labelClient2->Name = L"labelClient2";
			this->labelClient2->Size = System::Drawing::Size(57, 17);
			this->labelClient2->TabIndex = 32;
			this->labelClient2->Text = L"Prenom";
			this->labelClient2->Visible = false;
			// 
			// labelClient3
			// 
			this->labelClient3->AutoSize = true;
			this->labelClient3->Location = System::Drawing::Point(354, 245);
			this->labelClient3->Name = L"labelClient3";
			this->labelClient3->Size = System::Drawing::Size(108, 17);
			this->labelClient3->TabIndex = 33;
			this->labelClient3->Text = L"Numero compte";
			this->labelClient3->Visible = false;
			// 
			// labelClient4
			// 
			this->labelClient4->AutoSize = true;
			this->labelClient4->Location = System::Drawing::Point(848, 93);
			this->labelClient4->Name = L"labelClient4";
			this->labelClient4->Size = System::Drawing::Size(126, 17);
			this->labelClient4->TabIndex = 34;
			this->labelClient4->Text = L"Date de naissance";
			this->labelClient4->Visible = false;
			// 
			// labelClient6
			// 
			this->labelClient6->AutoSize = true;
			this->labelClient6->Location = System::Drawing::Point(848, 523);
			this->labelClient6->Name = L"labelClient6";
			this->labelClient6->Size = System::Drawing::Size(76, 17);
			this->labelClient6->TabIndex = 35;
			this->labelClient6->Text = L"Telephone";
			this->labelClient6->Visible = false;
			// 
			// labelClient7
			// 
			this->labelClient7->AutoSize = true;
			this->labelClient7->Location = System::Drawing::Point(848, 431);
			this->labelClient7->Name = L"labelClient7";
			this->labelClient7->Size = System::Drawing::Size(105, 17);
			this->labelClient7->TabIndex = 36;
			this->labelClient7->Text = L"Point de fidelite";
			this->labelClient7->Visible = false;
			// 
			// labelClient5
			// 
			this->labelClient5->AutoSize = true;
			this->labelClient5->Location = System::Drawing::Point(354, 337);
			this->labelClient5->Name = L"labelClient5";
			this->labelClient5->Size = System::Drawing::Size(33, 17);
			this->labelClient5->TabIndex = 37;
			this->labelClient5->Text = L"Mail";
			this->labelClient5->Visible = false;
			// 
			// labelClient8
			// 
			this->labelClient8->AutoSize = true;
			this->labelClient8->Location = System::Drawing::Point(354, 523);
			this->labelClient8->Name = L"labelClient8";
			this->labelClient8->Size = System::Drawing::Size(60, 17);
			this->labelClient8->TabIndex = 38;
			this->labelClient8->Text = L"Adresse";
			this->labelClient8->Visible = false;
			// 
			// labelClient9
			// 
			this->labelClient9->AutoSize = true;
			this->labelClient9->Location = System::Drawing::Point(354, 431);
			this->labelClient9->Name = L"labelClient9";
			this->labelClient9->Size = System::Drawing::Size(90, 17);
			this->labelClient9->TabIndex = 39;
			this->labelClient9->Text = L"Departement";
			this->labelClient9->Visible = false;
			// 
			// monthCalendarClient
			// 
			this->monthCalendarClient->Location = System::Drawing::Point(779, 166);
			this->monthCalendarClient->Name = L"monthCalendarClient";
			this->monthCalendarClient->TabIndex = 40;
			this->monthCalendarClient->Visible = false;
			// 
			// textBoxClient1
			// 
			this->textBoxClient1->Location = System::Drawing::Point(357, 129);
			this->textBoxClient1->Name = L"textBoxClient1";
			this->textBoxClient1->Size = System::Drawing::Size(100, 22);
			this->textBoxClient1->TabIndex = 41;
			this->textBoxClient1->Visible = false;
			// 
			// textBoxClient2
			// 
			this->textBoxClient2->Location = System::Drawing::Point(357, 201);
			this->textBoxClient2->Name = L"textBoxClient2";
			this->textBoxClient2->Size = System::Drawing::Size(100, 22);
			this->textBoxClient2->TabIndex = 42;
			this->textBoxClient2->Visible = false;
			// 
			// textBoxClient3
			// 
			this->textBoxClient3->Location = System::Drawing::Point(357, 287);
			this->textBoxClient3->Name = L"textBoxClient3";
			this->textBoxClient3->Size = System::Drawing::Size(100, 22);
			this->textBoxClient3->TabIndex = 43;
			this->textBoxClient3->Visible = false;
			// 
			// textBoxClient4
			// 
			this->textBoxClient4->Location = System::Drawing::Point(357, 387);
			this->textBoxClient4->Name = L"textBoxClient4";
			this->textBoxClient4->Size = System::Drawing::Size(100, 22);
			this->textBoxClient4->TabIndex = 44;
			this->textBoxClient4->Visible = false;
			// 
			// textBoxClient5
			// 
			this->textBoxClient5->Location = System::Drawing::Point(357, 574);
			this->textBoxClient5->Name = L"textBoxClient5";
			this->textBoxClient5->Size = System::Drawing::Size(100, 22);
			this->textBoxClient5->TabIndex = 45;
			this->textBoxClient5->Visible = false;
			// 
			// textBoxClient6
			// 
			this->textBoxClient6->Location = System::Drawing::Point(851, 576);
			this->textBoxClient6->Name = L"textBoxClient6";
			this->textBoxClient6->Size = System::Drawing::Size(100, 22);
			this->textBoxClient6->TabIndex = 46;
			this->textBoxClient6->Visible = false;
			// 
			// textBoxClient7
			// 
			this->textBoxClient7->Location = System::Drawing::Point(851, 480);
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
			this->comboBoxClient1->Location = System::Drawing::Point(357, 478);
			this->comboBoxClient1->Name = L"comboBoxClient1";
			this->comboBoxClient1->Size = System::Drawing::Size(100, 24);
			this->comboBoxClient1->TabIndex = 48;
			this->comboBoxClient1->Visible = false;
			// 
			// comboBoxStockMagasin
			// 
			this->comboBoxStockMagasin->FormattingEnabled = true;
			this->comboBoxStockMagasin->Items->AddRange(gcnew cli::array< System::Object^  >(40) {
				L"Cesinfo Paris", L"Cesinfo Marseille",
					L"Cesinfo Lyon", L"Cesinfo Toulouse", L"Cesinfo Nice", L"Cesinfo Nantes", L"Cesinfo Strasbourg", L"Cesinfo Montpellier", L"Cesinfo Bordeaux",
					L"Cesinfo Lille", L"Cesinfo Rennes", L"Cesinfo Le Havre", L"Cesinfo Reims", L"Cesinfo Saint-Étienne", L"Cesinfo Toulon", L"Cesinfo Grenoble",
					L"Cesinfo Dijon", L"Cesinfo Angers", L"Cesinfo Villeurbanne", L"Cesinfo Le Mans", L"Cesinfo Aix-en-Provence", L"Cesinfo Brest",
					L"Cesinfo Tours", L"Cesinfo Amiens", L"Cesinfo Limoges", L"Cesinfo Annecy", L"Cesinfo Perpignan", L"Cesinfo Besançon", L"Cesinfo Boulogne-Billancourt",
					L"Cesinfo Orléans", L"Cesinfo Mulhouse", L"Cesinfo Caen", L"Cesinfo Nancy", L"Cesinfo Argenteuil", L"Cesinfo Rouen", L"Cesinfo Montreuil",
					L"Cesinfo Saint-Denis", L"Cesinfo Avignon", L"Cesinfo Nanterre", L"Cesinfo Poitiers"
			});
			this->comboBoxStockMagasin->Location = System::Drawing::Point(572, 129);
			this->comboBoxStockMagasin->Name = L"comboBoxStockMagasin";
			this->comboBoxStockMagasin->Size = System::Drawing::Size(131, 24);
			this->comboBoxStockMagasin->TabIndex = 51;
			this->comboBoxStockMagasin->Visible = false;
			// 
			// textBoxStock1
			// 
			this->textBoxStock1->Location = System::Drawing::Point(582, 240);
			this->textBoxStock1->Name = L"textBoxStock1";
			this->textBoxStock1->Size = System::Drawing::Size(100, 22);
			this->textBoxStock1->TabIndex = 54;
			this->textBoxStock1->Visible = false;
			// 
			// textBoxStock2
			// 
			this->textBoxStock2->Location = System::Drawing::Point(582, 372);
			this->textBoxStock2->Name = L"textBoxStock2";
			this->textBoxStock2->Size = System::Drawing::Size(100, 22);
			this->textBoxStock2->TabIndex = 55;
			this->textBoxStock2->Visible = false;
			// 
			// labelStock1
			// 
			this->labelStock1->AutoSize = true;
			this->labelStock1->Location = System::Drawing::Point(605, 201);
			this->labelStock1->Name = L"labelStock1";
			this->labelStock1->Size = System::Drawing::Size(53, 17);
			this->labelStock1->TabIndex = 56;
			this->labelStock1->Text = L"Produit";
			this->labelStock1->Visible = false;
			// 
			// labelStock2
			// 
			this->labelStock2->AutoSize = true;
			this->labelStock2->Location = System::Drawing::Point(604, 314);
			this->labelStock2->Name = L"labelStock2";
			this->labelStock2->Size = System::Drawing::Size(62, 17);
			this->labelStock2->TabIndex = 57;
			this->labelStock2->Text = L"Quantité";
			this->labelStock2->Visible = false;
			// 
			// labelStockMagasin
			// 
			this->labelStockMagasin->AutoSize = true;
			this->labelStockMagasin->Location = System::Drawing::Point(604, 93);
			this->labelStockMagasin->Name = L"labelStockMagasin";
			this->labelStockMagasin->Size = System::Drawing::Size(61, 17);
			this->labelStockMagasin->TabIndex = 60;
			this->labelStockMagasin->Text = L"Magasin";
			this->labelStockMagasin->Visible = false;
			// 
			// labelCommande1
			// 
			this->labelCommande1->AutoSize = true;
			this->labelCommande1->Location = System::Drawing::Point(354, 93);
			this->labelCommande1->Name = L"labelCommande1";
			this->labelCommande1->Size = System::Drawing::Size(37, 17);
			this->labelCommande1->TabIndex = 61;
			this->labelCommande1->Text = L"Nom";
			this->labelCommande1->Visible = false;
			// 
			// labelCommande2
			// 
			this->labelCommande2->AutoSize = true;
			this->labelCommande2->Location = System::Drawing::Point(354, 166);
			this->labelCommande2->Name = L"labelCommande2";
			this->labelCommande2->Size = System::Drawing::Size(57, 17);
			this->labelCommande2->TabIndex = 62;
			this->labelCommande2->Text = L"Prenom";
			this->labelCommande2->Visible = false;
			// 
			// textBoxCommande1
			// 
			this->textBoxCommande1->Location = System::Drawing::Point(357, 131);
			this->textBoxCommande1->Name = L"textBoxCommande1";
			this->textBoxCommande1->Size = System::Drawing::Size(100, 22);
			this->textBoxCommande1->TabIndex = 63;
			this->textBoxCommande1->Visible = false;
			// 
			// textBoxCommande2
			// 
			this->textBoxCommande2->Location = System::Drawing::Point(357, 201);
			this->textBoxCommande2->Name = L"textBoxCommande2";
			this->textBoxCommande2->Size = System::Drawing::Size(100, 22);
			this->textBoxCommande2->TabIndex = 64;
			this->textBoxCommande2->Visible = false;
			// 
			// labelCommande3
			// 
			this->labelCommande3->AutoSize = true;
			this->labelCommande3->Location = System::Drawing::Point(354, 245);
			this->labelCommande3->Name = L"labelCommande3";
			this->labelCommande3->Size = System::Drawing::Size(108, 17);
			this->labelCommande3->TabIndex = 65;
			this->labelCommande3->Text = L"Numero compte";
			this->labelCommande3->Visible = false;
			// 
			// textBoxCommande3
			// 
			this->textBoxCommande3->Location = System::Drawing::Point(357, 287);
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
			this->comboBoxCommande1->Location = System::Drawing::Point(357, 387);
			this->comboBoxCommande1->Name = L"comboBoxCommande1";
			this->comboBoxCommande1->Size = System::Drawing::Size(100, 24);
			this->comboBoxCommande1->TabIndex = 67;
			this->comboBoxCommande1->Visible = false;
			// 
			// labelCommande4
			// 
			this->labelCommande4->AutoSize = true;
			this->labelCommande4->Location = System::Drawing::Point(354, 337);
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
			this->comboBoxCommande2->Location = System::Drawing::Point(357, 574);
			this->comboBoxCommande2->Name = L"comboBoxCommande2";
			this->comboBoxCommande2->Size = System::Drawing::Size(100, 24);
			this->comboBoxCommande2->TabIndex = 71;
			this->comboBoxCommande2->Visible = false;
			// 
			// richTextBoxCommande1
			// 
			this->richTextBoxCommande1->Location = System::Drawing::Point(779, 166);
			this->richTextBoxCommande1->Name = L"richTextBoxCommande1";
			this->richTextBoxCommande1->Size = System::Drawing::Size(262, 207);
			this->richTextBoxCommande1->TabIndex = 72;
			this->richTextBoxCommande1->Text = L"";
			this->richTextBoxCommande1->Visible = false;
			// 
			// labelCommande5
			// 
			this->labelCommande5->AutoSize = true;
			this->labelCommande5->Location = System::Drawing::Point(848, 93);
			this->labelCommande5->Name = L"labelCommande5";
			this->labelCommande5->Size = System::Drawing::Size(104, 17);
			this->labelCommande5->TabIndex = 73;
			this->labelCommande5->Text = L"Liste des achat";
			this->labelCommande5->Visible = false;
			// 
			// labelCommande6
			// 
			this->labelCommande6->AutoSize = true;
			this->labelCommande6->Location = System::Drawing::Point(848, 431);
			this->labelCommande6->Name = L"labelCommande6";
			this->labelCommande6->Size = System::Drawing::Size(48, 17);
			this->labelCommande6->TabIndex = 74;
			this->labelCommande6->Text = L"Marge";
			this->labelCommande6->Visible = false;
			// 
			// labelCommande7
			// 
			this->labelCommande7->AutoSize = true;
			this->labelCommande7->Location = System::Drawing::Point(354, 431);
			this->labelCommande7->Name = L"labelCommande7";
			this->labelCommande7->Size = System::Drawing::Size(55, 17);
			this->labelCommande7->TabIndex = 75;
			this->labelCommande7->Text = L"Remise";
			this->labelCommande7->Visible = false;
			// 
			// labelCommande8
			// 
			this->labelCommande8->AutoSize = true;
			this->labelCommande8->Location = System::Drawing::Point(356, 523);
			this->labelCommande8->Name = L"labelCommande8";
			this->labelCommande8->Size = System::Drawing::Size(35, 17);
			this->labelCommande8->TabIndex = 76;
			this->labelCommande8->Text = L"TVA";
			this->labelCommande8->Visible = false;
			// 
			// textBoxCommande4
			// 
			this->textBoxCommande4->Location = System::Drawing::Point(851, 480);
			this->textBoxCommande4->Name = L"textBoxCommande4";
			this->textBoxCommande4->Size = System::Drawing::Size(100, 22);
			this->textBoxCommande4->TabIndex = 77;
			this->textBoxCommande4->Visible = false;
			// 
			// textBoxCommande5
			// 
			this->textBoxCommande5->Location = System::Drawing::Point(357, 480);
			this->textBoxCommande5->Name = L"textBoxCommande5";
			this->textBoxCommande5->Size = System::Drawing::Size(100, 22);
			this->textBoxCommande5->TabIndex = 78;
			this->textBoxCommande5->Visible = false;
			// 
			// richTextBoxCommande2
			// 
			this->richTextBoxCommande2->Location = System::Drawing::Point(851, 574);
			this->richTextBoxCommande2->Name = L"richTextBoxCommande2";
			this->richTextBoxCommande2->Size = System::Drawing::Size(262, 38);
			this->richTextBoxCommande2->TabIndex = 79;
			this->richTextBoxCommande2->Text = L"";
			this->richTextBoxCommande2->Visible = false;
			// 
			// labelCommande9
			// 
			this->labelCommande9->AutoSize = true;
			this->labelCommande9->Location = System::Drawing::Point(846, 523);
			this->labelCommande9->Name = L"labelCommande9";
			this->labelCommande9->Size = System::Drawing::Size(184, 17);
			this->labelCommande9->TabIndex = 80;
			this->labelCommande9->Text = L"Adresse facturation/livration";
			this->labelCommande9->Visible = false;
			// 
			// labelcommandeSuprimer
			// 
			this->labelcommandeSuprimer->AutoSize = true;
			this->labelcommandeSuprimer->Location = System::Drawing::Point(354, 337);
			this->labelcommandeSuprimer->Name = L"labelcommandeSuprimer";
			this->labelcommandeSuprimer->Size = System::Drawing::Size(98, 17);
			this->labelcommandeSuprimer->TabIndex = 81;
			this->labelcommandeSuprimer->Text = L"ID_commande";
			this->labelcommandeSuprimer->Visible = false;
			// 
			// textBoxCommandeSuprimer
			// 
			this->textBoxCommandeSuprimer->Location = System::Drawing::Point(357, 387);
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
			this->richTextBoxPanierMoyen1->Location = System::Drawing::Point(520, 240);
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
			this->comboBoxChiffre1->Location = System::Drawing::Point(572, 129);
			this->comboBoxChiffre1->Name = L"comboBoxChiffre1";
			this->comboBoxChiffre1->Size = System::Drawing::Size(131, 24);
			this->comboBoxChiffre1->TabIndex = 86;
			this->comboBoxChiffre1->Visible = false;
			// 
			// labelCalculChiffre1
			// 
			this->labelCalculChiffre1->AutoSize = true;
			this->labelCalculChiffre1->Location = System::Drawing::Point(608, 95);
			this->labelCalculChiffre1->Name = L"labelCalculChiffre1";
			this->labelCalculChiffre1->Size = System::Drawing::Size(37, 17);
			this->labelCalculChiffre1->TabIndex = 87;
			this->labelCalculChiffre1->Text = L"Mois";
			this->labelCalculChiffre1->Visible = false;
			// 
			// labelChiffre2
			// 
			this->labelChiffre2->AutoSize = true;
			this->labelChiffre2->Location = System::Drawing::Point(591, 331);
			this->labelChiffre2->Name = L"labelChiffre2";
			this->labelChiffre2->Size = System::Drawing::Size(91, 17);
			this->labelChiffre2->TabIndex = 88;
			this->labelChiffre2->Text = L"chiffre affaire";
			this->labelChiffre2->Visible = false;
			// 
			// textBoxChiffreAffaire1
			// 
			this->textBoxChiffreAffaire1->Location = System::Drawing::Point(582, 351);
			this->textBoxChiffreAffaire1->Name = L"textBoxChiffreAffaire1";
			this->textBoxChiffreAffaire1->Size = System::Drawing::Size(100, 22);
			this->textBoxChiffreAffaire1->TabIndex = 89;
			this->textBoxChiffreAffaire1->Visible = false;
			// 
			// richTextBoxValeurStock1
			// 
			this->richTextBoxValeurStock1->Location = System::Drawing::Point(520, 242);
			this->richTextBoxValeurStock1->Name = L"richTextBoxValeurStock1";
			this->richTextBoxValeurStock1->Size = System::Drawing::Size(262, 207);
			this->richTextBoxValeurStock1->TabIndex = 90;
			this->richTextBoxValeurStock1->Text = L"";
			this->richTextBoxValeurStock1->Visible = false;
			// 
			// richTextBoxValeurComercial1
			// 
			this->richTextBoxValeurComercial1->Location = System::Drawing::Point(520, 240);
			this->richTextBoxValeurComercial1->Name = L"richTextBoxValeurComercial1";
			this->richTextBoxValeurComercial1->Size = System::Drawing::Size(262, 207);
			this->richTextBoxValeurComercial1->TabIndex = 91;
			this->richTextBoxValeurComercial1->Text = L"";
			this->richTextBoxValeurComercial1->Visible = false;
			// 
			// textBoxAchatClient1
			// 
			this->textBoxAchatClient1->Location = System::Drawing::Point(874, 196);
			this->textBoxAchatClient1->Name = L"textBoxAchatClient1";
			this->textBoxAchatClient1->Size = System::Drawing::Size(100, 22);
			this->textBoxAchatClient1->TabIndex = 92;
			this->textBoxAchatClient1->Visible = false;
			// 
			// labelAchatClient1
			// 
			this->labelAchatClient1->AutoSize = true;
			this->labelAchatClient1->Location = System::Drawing::Point(881, 129);
			this->labelAchatClient1->Name = L"labelAchatClient1";
			this->labelAchatClient1->Size = System::Drawing::Size(93, 17);
			this->labelAchatClient1->TabIndex = 93;
			this->labelAchatClient1->Text = L"numero client";
			this->labelAchatClient1->Visible = false;
			// 
			// labelAchatClient3
			// 
			this->labelAchatClient3->AutoSize = true;
			this->labelAchatClient3->Location = System::Drawing::Point(364, 129);
			this->labelAchatClient3->Name = L"labelAchatClient3";
			this->labelAchatClient3->Size = System::Drawing::Size(37, 17);
			this->labelAchatClient3->TabIndex = 94;
			this->labelAchatClient3->Text = L"Nom";
			this->labelAchatClient3->Visible = false;
			// 
			// labelAchatClient2
			// 
			this->labelAchatClient2->AutoSize = true;
			this->labelAchatClient2->Location = System::Drawing::Point(591, 129);
			this->labelAchatClient2->Name = L"labelAchatClient2";
			this->labelAchatClient2->Size = System::Drawing::Size(57, 17);
			this->labelAchatClient2->TabIndex = 95;
			this->labelAchatClient2->Text = L"Prenom";
			this->labelAchatClient2->Visible = false;
			// 
			// textBoxAchatClient3
			// 
			this->textBoxAchatClient3->Location = System::Drawing::Point(357, 196);
			this->textBoxAchatClient3->Name = L"textBoxAchatClient3";
			this->textBoxAchatClient3->Size = System::Drawing::Size(100, 22);
			this->textBoxAchatClient3->TabIndex = 96;
			this->textBoxAchatClient3->Visible = false;
			// 
			// textBoxAchatClient2
			// 
			this->textBoxAchatClient2->Location = System::Drawing::Point(584, 196);
			this->textBoxAchatClient2->Name = L"textBoxAchatClient2";
			this->textBoxAchatClient2->Size = System::Drawing::Size(100, 22);
			this->textBoxAchatClient2->TabIndex = 97;
			this->textBoxAchatClient2->Visible = false;
			// 
			// labelAchatClient4
			// 
			this->labelAchatClient4->AutoSize = true;
			this->labelAchatClient4->Location = System::Drawing::Point(564, 314);
			this->labelAchatClient4->Name = L"labelAchatClient4";
			this->labelAchatClient4->Size = System::Drawing::Size(139, 17);
			this->labelAchatClient4->TabIndex = 98;
			this->labelAchatClient4->Text = L"Achat Total du Client";
			this->labelAchatClient4->Visible = false;
			// 
			// textBoxAchatClient4
			// 
			this->textBoxAchatClient4->Location = System::Drawing::Point(584, 372);
			this->textBoxAchatClient4->Name = L"textBoxAchatClient4";
			this->textBoxAchatClient4->Size = System::Drawing::Size(100, 22);
			this->textBoxAchatClient4->TabIndex = 99;
			this->textBoxAchatClient4->Visible = false;
			// 
			// comboBoxReaprovisionnerment1
			// 
			this->comboBoxReaprovisionnerment1->FormattingEnabled = true;
			this->comboBoxReaprovisionnerment1->Items->AddRange(gcnew cli::array< System::Object^  >(40) {
				L"Cesinfo Paris", L"Cesinfo Marseille",
					L"Cesinfo Lyon", L"Cesinfo Toulouse", L"Cesinfo Nice", L"Cesinfo Nantes", L"Cesinfo Strasbourg", L"Cesinfo Montpellier", L"Cesinfo Bordeaux",
					L"Cesinfo Lille", L"Cesinfo Rennes", L"Cesinfo Le Havre", L"Cesinfo Reims", L"Cesinfo Saint-Étienne", L"Cesinfo Toulon", L"Cesinfo Grenoble",
					L"Cesinfo Dijon", L"Cesinfo Angers", L"Cesinfo Villeurbanne", L"Cesinfo Le Mans", L"Cesinfo Aix-en-Provence", L"Cesinfo Brest",
					L"Cesinfo Tours", L"Cesinfo Amiens", L"Cesinfo Limoges", L"Cesinfo Annecy", L"Cesinfo Perpignan", L"Cesinfo Besançon", L"Cesinfo Boulogne-Billancourt",
					L"Cesinfo Orléans", L"Cesinfo Mulhouse", L"Cesinfo Caen", L"Cesinfo Nancy", L"Cesinfo Argenteuil", L"Cesinfo Rouen", L"Cesinfo Montreuil",
					L"Cesinfo Saint-Denis", L"Cesinfo Avignon", L"Cesinfo Nanterre", L"Cesinfo Poitiers"
			});
			this->comboBoxReaprovisionnerment1->Location = System::Drawing::Point(572, 194);
			this->comboBoxReaprovisionnerment1->Name = L"comboBoxReaprovisionnerment1";
			this->comboBoxReaprovisionnerment1->Size = System::Drawing::Size(131, 24);
			this->comboBoxReaprovisionnerment1->TabIndex = 101;
			this->comboBoxReaprovisionnerment1->Visible = false;
			// 
			// labelReaprovisionement2
			// 
			this->labelReaprovisionement2->AutoSize = true;
			this->labelReaprovisionement2->Location = System::Drawing::Point(608, 169);
			this->labelReaprovisionement2->Name = L"labelReaprovisionement2";
			this->labelReaprovisionement2->Size = System::Drawing::Size(61, 17);
			this->labelReaprovisionement2->TabIndex = 102;
			this->labelReaprovisionement2->Text = L"Magasin";
			this->labelReaprovisionement2->Visible = false;
			// 
			// richTextBoxReaprovisionement1
			// 
			this->richTextBoxReaprovisionement1->Location = System::Drawing::Point(520, 240);
			this->richTextBoxReaprovisionement1->Name = L"richTextBoxReaprovisionement1";
			this->richTextBoxReaprovisionement1->Size = System::Drawing::Size(262, 207);
			this->richTextBoxReaprovisionement1->TabIndex = 103;
			this->richTextBoxReaprovisionement1->Text = L"";
			this->richTextBoxReaprovisionement1->Visible = false;
			// 
			// richTextBoxPlusVendu1
			// 
			this->richTextBoxPlusVendu1->Location = System::Drawing::Point(520, 240);
			this->richTextBoxPlusVendu1->Name = L"richTextBoxPlusVendu1";
			this->richTextBoxPlusVendu1->Size = System::Drawing::Size(262, 207);
			this->richTextBoxPlusVendu1->TabIndex = 104;
			this->richTextBoxPlusVendu1->Text = L"";
			this->richTextBoxPlusVendu1->Visible = false;
			// 
			// richTextBoxMoinVendu1
			// 
			this->richTextBoxMoinVendu1->Location = System::Drawing::Point(520, 241);
			this->richTextBoxMoinVendu1->Name = L"richTextBoxMoinVendu1";
			this->richTextBoxMoinVendu1->Size = System::Drawing::Size(262, 207);
			this->richTextBoxMoinVendu1->TabIndex = 105;
			this->richTextBoxMoinVendu1->Text = L"";
			this->richTextBoxMoinVendu1->Visible = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1354, 839);
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
