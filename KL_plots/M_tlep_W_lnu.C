{
//=========Macro generated from canvas: /
//=========  (Fri Aug 16 11:00:55 2013) by ROOT version5.34/07
   TCanvas * = new TCanvas("", "",0,0,900,900);
   c1->Range(-20,-0.13125,180,1.18125);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TH1F *M_tlep_W_lnu = new TH1F("M_tlep_W_lnu","M_tlep_W_lnu",25,0,160);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *text = ptstats->AddText("M_tlep_W_lnu");
   text->SetTextSize(0.0368);
   text = ptstats->AddText("Entries = 0      ");
   text = ptstats->AddText("Mean  =      0");
   text = ptstats->AddText("RMS   =      0");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   M_tlep_W_lnu->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(M_tlep_W_lnu);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#000099");
   M_tlep_W_lnu->SetLineColor(ci);
   M_tlep_W_lnu->GetXaxis()->SetLabelFont(42);
   M_tlep_W_lnu->GetXaxis()->SetLabelSize(0.035);
   M_tlep_W_lnu->GetXaxis()->SetTitleSize(0.035);
   M_tlep_W_lnu->GetXaxis()->SetTitleFont(42);
   M_tlep_W_lnu->GetYaxis()->SetLabelFont(42);
   M_tlep_W_lnu->GetYaxis()->SetLabelSize(0.035);
   M_tlep_W_lnu->GetYaxis()->SetTitleSize(0.035);
   M_tlep_W_lnu->GetYaxis()->SetTitleFont(42);
   M_tlep_W_lnu->GetZaxis()->SetLabelFont(42);
   M_tlep_W_lnu->GetZaxis()->SetLabelSize(0.035);
   M_tlep_W_lnu->GetZaxis()->SetTitleSize(0.035);
   M_tlep_W_lnu->GetZaxis()->SetTitleFont(42);
   M_tlep_W_lnu->Draw("");
   
   TPaveText *pt = new TPaveText(0.3225893,0.9358257,0.6774107,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   text = pt->AddText("M_tlep_W_lnu");
   pt->Draw();
   c1->Modified();
   ->cd();
   ->SetSelected();
}
