{
//=========Macro generated from canvas: /
//=========  (Fri Aug 16 11:00:55 2013) by ROOT version5.34/07
   TCanvas * = new TCanvas("", "",0,0,900,900);
   c1->Range(-125,-4.2,1125,37.8);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TH1F *M_Higgs = new TH1F("M_Higgs","M_Higgs",100,0,1000);
   M_Higgs->SetBinContent(8,1);
   M_Higgs->SetBinContent(10,2);
   M_Higgs->SetBinContent(11,1);
   M_Higgs->SetBinContent(12,3);
   M_Higgs->SetBinContent(13,4);
   M_Higgs->SetBinContent(14,7);
   M_Higgs->SetBinContent(15,24);
   M_Higgs->SetBinContent(16,15);
   M_Higgs->SetBinContent(17,14);
   M_Higgs->SetBinContent(18,26);
   M_Higgs->SetBinContent(19,23);
   M_Higgs->SetBinContent(20,29);
   M_Higgs->SetBinContent(21,24);
   M_Higgs->SetBinContent(22,32);
   M_Higgs->SetBinContent(23,21);
   M_Higgs->SetBinContent(24,26);
   M_Higgs->SetBinContent(25,30);
   M_Higgs->SetBinContent(26,18);
   M_Higgs->SetBinContent(27,26);
   M_Higgs->SetBinContent(28,25);
   M_Higgs->SetBinContent(29,16);
   M_Higgs->SetBinContent(30,25);
   M_Higgs->SetBinContent(31,17);
   M_Higgs->SetBinContent(32,21);
   M_Higgs->SetBinContent(33,24);
   M_Higgs->SetBinContent(34,15);
   M_Higgs->SetBinContent(35,7);
   M_Higgs->SetBinContent(36,11);
   M_Higgs->SetBinContent(37,13);
   M_Higgs->SetBinContent(38,13);
   M_Higgs->SetBinContent(39,12);
   M_Higgs->SetBinContent(40,8);
   M_Higgs->SetBinContent(41,8);
   M_Higgs->SetBinContent(42,8);
   M_Higgs->SetBinContent(43,9);
   M_Higgs->SetBinContent(44,6);
   M_Higgs->SetBinContent(45,7);
   M_Higgs->SetBinContent(46,11);
   M_Higgs->SetBinContent(47,4);
   M_Higgs->SetBinContent(48,7);
   M_Higgs->SetBinContent(49,3);
   M_Higgs->SetBinContent(50,4);
   M_Higgs->SetBinContent(51,6);
   M_Higgs->SetBinContent(52,8);
   M_Higgs->SetBinContent(53,2);
   M_Higgs->SetBinContent(54,4);
   M_Higgs->SetBinContent(55,4);
   M_Higgs->SetBinContent(56,5);
   M_Higgs->SetBinContent(57,6);
   M_Higgs->SetBinContent(58,4);
   M_Higgs->SetBinContent(59,3);
   M_Higgs->SetBinContent(60,1);
   M_Higgs->SetBinContent(61,6);
   M_Higgs->SetBinContent(62,3);
   M_Higgs->SetBinContent(63,4);
   M_Higgs->SetBinContent(64,1);
   M_Higgs->SetBinContent(65,3);
   M_Higgs->SetBinContent(66,2);
   M_Higgs->SetBinContent(67,1);
   M_Higgs->SetBinContent(68,1);
   M_Higgs->SetBinContent(69,5);
   M_Higgs->SetBinContent(70,5);
   M_Higgs->SetBinContent(71,1);
   M_Higgs->SetBinContent(72,4);
   M_Higgs->SetBinContent(74,2);
   M_Higgs->SetBinContent(75,4);
   M_Higgs->SetBinContent(80,1);
   M_Higgs->SetBinContent(82,1);
   M_Higgs->SetBinContent(86,1);
   M_Higgs->SetBinContent(87,1);
   M_Higgs->SetBinContent(88,1);
   M_Higgs->SetBinContent(89,3);
   M_Higgs->SetBinContent(95,1);
   M_Higgs->SetBinContent(97,1);
   M_Higgs->SetBinContent(98,1);
   M_Higgs->SetBinContent(100,1);
   M_Higgs->SetBinContent(101,11);
   M_Higgs->SetEntries(708);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *text = ptstats->AddText("M_Higgs");
   text->SetTextSize(0.0368);
   text = ptstats->AddText("Entries = 708    ");
   text = ptstats->AddText("Mean  =  323.4");
   text = ptstats->AddText("RMS   =  159.5");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   M_Higgs->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(M_Higgs);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#000099");
   M_Higgs->SetLineColor(ci);
   M_Higgs->GetXaxis()->SetLabelFont(42);
   M_Higgs->GetXaxis()->SetLabelSize(0.035);
   M_Higgs->GetXaxis()->SetTitleSize(0.035);
   M_Higgs->GetXaxis()->SetTitleFont(42);
   M_Higgs->GetYaxis()->SetLabelFont(42);
   M_Higgs->GetYaxis()->SetLabelSize(0.035);
   M_Higgs->GetYaxis()->SetTitleSize(0.035);
   M_Higgs->GetYaxis()->SetTitleFont(42);
   M_Higgs->GetZaxis()->SetLabelFont(42);
   M_Higgs->GetZaxis()->SetLabelSize(0.035);
   M_Higgs->GetZaxis()->SetTitleSize(0.035);
   M_Higgs->GetZaxis()->SetTitleFont(42);
   M_Higgs->Draw("");
   
   TPaveText *pt = new TPaveText(0.3862054,0.9358257,0.6137946,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   text = pt->AddText("M_Higgs");
   pt->Draw();
   c1->Modified();
   ->cd();
   ->SetSelected();
}
