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
   
   TH1F *M_tlep_W = new TH1F("M_tlep_W","M_tlep_W",25,0,160);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *text = ptstats->AddText("M_tlep_W");
   text->SetTextSize(0.0368);
   text = ptstats->AddText("Entries = 0      ");
   text = ptstats->AddText("Mean  =      0");
   text = ptstats->AddText("RMS   =      0");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   M_tlep_W->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(M_tlep_W);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#000099");
   M_tlep_W->SetLineColor(ci);
   M_tlep_W->GetXaxis()->SetLabelFont(42);
   M_tlep_W->GetXaxis()->SetLabelSize(0.035);
   M_tlep_W->GetXaxis()->SetTitleSize(0.035);
   M_tlep_W->GetXaxis()->SetTitleFont(42);
   M_tlep_W->GetYaxis()->SetLabelFont(42);
   M_tlep_W->GetYaxis()->SetLabelSize(0.035);
   M_tlep_W->GetYaxis()->SetTitleSize(0.035);
   M_tlep_W->GetYaxis()->SetTitleFont(42);
   M_tlep_W->GetZaxis()->SetLabelFont(42);
   M_tlep_W->GetZaxis()->SetLabelSize(0.035);
   M_tlep_W->GetZaxis()->SetTitleSize(0.035);
   M_tlep_W->GetZaxis()->SetTitleFont(42);
   M_tlep_W->Draw("");
   
   TPaveText *pt = new TPaveText(0.3728125,0.9358257,0.6271875,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   text = pt->AddText("M_tlep_W");
   pt->Draw();
   c1->Modified();
   ->cd();
   ->SetSelected();
}
