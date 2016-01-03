{
//=========Macro generated from canvas: /
//=========  (Fri Aug 16 11:00:55 2013) by ROOT version5.34/07
   TCanvas * = new TCanvas("", "",0,0,900,900);
   c1->Range(-25,-15.35625,225,138.2063);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TH1F *M_H_W_lnu = new TH1F("M_H_W_lnu","M_H_W_lnu",50,0,200);
   M_H_W_lnu->SetBinContent(8,1);
   M_H_W_lnu->SetBinContent(10,1);
   M_H_W_lnu->SetBinContent(11,1);
   M_H_W_lnu->SetBinContent(12,3);
   M_H_W_lnu->SetBinContent(13,4);
   M_H_W_lnu->SetBinContent(14,5);
   M_H_W_lnu->SetBinContent(15,8);
   M_H_W_lnu->SetBinContent(16,5);
   M_H_W_lnu->SetBinContent(17,10);
   M_H_W_lnu->SetBinContent(18,31);
   M_H_W_lnu->SetBinContent(19,45);
   M_H_W_lnu->SetBinContent(20,86);
   M_H_W_lnu->SetBinContent(21,75);
   M_H_W_lnu->SetBinContent(22,117);
   M_H_W_lnu->SetBinContent(23,95);
   M_H_W_lnu->SetBinContent(24,52);
   M_H_W_lnu->SetBinContent(25,35);
   M_H_W_lnu->SetBinContent(26,27);
   M_H_W_lnu->SetBinContent(27,12);
   M_H_W_lnu->SetBinContent(28,11);
   M_H_W_lnu->SetBinContent(29,16);
   M_H_W_lnu->SetBinContent(30,5);
   M_H_W_lnu->SetBinContent(31,7);
   M_H_W_lnu->SetBinContent(32,4);
   M_H_W_lnu->SetBinContent(33,3);
   M_H_W_lnu->SetBinContent(34,2);
   M_H_W_lnu->SetBinContent(35,3);
   M_H_W_lnu->SetBinContent(36,2);
   M_H_W_lnu->SetBinContent(37,5);
   M_H_W_lnu->SetBinContent(38,2);
   M_H_W_lnu->SetBinContent(39,3);
   M_H_W_lnu->SetBinContent(40,3);
   M_H_W_lnu->SetBinContent(41,1);
   M_H_W_lnu->SetBinContent(42,1);
   M_H_W_lnu->SetBinContent(43,1);
   M_H_W_lnu->SetBinContent(44,2);
   M_H_W_lnu->SetBinContent(47,1);
   M_H_W_lnu->SetBinContent(50,3);
   M_H_W_lnu->SetBinContent(51,20);
   M_H_W_lnu->SetEntries(708);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *text = ptstats->AddText("M_H_W_lnu");
   text->SetTextSize(0.0368);
   text = ptstats->AddText("Entries = 708    ");
   text = ptstats->AddText("Mean  =  89.23");
   text = ptstats->AddText("RMS   =  19.88");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   M_H_W_lnu->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(M_H_W_lnu);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#000099");
   M_H_W_lnu->SetLineColor(ci);
   M_H_W_lnu->GetXaxis()->SetLabelFont(42);
   M_H_W_lnu->GetXaxis()->SetLabelSize(0.035);
   M_H_W_lnu->GetXaxis()->SetTitleSize(0.035);
   M_H_W_lnu->GetXaxis()->SetTitleFont(42);
   M_H_W_lnu->GetYaxis()->SetLabelFont(42);
   M_H_W_lnu->GetYaxis()->SetLabelSize(0.035);
   M_H_W_lnu->GetYaxis()->SetTitleSize(0.035);
   M_H_W_lnu->GetYaxis()->SetTitleFont(42);
   M_H_W_lnu->GetZaxis()->SetLabelFont(42);
   M_H_W_lnu->GetZaxis()->SetLabelSize(0.035);
   M_H_W_lnu->GetZaxis()->SetTitleSize(0.035);
   M_H_W_lnu->GetZaxis()->SetTitleFont(42);
   M_H_W_lnu->Draw("");
   
   TPaveText *pt = new TPaveText(0.348817,0.9358257,0.651183,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   text = pt->AddText("M_H_W_lnu");
   pt->Draw();
   c1->Modified();
   ->cd();
   ->SetSelected();
}
