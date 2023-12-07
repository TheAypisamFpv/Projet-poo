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
	private: System::Windows::Forms::ComboBox^ comboBoxActionStat;
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
	private: System::Windows::Forms::Label^ labelPersonelSuprimer;
	private: System::Windows::Forms::TextBox^ textBoxPersonelSuprimer;
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
	private: System::Windows::Forms::Label^ labelClientSuprimer;
	private: System::Windows::Forms::TextBox^ textBoxClientSuprimer;
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
			this->comboBoxActionStat = (gcnew System::Windows::Forms::ComboBox());
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
			this->labelPersonelSuprimer = (gcnew System::Windows::Forms::Label());
			this->textBoxPersonelSuprimer = (gcnew System::Windows::Forms::TextBox());
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
			this->labelClientSuprimer = (gcnew System::Windows::Forms::Label());
			this->textBoxClientSuprimer = (gcnew System::Windows::Forms::TextBox());
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
			// comboBoxActionStat
			// 
			this->comboBoxActionStat->FormattingEnabled = true;
			this->comboBoxActionStat->Items->AddRange(gcnew cli::array< System::Object^  >(1) { L"Calcul" });
			this->comboBoxActionStat->Location = System::Drawing::Point(40, 72);
			this->comboBoxActionStat->Name = L"comboBoxActionStat";
			this->comboBoxActionStat->Size = System::Drawing::Size(129, 24);
			this->comboBoxActionStat->TabIndex = 10;
			this->comboBoxActionStat->Visible = false;
			this->comboBoxActionStat->SelectedIndexChanged += gcnew System::EventHandler(this, &MyForm::comboBoxActionStat_SelectedIndexChanged);
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
			// labelPersonelSuprimer
			// 
			this->labelPersonelSuprimer->AutoSize = true;
			this->labelPersonelSuprimer->Location = System::Drawing::Point(589, 245);
			this->labelPersonelSuprimer->Name = L"labelPersonelSuprimer";
			this->labelPersonelSuprimer->Size = System::Drawing::Size(84, 17);
			this->labelPersonelSuprimer->TabIndex = 29;
			this->labelPersonelSuprimer->Text = L"ID_personel";
			this->labelPersonelSuprimer->Visible = false;
			// 
			// textBoxPersonelSuprimer
			// 
			this->textBoxPersonelSuprimer->Location = System::Drawing::Point(592, 287);
			this->textBoxPersonelSuprimer->Name = L"textBoxPersonelSuprimer";
			this->textBoxPersonelSuprimer->Size = System::Drawing::Size(75, 22);
			this->textBoxPersonelSuprimer->TabIndex = 30;
			this->textBoxPersonelSuprimer->Visible = false;
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
			// labelClientSuprimer
			// 
			this->labelClientSuprimer->AutoSize = true;
			this->labelClientSuprimer->Location = System::Drawing::Point(589, 245);
			this->labelClientSuprimer->Name = L"labelClientSuprimer";
			this->labelClientSuprimer->Size = System::Drawing::Size(62, 17);
			this->labelClientSuprimer->TabIndex = 49;
			this->labelClientSuprimer->Text = L"ID_client";
			this->labelClientSuprimer->Visible = false;
			// 
			// textBoxClientSuprimer
			// 
			this->textBoxClientSuprimer->Location = System::Drawing::Point(592, 287);
			this->textBoxClientSuprimer->Name = L"textBoxClientSuprimer";
			this->textBoxClientSuprimer->Size = System::Drawing::Size(75, 22);
			this->textBoxClientSuprimer->TabIndex = 50;
			this->textBoxClientSuprimer->Visible = false;
			// 
			// MyForm
			// 
			this->AutoScaleDimensions = System::Drawing::SizeF(8, 16);
			this->AutoScaleMode = System::Windows::Forms::AutoScaleMode::Font;
			this->ClientSize = System::Drawing::Size(1354, 839);
			this->Controls->Add(this->textBoxClientSuprimer);
			this->Controls->Add(this->labelClientSuprimer);
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
			this->Controls->Add(this->labelClient1);
			this->Controls->Add(this->textBoxPersonelSuprimer);
			this->Controls->Add(this->labelPersonelSuprimer);
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
			this->Controls->Add(this->comboBoxActionStat);
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
				this->comboBoxActionStat->Visible = false;
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
				this->labelPersonelSuprimer->Visible = false;
				this->textBoxPersonelSuprimer->Visible = false;
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
				this->labelClientSuprimer->Visible = false;
				this->textBoxClientSuprimer->Visible = false;
			}
		}
		private: System::Void comboBoxTable_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
			this->comboBoxActionTable->Visible = true;
			this->comboBoxActionStat->Visible = false;
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
			this->labelPersonelSuprimer->Visible = false;
			this->textBoxPersonelSuprimer->Visible = false;
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
			this->labelClientSuprimer->Visible = false;
			this->textBoxClientSuprimer->Visible = false;
		}
		private: System::Void comboBoxStat_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {
			this->comboBoxActionTable->Visible = false;
			this->comboBoxActionStat->Visible = true;
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
				this->labelPersonelSuprimer->Visible = false;
				this->textBoxPersonelSuprimer->Visible = false;
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
				this->labelPersonelSuprimer->Visible = false;
				this->textBoxPersonelSuprimer->Visible = false;
			}
			if (this->comboBoxActionTable->SelectedIndex == 2 && this->comboBoxTable->SelectedIndex == 0)
			{
				this->label1->Text = L"Veillez renseigner le personnel a suprimer";
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
				this->labelPersonelSuprimer->Visible = true;
				this->textBoxPersonelSuprimer->Visible = true;
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
				this->labelClientSuprimer->Visible = false;
				this->textBoxClientSuprimer->Visible = false;
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
				this->labelClientSuprimer->Visible = false;
				this->textBoxClientSuprimer->Visible = false;
			}
			if (this->comboBoxActionTable->SelectedIndex == 2 && this->comboBoxTable->SelectedIndex == 1)
			{
				this->label1->Text = L"Veillez renseigner le client a suprimer";
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
				this->labelClientSuprimer->Visible = true;
				this->textBoxClientSuprimer->Visible = true;
			}
		}
		private: System::Void comboBoxActionStat_SelectedIndexChanged(System::Object^ sender, System::EventArgs^ e) {

		}
};
}
