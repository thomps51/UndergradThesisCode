{
//=========Macro generated from canvas: /
//=========  (Fri Aug 16 11:00:55 2013) by ROOT version5.34/07
   TCanvas * = new TCanvas("", "",0,0,900,900);
   c1->Range(-112.5,-13.78125,12.5,124.0313);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetFrameBorderMode(0);
   c1->SetFrameBorderMode(0);
   
   TH1F *loglikelihood = new TH1F("loglikelihood","loglikelihood",50,-100,0);
   loglikelihood->SetBinContent(16,2);
   loglikelihood->SetBinContent(18,2);
   loglikelihood->SetBinContent(19,5);
   loglikelihood->SetBinContent(20,8);
   loglikelihood->SetBinContent(21,13);
   loglikelihood->SetBinContent(22,25);
   loglikelihood->SetBinContent(23,28);
   loglikelihood->SetBinContent(24,38);
   loglikelihood->SetBinContent(25,64);
   loglikelihood->SetBinContent(26,71);
   loglikelihood->SetBinContent(27,104);
   loglikelihood->SetBinContent(28,105);
   loglikelihood->SetBinContent(29,78);
   loglikelihood->SetBinContent(30,73);
   loglikelihood->SetBinContent(31,47);
   loglikelihood->SetBinContent(32,13);
   loglikelihood->SetBinContent(33,4);
   loglikelihood->SetBinContent(37,2);
   loglikelihood->SetBinContent(38,4);
   loglikelihood->SetBinContent(39,10);
   loglikelihood->SetBinContent(40,4);
   loglikelihood->SetBinContent(41,8);
   loglikelihood->SetEntries(708);
   
   TPaveStats *ptstats = new TPaveStats(0.78,0.775,0.98,0.935,"brNDC");
   ptstats->SetName("stats");
   ptstats->SetBorderSize(1);
   ptstats->SetFillColor(0);
   ptstats->SetTextAlign(12);
   ptstats->SetTextFont(42);
   TText *text = ptstats->AddText("loglikelihood");
   text->SetTextSize(0.0368);
   text = ptstats->AddText("Entries = 708    ");
   text = ptstats->AddText("Mean  = -46.04");
   text = ptstats->AddText("RMS   =  7.489");
   ptstats->SetOptStat(1111);
   ptstats->SetOptFit(0);
   ptstats->Draw();
   loglikelihood->GetListOfFunctions()->Add(ptstats);
   ptstats->SetParent(loglikelihood);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#000099");
   loglikelihood->SetLineColor(ci);
   loglikelihood->GetXaxis()->SetLabelFont(42);
   loglikelihood->GetXaxis()->SetLabelSize(0.035);
   loglikelihood->GetXaxis()->SetTitleSize(0.035);
   loglikelihood->GetXaxis()->SetTitleFont(42);
   loglikelihood->GetYaxis()->SetLabelFont(42);
   loglikelihood->GetYaxis()->SetLabelSize(0.035);
   loglikelihood->GetYaxis()->SetTitleSize(0.035);
   loglikelihood->GetYaxis()->SetTitleFont(42);
   loglikelihood->GetZaxis()->SetLabelFont(42);
   loglikelihood->GetZaxis()->SetLabelSize(0.035);
   loglikelihood->GetZaxis()->SetTitleSize(0.035);
   loglikelihood->GetZaxis()->SetTitleFont(42);
   loglikelihood->Draw("");
   
   TPaveText *pt = new TPaveText(0.3365402,0.9358257,0.6634598,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   text = pt->AddText("loglikelihood");
   pt->Draw();
   c1->Modified();
   ->cd();
   ->SetSelected();
}
