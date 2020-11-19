void can_NLL__RooExpandedFitResult_afterFit_alpha_cor()
{
//=========Macro generated from canvas: can_NLL__RooExpandedFitResult_afterFit_alpha_cor/can_NLL__RooExpandedFitResult_afterFit_alpha_cor
//=========  (Sat Jul 18 23:08:58 2020) by ROOT version 6.18/04
   TCanvas *can_NLL__RooExpandedFitResult_afterFit_alpha_cor = new TCanvas("can_NLL__RooExpandedFitResult_afterFit_alpha_cor", "can_NLL__RooExpandedFitResult_afterFit_alpha_cor",0,0,600,600);
   gStyle->SetOptStat(0);
   can_NLL__RooExpandedFitResult_afterFit_alpha_cor->SetHighLightColor(2);
   can_NLL__RooExpandedFitResult_afterFit_alpha_cor->Range(-3.75,-0.3125,3.75,2.8125);
   can_NLL__RooExpandedFitResult_afterFit_alpha_cor->SetFillColor(0);
   can_NLL__RooExpandedFitResult_afterFit_alpha_cor->SetBorderMode(0);
   can_NLL__RooExpandedFitResult_afterFit_alpha_cor->SetBorderSize(2);
   can_NLL__RooExpandedFitResult_afterFit_alpha_cor->SetFrameBorderMode(0);
   can_NLL__RooExpandedFitResult_afterFit_alpha_cor->SetFrameBorderMode(0);
   
   TH1D *frame_7e1c5f0__3 = new TH1D("frame_7e1c5f0__3","A RooPlot of \"alpha_cor\"",100,-3,3);
   frame_7e1c5f0__3->SetBinContent(1,5.288133);
   frame_7e1c5f0__3->SetMinimum(0);
   frame_7e1c5f0__3->SetMaximum(2.5);
   frame_7e1c5f0__3->SetEntries(1);
   frame_7e1c5f0__3->SetDirectory(0);
   frame_7e1c5f0__3->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   frame_7e1c5f0__3->SetLineColor(ci);
   frame_7e1c5f0__3->GetXaxis()->SetTitle("alpha_cor");
   frame_7e1c5f0__3->GetXaxis()->SetLabelFont(42);
   frame_7e1c5f0__3->GetXaxis()->SetLabelSize(0.035);
   frame_7e1c5f0__3->GetXaxis()->SetTitleSize(0.035);
   frame_7e1c5f0__3->GetXaxis()->SetTitleOffset(1);
   frame_7e1c5f0__3->GetXaxis()->SetTitleFont(42);
   frame_7e1c5f0__3->GetYaxis()->SetTitle("Projection of nllWithCons");
   frame_7e1c5f0__3->GetYaxis()->SetLabelFont(42);
   frame_7e1c5f0__3->GetYaxis()->SetLabelSize(0.035);
   frame_7e1c5f0__3->GetYaxis()->SetTitleSize(0.035);
   frame_7e1c5f0__3->GetYaxis()->SetTitleFont(42);
   frame_7e1c5f0__3->GetZaxis()->SetLabelFont(42);
   frame_7e1c5f0__3->GetZaxis()->SetLabelSize(0.035);
   frame_7e1c5f0__3->GetZaxis()->SetTitleSize(0.035);
   frame_7e1c5f0__3->GetZaxis()->SetTitleOffset(1);
   frame_7e1c5f0__3->GetZaxis()->SetTitleFont(42);
   frame_7e1c5f0__3->Draw("FUNC");
   
   Double_t nll_simPdfFitRegions_dataFitRegions_with_constr_Norm[alpha_cor]_fx2[106] = {
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
   Double_t nll_simPdfFitRegions_dataFitRegions_with_constr_Norm[alpha_cor]_fy2[106] = {
   0,
   5.036317,
   5.036317,
   4.833458,
   4.634949,
   4.440774,
   4.250919,
   4.065368,
   3.884108,
   3.707126,
   3.534409,
   3.365942,
   3.201715,
   3.041716,
   2.885931,
   2.734351,
   2.586964,
   2.443759,
   2.304726,
   2.169854,
   2.039134,
   1.912556,
   1.79011,
   1.671788,
   1.557581,
   1.447479,
   1.341474,
   1.239558,
   1.141724,
   1.047962,
   0.9582655,
   0.872627,
   0.791039,
   0.7134944,
   0.6399862,
   0.5705077,
   0.5050521,
   0.4436129,
   0.3861839,
   0.3327587,
   0.2833314,
   0.237896,
   0.1964467,
   0.1589778,
   0.1254838,
   0.09595927,
   0.07039886,
   0.04879741,
   0.03114981,
   0.01745109,
   0.007696386,
   0.001880913,
   0,
   0.002049069,
   0.008023635,
   0.0179193,
   0.03173177,
   0.04945681,
   0.07109029,
   0.09662816,
   0.1260664,
   0.1594012,
   0.1966287,
   0.2377452,
   0.2827468,
   0.3316302,
   0.3843917,
   0.4410278,
   0.5015351,
   0.5659104,
   0.6341502,
   0.7062514,
   0.7822109,
   0.8620255,
   0.9456921,
   1.033208,
   1.12457,
   1.219775,
   1.31882,
   1.421703,
   1.528421,
   1.638971,
   1.75335,
   1.871556,
   1.993587,
   2.11944,
   2.249111,
   2.3826,
   2.519903,
   2.661019,
   2.805944,
   2.954676,
   3.107215,
   3.263556,
   3.423698,
   3.587639,
   3.755376,
   3.926908,
   4.102233,
   4.281348,
   4.464252,
   4.650943,
   4.841419,
   4.841419,
   4.841419,
   0};
   TGraph *graph = new TGraph(106,nll_simPdfFitRegions_dataFitRegions_with_constr_Norm[alpha_cor]_fx2,nll_simPdfFitRegions_dataFitRegions_with_constr_Norm[alpha_cor]_fy2);
   graph->SetName("nll_simPdfFitRegions_dataFitRegions_with_constr_Norm[alpha_cor]");
   graph->SetTitle("Projection of nllWithCons");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(3);
   
   TH1F *Graph_nll_simPdfFitRegions_dataFitRegions_with_constr_NormoBalpha_corcB2 = new TH1F("Graph_nll_simPdfFitRegions_dataFitRegions_with_constr_NormoBalpha_corcB2","Projection of nllWithCons",106,-3.672,3.672);
   Graph_nll_simPdfFitRegions_dataFitRegions_with_constr_NormoBalpha_corcB2->SetMinimum(0);
   Graph_nll_simPdfFitRegions_dataFitRegions_with_constr_NormoBalpha_corcB2->SetMaximum(5.539949);
   Graph_nll_simPdfFitRegions_dataFitRegions_with_constr_NormoBalpha_corcB2->SetDirectory(0);
   Graph_nll_simPdfFitRegions_dataFitRegions_with_constr_NormoBalpha_corcB2->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_nll_simPdfFitRegions_dataFitRegions_with_constr_NormoBalpha_corcB2->SetLineColor(ci);
   Graph_nll_simPdfFitRegions_dataFitRegions_with_constr_NormoBalpha_corcB2->GetXaxis()->SetLabelFont(42);
   Graph_nll_simPdfFitRegions_dataFitRegions_with_constr_NormoBalpha_corcB2->GetXaxis()->SetLabelSize(0.035);
   Graph_nll_simPdfFitRegions_dataFitRegions_with_constr_NormoBalpha_corcB2->GetXaxis()->SetTitleSize(0.035);
   Graph_nll_simPdfFitRegions_dataFitRegions_with_constr_NormoBalpha_corcB2->GetXaxis()->SetTitleOffset(1);
   Graph_nll_simPdfFitRegions_dataFitRegions_with_constr_NormoBalpha_corcB2->GetXaxis()->SetTitleFont(42);
   Graph_nll_simPdfFitRegions_dataFitRegions_with_constr_NormoBalpha_corcB2->GetYaxis()->SetLabelFont(42);
   Graph_nll_simPdfFitRegions_dataFitRegions_with_constr_NormoBalpha_corcB2->GetYaxis()->SetLabelSize(0.035);
   Graph_nll_simPdfFitRegions_dataFitRegions_with_constr_NormoBalpha_corcB2->GetYaxis()->SetTitleSize(0.035);
   Graph_nll_simPdfFitRegions_dataFitRegions_with_constr_NormoBalpha_corcB2->GetYaxis()->SetTitleFont(42);
   Graph_nll_simPdfFitRegions_dataFitRegions_with_constr_NormoBalpha_corcB2->GetZaxis()->SetLabelFont(42);
   Graph_nll_simPdfFitRegions_dataFitRegions_with_constr_NormoBalpha_corcB2->GetZaxis()->SetLabelSize(0.035);
   Graph_nll_simPdfFitRegions_dataFitRegions_with_constr_NormoBalpha_corcB2->GetZaxis()->SetTitleSize(0.035);
   Graph_nll_simPdfFitRegions_dataFitRegions_with_constr_NormoBalpha_corcB2->GetZaxis()->SetTitleOffset(1);
   Graph_nll_simPdfFitRegions_dataFitRegions_with_constr_NormoBalpha_corcB2->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_nll_simPdfFitRegions_dataFitRegions_with_constr_Norm[alpha_cor]2);
   
   graph->Draw("l");
   TLine *line = new TLine(-3,2,3,2);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(-3,0.5,3,0.5);
   line->SetLineStyle(3);
   line->Draw();
   
   TH1D *frame_7e1c5f0__4 = new TH1D("frame_7e1c5f0__4","A RooPlot of \"alpha_cor\"",100,-3,3);
   frame_7e1c5f0__4->SetBinContent(1,5.288133);
   frame_7e1c5f0__4->SetMinimum(0);
   frame_7e1c5f0__4->SetMaximum(2.5);
   frame_7e1c5f0__4->SetEntries(1);
   frame_7e1c5f0__4->SetDirectory(0);
   frame_7e1c5f0__4->SetStats(0);

   ci = TColor::GetColor("#000099");
   frame_7e1c5f0__4->SetLineColor(ci);
   frame_7e1c5f0__4->GetXaxis()->SetTitle("alpha_cor");
   frame_7e1c5f0__4->GetXaxis()->SetLabelFont(42);
   frame_7e1c5f0__4->GetXaxis()->SetLabelSize(0.035);
   frame_7e1c5f0__4->GetXaxis()->SetTitleSize(0.035);
   frame_7e1c5f0__4->GetXaxis()->SetTitleOffset(1);
   frame_7e1c5f0__4->GetXaxis()->SetTitleFont(42);
   frame_7e1c5f0__4->GetYaxis()->SetTitle("Projection of nllWithCons");
   frame_7e1c5f0__4->GetYaxis()->SetLabelFont(42);
   frame_7e1c5f0__4->GetYaxis()->SetLabelSize(0.035);
   frame_7e1c5f0__4->GetYaxis()->SetTitleSize(0.035);
   frame_7e1c5f0__4->GetYaxis()->SetTitleFont(42);
   frame_7e1c5f0__4->GetZaxis()->SetLabelFont(42);
   frame_7e1c5f0__4->GetZaxis()->SetLabelSize(0.035);
   frame_7e1c5f0__4->GetZaxis()->SetTitleSize(0.035);
   frame_7e1c5f0__4->GetZaxis()->SetTitleOffset(1);
   frame_7e1c5f0__4->GetZaxis()->SetTitleFont(42);
   frame_7e1c5f0__4->Draw("AXISSAME");
   
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
   
   TPaveText *pt = new TPaveText(0.1988926,0.9341608,0.8011074,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("A RooPlot of \"alpha_cor\"");
   pt->Draw();
   can_NLL__RooExpandedFitResult_afterFit_alpha_cor->Modified();
   can_NLL__RooExpandedFitResult_afterFit_alpha_cor->cd();
   can_NLL__RooExpandedFitResult_afterFit_alpha_cor->SetSelected(can_NLL__RooExpandedFitResult_afterFit_alpha_cor);
}
