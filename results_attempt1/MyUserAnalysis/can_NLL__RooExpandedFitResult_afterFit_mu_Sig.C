void can_NLL__RooExpandedFitResult_afterFit_mu_Sig()
{
//=========Macro generated from canvas: can_NLL__RooExpandedFitResult_afterFit_mu_Sig/can_NLL__RooExpandedFitResult_afterFit_mu_Sig
//=========  (Sat Jul 18 23:08:59 2020) by ROOT version 6.18/04
   TCanvas *can_NLL__RooExpandedFitResult_afterFit_mu_Sig = new TCanvas("can_NLL__RooExpandedFitResult_afterFit_mu_Sig", "can_NLL__RooExpandedFitResult_afterFit_mu_Sig",0,0,600,600);
   gStyle->SetOptStat(0);
   can_NLL__RooExpandedFitResult_afterFit_mu_Sig->SetHighLightColor(2);
   can_NLL__RooExpandedFitResult_afterFit_mu_Sig->Range(-0.25,-0.3125,2.25,2.8125);
   can_NLL__RooExpandedFitResult_afterFit_mu_Sig->SetFillColor(0);
   can_NLL__RooExpandedFitResult_afterFit_mu_Sig->SetBorderMode(0);
   can_NLL__RooExpandedFitResult_afterFit_mu_Sig->SetBorderSize(2);
   can_NLL__RooExpandedFitResult_afterFit_mu_Sig->SetFrameBorderMode(0);
   can_NLL__RooExpandedFitResult_afterFit_mu_Sig->SetFrameBorderMode(0);
   
   TH1D *frame_7e355f0__11 = new TH1D("frame_7e355f0__11","A RooPlot of \"mu_Sig\"",100,0,2);
   frame_7e355f0__11->SetBinContent(1,2.798444);
   frame_7e355f0__11->SetMinimum(0);
   frame_7e355f0__11->SetMaximum(2.5);
   frame_7e355f0__11->SetEntries(1);
   frame_7e355f0__11->SetDirectory(0);
   frame_7e355f0__11->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   frame_7e355f0__11->SetLineColor(ci);
   frame_7e355f0__11->GetXaxis()->SetTitle("mu_Sig");
   frame_7e355f0__11->GetXaxis()->SetLabelFont(42);
   frame_7e355f0__11->GetXaxis()->SetLabelSize(0.035);
   frame_7e355f0__11->GetXaxis()->SetTitleSize(0.035);
   frame_7e355f0__11->GetXaxis()->SetTitleOffset(1);
   frame_7e355f0__11->GetXaxis()->SetTitleFont(42);
   frame_7e355f0__11->GetYaxis()->SetTitle("Projection of nllWithCons");
   frame_7e355f0__11->GetYaxis()->SetLabelFont(42);
   frame_7e355f0__11->GetYaxis()->SetLabelSize(0.035);
   frame_7e355f0__11->GetYaxis()->SetTitleSize(0.035);
   frame_7e355f0__11->GetYaxis()->SetTitleFont(42);
   frame_7e355f0__11->GetZaxis()->SetLabelFont(42);
   frame_7e355f0__11->GetZaxis()->SetLabelSize(0.035);
   frame_7e355f0__11->GetZaxis()->SetTitleSize(0.035);
   frame_7e355f0__11->GetZaxis()->SetTitleOffset(1);
   frame_7e355f0__11->GetZaxis()->SetTitleFont(42);
   frame_7e355f0__11->Draw("FUNC");
   
   Double_t nll_simPdfFitRegions_dataFitRegions_with_constr_Norm[mu_Sig]_fx6[106] = {
   -0.02,
   -0.02,
   0,
   0.02,
   0.04,
   0.06,
   0.08,
   0.1,
   0.12,
   0.14,
   0.16,
   0.18,
   0.2,
   0.22,
   0.24,
   0.26,
   0.28,
   0.3,
   0.32,
   0.34,
   0.36,
   0.38,
   0.4,
   0.42,
   0.44,
   0.46,
   0.48,
   0.5,
   0.52,
   0.54,
   0.56,
   0.58,
   0.6,
   0.62,
   0.64,
   0.66,
   0.68,
   0.7,
   0.72,
   0.74,
   0.76,
   0.78,
   0.8,
   0.82,
   0.84,
   0.86,
   0.88,
   0.9,
   0.92,
   0.94,
   0.96,
   0.98,
   1,
   1.02,
   1.04,
   1.06,
   1.08,
   1.1,
   1.12,
   1.14,
   1.16,
   1.18,
   1.2,
   1.22,
   1.24,
   1.26,
   1.28,
   1.3,
   1.32,
   1.34,
   1.36,
   1.38,
   1.4,
   1.42,
   1.44,
   1.46,
   1.48,
   1.5,
   1.52,
   1.54,
   1.56,
   1.58,
   1.6,
   1.62,
   1.64,
   1.66,
   1.68,
   1.7,
   1.72,
   1.74,
   1.76,
   1.78,
   1.8,
   1.82,
   1.84,
   1.86,
   1.88,
   1.9,
   1.92,
   1.94,
   1.96,
   1.98,
   2,
   2,
   2.02,
   2.02};
   Double_t nll_simPdfFitRegions_dataFitRegions_with_constr_Norm[mu_Sig]_fy6[106] = {
   0,
   0.3586383,
   0.3586383,
   0.3197589,
   0.2835847,
   0.2500124,
   0.2189444,
   0.1902886,
   0.1639579,
   0.1398698,
   0.1179461,
   0.09811266,
   0.08029907,
   0.0644384,
   0.050467,
   0.03832431,
   0.02795259,
   0.01929682,
   0.01230452,
   0.006925535,
   0.003111987,
   0.0008180795,
   0,
   0.0006158037,
   0.002625309,
   0.00599,
   0.01067294,
   0.01663867,
   0.02385315,
   0.03228369,
   0.04189884,
   0.05266838,
   0.06456322,
   0.07755535,
   0.09161781,
   0.1067246,
   0.1228507,
   0.1399719,
   0.1580649,
   0.1771072,
   0.1970771,
   0.2179536,
   0.2397163,
   0.2623458,
   0.2858229,
   0.3101294,
   0.3352475,
   0.36116,
   0.3878503,
   0.4153021,
   0.4434998,
   0.4724284,
   0.502073,
   0.5324194,
   0.5634538,
   0.5951627,
   0.6275331,
   0.6605522,
   0.6942079,
   0.728488,
   0.763381,
   0.7988756,
   0.8349608,
   0.8716258,
   0.9088603,
   0.9466541,
   0.9849974,
   1.02388,
   1.063294,
   1.103229,
   1.143676,
   1.184628,
   1.226074,
   1.268008,
   1.310421,
   1.353305,
   1.396653,
   1.440457,
   1.48471,
   1.529405,
   1.574535,
   1.620092,
   1.666072,
   1.712466,
   1.759269,
   1.806474,
   1.854076,
   1.902069,
   1.950446,
   1.999203,
   2.048333,
   2.097832,
   2.147693,
   2.197912,
   2.248484,
   2.299404,
   2.350667,
   2.402268,
   2.454202,
   2.506465,
   2.559053,
   2.611961,
   2.665185,
   2.665185,
   2.665185,
   0};
   TGraph *graph = new TGraph(106,nll_simPdfFitRegions_dataFitRegions_with_constr_Norm[mu_Sig]_fx6,nll_simPdfFitRegions_dataFitRegions_with_constr_Norm[mu_Sig]_fy6);
   graph->SetName("nll_simPdfFitRegions_dataFitRegions_with_constr_Norm[mu_Sig]");
   graph->SetTitle("Projection of nllWithCons");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(3);
   
   TH1F *Graph_nll_simPdfFitRegions_dataFitRegions_with_constr_NormoBmu_SigcB6 = new TH1F("Graph_nll_simPdfFitRegions_dataFitRegions_with_constr_NormoBmu_SigcB6","Projection of nllWithCons",106,-0.224,2.224);
   Graph_nll_simPdfFitRegions_dataFitRegions_with_constr_NormoBmu_SigcB6->SetMinimum(0);
   Graph_nll_simPdfFitRegions_dataFitRegions_with_constr_NormoBmu_SigcB6->SetMaximum(2.931704);
   Graph_nll_simPdfFitRegions_dataFitRegions_with_constr_NormoBmu_SigcB6->SetDirectory(0);
   Graph_nll_simPdfFitRegions_dataFitRegions_with_constr_NormoBmu_SigcB6->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_nll_simPdfFitRegions_dataFitRegions_with_constr_NormoBmu_SigcB6->SetLineColor(ci);
   Graph_nll_simPdfFitRegions_dataFitRegions_with_constr_NormoBmu_SigcB6->GetXaxis()->SetLabelFont(42);
   Graph_nll_simPdfFitRegions_dataFitRegions_with_constr_NormoBmu_SigcB6->GetXaxis()->SetLabelSize(0.035);
   Graph_nll_simPdfFitRegions_dataFitRegions_with_constr_NormoBmu_SigcB6->GetXaxis()->SetTitleSize(0.035);
   Graph_nll_simPdfFitRegions_dataFitRegions_with_constr_NormoBmu_SigcB6->GetXaxis()->SetTitleOffset(1);
   Graph_nll_simPdfFitRegions_dataFitRegions_with_constr_NormoBmu_SigcB6->GetXaxis()->SetTitleFont(42);
   Graph_nll_simPdfFitRegions_dataFitRegions_with_constr_NormoBmu_SigcB6->GetYaxis()->SetLabelFont(42);
   Graph_nll_simPdfFitRegions_dataFitRegions_with_constr_NormoBmu_SigcB6->GetYaxis()->SetLabelSize(0.035);
   Graph_nll_simPdfFitRegions_dataFitRegions_with_constr_NormoBmu_SigcB6->GetYaxis()->SetTitleSize(0.035);
   Graph_nll_simPdfFitRegions_dataFitRegions_with_constr_NormoBmu_SigcB6->GetYaxis()->SetTitleFont(42);
   Graph_nll_simPdfFitRegions_dataFitRegions_with_constr_NormoBmu_SigcB6->GetZaxis()->SetLabelFont(42);
   Graph_nll_simPdfFitRegions_dataFitRegions_with_constr_NormoBmu_SigcB6->GetZaxis()->SetLabelSize(0.035);
   Graph_nll_simPdfFitRegions_dataFitRegions_with_constr_NormoBmu_SigcB6->GetZaxis()->SetTitleSize(0.035);
   Graph_nll_simPdfFitRegions_dataFitRegions_with_constr_NormoBmu_SigcB6->GetZaxis()->SetTitleOffset(1);
   Graph_nll_simPdfFitRegions_dataFitRegions_with_constr_NormoBmu_SigcB6->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_nll_simPdfFitRegions_dataFitRegions_with_constr_Norm[mu_Sig]6);
   
   graph->Draw("l");
   TLine *line = new TLine(0,2,2,2);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(0,0.5,2,0.5);
   line->SetLineStyle(3);
   line->Draw();
   
   TH1D *frame_7e355f0__12 = new TH1D("frame_7e355f0__12","A RooPlot of \"mu_Sig\"",100,0,2);
   frame_7e355f0__12->SetBinContent(1,2.798444);
   frame_7e355f0__12->SetMinimum(0);
   frame_7e355f0__12->SetMaximum(2.5);
   frame_7e355f0__12->SetEntries(1);
   frame_7e355f0__12->SetDirectory(0);
   frame_7e355f0__12->SetStats(0);

   ci = TColor::GetColor("#000099");
   frame_7e355f0__12->SetLineColor(ci);
   frame_7e355f0__12->GetXaxis()->SetTitle("mu_Sig");
   frame_7e355f0__12->GetXaxis()->SetLabelFont(42);
   frame_7e355f0__12->GetXaxis()->SetLabelSize(0.035);
   frame_7e355f0__12->GetXaxis()->SetTitleSize(0.035);
   frame_7e355f0__12->GetXaxis()->SetTitleOffset(1);
   frame_7e355f0__12->GetXaxis()->SetTitleFont(42);
   frame_7e355f0__12->GetYaxis()->SetTitle("Projection of nllWithCons");
   frame_7e355f0__12->GetYaxis()->SetLabelFont(42);
   frame_7e355f0__12->GetYaxis()->SetLabelSize(0.035);
   frame_7e355f0__12->GetYaxis()->SetTitleSize(0.035);
   frame_7e355f0__12->GetYaxis()->SetTitleFont(42);
   frame_7e355f0__12->GetZaxis()->SetLabelFont(42);
   frame_7e355f0__12->GetZaxis()->SetLabelSize(0.035);
   frame_7e355f0__12->GetZaxis()->SetTitleSize(0.035);
   frame_7e355f0__12->GetZaxis()->SetTitleOffset(1);
   frame_7e355f0__12->GetZaxis()->SetTitleFont(42);
   frame_7e355f0__12->Draw("AXISSAME");
   
   TLegend *leg = new TLegend(0.55,0.65,0.85,0.9,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("NULL","NLL","l");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   
   TPaveText *pt = new TPaveText(0.2257383,0.9341608,0.7742617,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("A RooPlot of \"mu_Sig\"");
   pt->Draw();
   can_NLL__RooExpandedFitResult_afterFit_mu_Sig->Modified();
   can_NLL__RooExpandedFitResult_afterFit_mu_Sig->cd();
   can_NLL__RooExpandedFitResult_afterFit_mu_Sig->SetSelected(can_NLL__RooExpandedFitResult_afterFit_mu_Sig);
}
