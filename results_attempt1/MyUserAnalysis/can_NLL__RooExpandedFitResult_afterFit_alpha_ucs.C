void can_NLL__RooExpandedFitResult_afterFit_alpha_ucs()
{
//=========Macro generated from canvas: can_NLL__RooExpandedFitResult_afterFit_alpha_ucs/can_NLL__RooExpandedFitResult_afterFit_alpha_ucs
//=========  (Sat Jul 18 23:08:59 2020) by ROOT version 6.18/04
   TCanvas *can_NLL__RooExpandedFitResult_afterFit_alpha_ucs = new TCanvas("can_NLL__RooExpandedFitResult_afterFit_alpha_ucs", "can_NLL__RooExpandedFitResult_afterFit_alpha_ucs",0,0,600,600);
   gStyle->SetOptStat(0);
   can_NLL__RooExpandedFitResult_afterFit_alpha_ucs->SetHighLightColor(2);
   can_NLL__RooExpandedFitResult_afterFit_alpha_ucs->Range(-3.75,-0.3125,3.75,2.8125);
   can_NLL__RooExpandedFitResult_afterFit_alpha_ucs->SetFillColor(0);
   can_NLL__RooExpandedFitResult_afterFit_alpha_ucs->SetBorderMode(0);
   can_NLL__RooExpandedFitResult_afterFit_alpha_ucs->SetBorderSize(2);
   can_NLL__RooExpandedFitResult_afterFit_alpha_ucs->SetFrameBorderMode(0);
   can_NLL__RooExpandedFitResult_afterFit_alpha_ucs->SetFrameBorderMode(0);
   
   TH1D *frame_7dd8f30__7 = new TH1D("frame_7dd8f30__7","A RooPlot of \"alpha_ucs\"",100,-3,3);
   frame_7dd8f30__7->SetBinContent(1,4.758319);
   frame_7dd8f30__7->SetMinimum(0);
   frame_7dd8f30__7->SetMaximum(2.5);
   frame_7dd8f30__7->SetEntries(1);
   frame_7dd8f30__7->SetDirectory(0);
   frame_7dd8f30__7->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   frame_7dd8f30__7->SetLineColor(ci);
   frame_7dd8f30__7->GetXaxis()->SetTitle("alpha_ucs");
   frame_7dd8f30__7->GetXaxis()->SetLabelFont(42);
   frame_7dd8f30__7->GetXaxis()->SetLabelSize(0.035);
   frame_7dd8f30__7->GetXaxis()->SetTitleSize(0.035);
   frame_7dd8f30__7->GetXaxis()->SetTitleOffset(1);
   frame_7dd8f30__7->GetXaxis()->SetTitleFont(42);
   frame_7dd8f30__7->GetYaxis()->SetTitle("Projection of nllWithCons");
   frame_7dd8f30__7->GetYaxis()->SetLabelFont(42);
   frame_7dd8f30__7->GetYaxis()->SetLabelSize(0.035);
   frame_7dd8f30__7->GetYaxis()->SetTitleSize(0.035);
   frame_7dd8f30__7->GetYaxis()->SetTitleFont(42);
   frame_7dd8f30__7->GetZaxis()->SetLabelFont(42);
   frame_7dd8f30__7->GetZaxis()->SetLabelSize(0.035);
   frame_7dd8f30__7->GetZaxis()->SetTitleSize(0.035);
   frame_7dd8f30__7->GetZaxis()->SetTitleOffset(1);
   frame_7dd8f30__7->GetZaxis()->SetTitleFont(42);
   frame_7dd8f30__7->Draw("FUNC");
   
   Double_t nll_simPdfFitRegions_dataFitRegions_with_constr_Norm[alpha_ucs]_fx4[106] = {
   -3.06,
   -3.06,
   -3,
   -2.94,
   -2.88,
   -2.82,
   -2.76,
   -2.7,
   -2.64,
   -2.58,
   -2.52,
   -2.46,
   -2.4,
   -2.34,
   -2.28,
   -2.22,
   -2.16,
   -2.1,
   -2.04,
   -1.98,
   -1.92,
   -1.86,
   -1.8,
   -1.74,
   -1.68,
   -1.62,
   -1.56,
   -1.5,
   -1.44,
   -1.38,
   -1.32,
   -1.26,
   -1.2,
   -1.14,
   -1.08,
   -1.02,
   -0.96,
   -0.9,
   -0.84,
   -0.78,
   -0.72,
   -0.66,
   -0.6,
   -0.54,
   -0.48,
   -0.42,
   -0.36,
   -0.3,
   -0.24,
   -0.18,
   -0.12,
   -0.06,
   0,
   0.06,
   0.12,
   0.18,
   0.24,
   0.3,
   0.36,
   0.42,
   0.48,
   0.54,
   0.6,
   0.66,
   0.72,
   0.78,
   0.84,
   0.9,
   0.96,
   1.02,
   1.08,
   1.14,
   1.2,
   1.26,
   1.32,
   1.38,
   1.44,
   1.5,
   1.56,
   1.62,
   1.68,
   1.74,
   1.8,
   1.86,
   1.92,
   1.98,
   2.04,
   2.1,
   2.16,
   2.22,
   2.28,
   2.34,
   2.4,
   2.46,
   2.52,
   2.58,
   2.64,
   2.7,
   2.76,
   2.82,
   2.88,
   2.94,
   3,
   3,
   3.06,
   3.06};
   Double_t nll_simPdfFitRegions_dataFitRegions_with_constr_Norm[alpha_ucs]_fy4[106] = {
   0,
   4.521237,
   4.521237,
   4.342275,
   4.166923,
   3.995181,
   3.827049,
   3.662528,
   3.501617,
   3.344318,
   3.19063,
   3.040553,
   2.894088,
   2.751235,
   2.611994,
   2.476365,
   2.344349,
   2.215946,
   2.091156,
   1.969979,
   1.852416,
   1.738466,
   1.628131,
   1.52141,
   1.418303,
   1.318812,
   1.222936,
   1.130674,
   1.042029,
   0.9569996,
   0.8755864,
   0.7977897,
   0.7236097,
   0.6530468,
   0.5861013,
   0.5227734,
   0.4630634,
   0.4069712,
   0.3544968,
   0.3056405,
   0.2604029,
   0.2187846,
   0.1807864,
   0.146409,
   0.115653,
   0.0885188,
   0.06500676,
   0.04511706,
   0.02884972,
   0.01620461,
   0.007181515,
   0.001780104,
   0,
   0.0018408,
   0.007302111,
   0.01638358,
   0.02908494,
   0.04540601,
   0.06534675,
   0.08890722,
   0.1160877,
   0.1468885,
   0.1813101,
   0.2193533,
   0.2610186,
   0.3063068,
   0.3552185,
   0.4077543,
   0.4639144,
   0.5236989,
   0.5871076,
   0.6541407,
   0.7247985,
   0.7990815,
   0.8769898,
   0.9585239,
   1.043684,
   1.13247,
   1.224884,
   1.320924,
   1.420592,
   1.523887,
   1.63081,
   1.741362,
   1.855543,
   1.973352,
   2.094792,
   2.219861,
   2.34856,
   2.48089,
   2.616851,
   2.756443,
   2.899667,
   3.046522,
   3.197011,
   3.351132,
   3.508886,
   3.670274,
   3.835296,
   4.003953,
   4.176244,
   4.35217,
   4.531733,
   4.531733,
   4.531733,
   0};
   TGraph *graph = new TGraph(106,nll_simPdfFitRegions_dataFitRegions_with_constr_Norm[alpha_ucs]_fx4,nll_simPdfFitRegions_dataFitRegions_with_constr_Norm[alpha_ucs]_fy4);
   graph->SetName("nll_simPdfFitRegions_dataFitRegions_with_constr_Norm[alpha_ucs]");
   graph->SetTitle("Projection of nllWithCons");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(3);
   
   TH1F *Graph_nll_simPdfFitRegions_dataFitRegions_with_constr_NormoBalpha_ucscB4 = new TH1F("Graph_nll_simPdfFitRegions_dataFitRegions_with_constr_NormoBalpha_ucscB4","Projection of nllWithCons",106,-3.672,3.672);
   Graph_nll_simPdfFitRegions_dataFitRegions_with_constr_NormoBalpha_ucscB4->SetMinimum(0);
   Graph_nll_simPdfFitRegions_dataFitRegions_with_constr_NormoBalpha_ucscB4->SetMaximum(4.984906);
   Graph_nll_simPdfFitRegions_dataFitRegions_with_constr_NormoBalpha_ucscB4->SetDirectory(0);
   Graph_nll_simPdfFitRegions_dataFitRegions_with_constr_NormoBalpha_ucscB4->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_nll_simPdfFitRegions_dataFitRegions_with_constr_NormoBalpha_ucscB4->SetLineColor(ci);
   Graph_nll_simPdfFitRegions_dataFitRegions_with_constr_NormoBalpha_ucscB4->GetXaxis()->SetLabelFont(42);
   Graph_nll_simPdfFitRegions_dataFitRegions_with_constr_NormoBalpha_ucscB4->GetXaxis()->SetLabelSize(0.035);
   Graph_nll_simPdfFitRegions_dataFitRegions_with_constr_NormoBalpha_ucscB4->GetXaxis()->SetTitleSize(0.035);
   Graph_nll_simPdfFitRegions_dataFitRegions_with_constr_NormoBalpha_ucscB4->GetXaxis()->SetTitleOffset(1);
   Graph_nll_simPdfFitRegions_dataFitRegions_with_constr_NormoBalpha_ucscB4->GetXaxis()->SetTitleFont(42);
   Graph_nll_simPdfFitRegions_dataFitRegions_with_constr_NormoBalpha_ucscB4->GetYaxis()->SetLabelFont(42);
   Graph_nll_simPdfFitRegions_dataFitRegions_with_constr_NormoBalpha_ucscB4->GetYaxis()->SetLabelSize(0.035);
   Graph_nll_simPdfFitRegions_dataFitRegions_with_constr_NormoBalpha_ucscB4->GetYaxis()->SetTitleSize(0.035);
   Graph_nll_simPdfFitRegions_dataFitRegions_with_constr_NormoBalpha_ucscB4->GetYaxis()->SetTitleFont(42);
   Graph_nll_simPdfFitRegions_dataFitRegions_with_constr_NormoBalpha_ucscB4->GetZaxis()->SetLabelFont(42);
   Graph_nll_simPdfFitRegions_dataFitRegions_with_constr_NormoBalpha_ucscB4->GetZaxis()->SetLabelSize(0.035);
   Graph_nll_simPdfFitRegions_dataFitRegions_with_constr_NormoBalpha_ucscB4->GetZaxis()->SetTitleSize(0.035);
   Graph_nll_simPdfFitRegions_dataFitRegions_with_constr_NormoBalpha_ucscB4->GetZaxis()->SetTitleOffset(1);
   Graph_nll_simPdfFitRegions_dataFitRegions_with_constr_NormoBalpha_ucscB4->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_nll_simPdfFitRegions_dataFitRegions_with_constr_Norm[alpha_ucs]4);
   
   graph->Draw("l");
   TLine *line = new TLine(-3,2,3,2);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(-3,0.5,3,0.5);
   line->SetLineStyle(3);
   line->Draw();
   
   TH1D *frame_7dd8f30__8 = new TH1D("frame_7dd8f30__8","A RooPlot of \"alpha_ucs\"",100,-3,3);
   frame_7dd8f30__8->SetBinContent(1,4.758319);
   frame_7dd8f30__8->SetMinimum(0);
   frame_7dd8f30__8->SetMaximum(2.5);
   frame_7dd8f30__8->SetEntries(1);
   frame_7dd8f30__8->SetDirectory(0);
   frame_7dd8f30__8->SetStats(0);

   ci = TColor::GetColor("#000099");
   frame_7dd8f30__8->SetLineColor(ci);
   frame_7dd8f30__8->GetXaxis()->SetTitle("alpha_ucs");
   frame_7dd8f30__8->GetXaxis()->SetLabelFont(42);
   frame_7dd8f30__8->GetXaxis()->SetLabelSize(0.035);
   frame_7dd8f30__8->GetXaxis()->SetTitleSize(0.035);
   frame_7dd8f30__8->GetXaxis()->SetTitleOffset(1);
   frame_7dd8f30__8->GetXaxis()->SetTitleFont(42);
   frame_7dd8f30__8->GetYaxis()->SetTitle("Projection of nllWithCons");
   frame_7dd8f30__8->GetYaxis()->SetLabelFont(42);
   frame_7dd8f30__8->GetYaxis()->SetLabelSize(0.035);
   frame_7dd8f30__8->GetYaxis()->SetTitleSize(0.035);
   frame_7dd8f30__8->GetYaxis()->SetTitleFont(42);
   frame_7dd8f30__8->GetZaxis()->SetLabelFont(42);
   frame_7dd8f30__8->GetZaxis()->SetLabelSize(0.035);
   frame_7dd8f30__8->GetZaxis()->SetTitleSize(0.035);
   frame_7dd8f30__8->GetZaxis()->SetTitleOffset(1);
   frame_7dd8f30__8->GetZaxis()->SetTitleFont(42);
   frame_7dd8f30__8->Draw("AXISSAME");
   
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
   
   TPaveText *pt = new TPaveText(0.194698,0.9341608,0.805302,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("A RooPlot of \"alpha_ucs\"");
   pt->Draw();
   can_NLL__RooExpandedFitResult_afterFit_alpha_ucs->Modified();
   can_NLL__RooExpandedFitResult_afterFit_alpha_ucs->cd();
   can_NLL__RooExpandedFitResult_afterFit_alpha_ucs->SetSelected(can_NLL__RooExpandedFitResult_afterFit_alpha_ucs);
}
