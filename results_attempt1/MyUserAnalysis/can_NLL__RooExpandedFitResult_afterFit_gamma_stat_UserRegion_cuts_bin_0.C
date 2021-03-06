void can_NLL__RooExpandedFitResult_afterFit_gamma_stat_UserRegion_cuts_bin_0()
{
//=========Macro generated from canvas: can_NLL__RooExpandedFitResult_afterFit_gamma_stat_UserRegion_cuts_bin_0/can_NLL__RooExpandedFitResult_afterFit_gamma_stat_UserRegion_cuts_bin_0
//=========  (Sat Jul 18 23:08:59 2020) by ROOT version 6.18/04
   TCanvas *can_NLL__RooExpandedFitResult_afterFit_gamma_stat_UserRegion_cuts_bin_0 = new TCanvas("can_NLL__RooExpandedFitResult_afterFit_gamma_stat_UserRegion_cuts_bin_0", "can_NLL__RooExpandedFitResult_afterFit_gamma_stat_UserRegion_cuts_bin_0",0,0,600,600);
   gStyle->SetOptStat(0);
   can_NLL__RooExpandedFitResult_afterFit_gamma_stat_UserRegion_cuts_bin_0->SetHighLightColor(2);
   can_NLL__RooExpandedFitResult_afterFit_gamma_stat_UserRegion_cuts_bin_0->Range(-0.25,-0.3125,2.25,2.8125);
   can_NLL__RooExpandedFitResult_afterFit_gamma_stat_UserRegion_cuts_bin_0->SetFillColor(0);
   can_NLL__RooExpandedFitResult_afterFit_gamma_stat_UserRegion_cuts_bin_0->SetBorderMode(0);
   can_NLL__RooExpandedFitResult_afterFit_gamma_stat_UserRegion_cuts_bin_0->SetBorderSize(2);
   can_NLL__RooExpandedFitResult_afterFit_gamma_stat_UserRegion_cuts_bin_0->SetFrameBorderMode(0);
   can_NLL__RooExpandedFitResult_afterFit_gamma_stat_UserRegion_cuts_bin_0->SetFrameBorderMode(0);
   
   TH1D *frame_7e67ae0__9 = new TH1D("frame_7e67ae0__9","A RooPlot of \"gamma_stat_UserRegion_cuts_bin_0\"",100,0,2);
   frame_7e67ae0__9->SetBinContent(1,46.41706);
   frame_7e67ae0__9->SetMinimum(0);
   frame_7e67ae0__9->SetMaximum(2.5);
   frame_7e67ae0__9->SetEntries(1);
   frame_7e67ae0__9->SetDirectory(0);
   frame_7e67ae0__9->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   frame_7e67ae0__9->SetLineColor(ci);
   frame_7e67ae0__9->GetXaxis()->SetTitle("gamma_stat_UserRegion_cuts_bin_0");
   frame_7e67ae0__9->GetXaxis()->SetLabelFont(42);
   frame_7e67ae0__9->GetXaxis()->SetLabelSize(0.035);
   frame_7e67ae0__9->GetXaxis()->SetTitleSize(0.035);
   frame_7e67ae0__9->GetXaxis()->SetTitleOffset(1);
   frame_7e67ae0__9->GetXaxis()->SetTitleFont(42);
   frame_7e67ae0__9->GetYaxis()->SetTitle("Projection of nllWithCons");
   frame_7e67ae0__9->GetYaxis()->SetLabelFont(42);
   frame_7e67ae0__9->GetYaxis()->SetLabelSize(0.035);
   frame_7e67ae0__9->GetYaxis()->SetTitleSize(0.035);
   frame_7e67ae0__9->GetYaxis()->SetTitleFont(42);
   frame_7e67ae0__9->GetZaxis()->SetLabelFont(42);
   frame_7e67ae0__9->GetZaxis()->SetLabelSize(0.035);
   frame_7e67ae0__9->GetZaxis()->SetTitleSize(0.035);
   frame_7e67ae0__9->GetZaxis()->SetTitleOffset(1);
   frame_7e67ae0__9->GetZaxis()->SetTitleFont(42);
   frame_7e67ae0__9->Draw("FUNC");
   
   Double_t nll_simPdfFitRegions_dataFitRegions_with_constr_Norm[gamma_stat_UserRegion_cuts_bin_0]_fx5[122] = {
   -0.02,
   -0.02,
   0,
   0.0025,
   0.005,
   0.0075,
   0.01,
   0.0125,
   0.015,
   0.0175,
   0.02,
   0.0225,
   0.025,
   0.03,
   0.035,
   0.04,
   0.045,
   0.05,
   0.06,
   0.07,
   0.08,
   0.09,
   0.1,
   0.11,
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
   Double_t nll_simPdfFitRegions_dataFitRegions_with_constr_Norm[gamma_stat_UserRegion_cuts_bin_0]_fy5[122] = {
   0,
   7.403046,
   7.403046,
   44.20673,
   39.33123,
   36.46955,
   34.4324,
   32.84707,
   31.54753,
   30.44524,
   29.48733,
   28.63971,
   27.8791,
   26.55681,
   25.43191,
   24.45155,
   23.58163,
   22.79888,
   21.43278,
   20.26474,
   19.2419,
   18.3302,
   17.50637,
   16.75385,
   16.06038,
   14.81555,
   13.71923,
   12.73752,
   11.84734,
   11.0323,
   10.28036,
   9.582401,
   8.931411,
   8.321855,
   7.749312,
   7.210198,
   6.70157,
   6.220988,
   5.766406,
   5.336091,
   4.928568,
   4.542564,
   4.176978,
   3.830847,
   3.503321,
   3.193649,
   2.90116,
   2.625254,
   2.365385,
   2.121062,
   1.891836,
   1.677296,
   1.477065,
   1.290796,
   1.118169,
   0.9588868,
   0.8126756,
   0.6792798,
   0.5584622,
   0.450002,
   0.3536929,
   0.2693429,
   0.1967721,
   0.1358124,
   0.08630646,
   0.04810662,
   0.0210744,
   0.005079645,
   0,
   0.00572026,
   0.02213186,
   0.0491324,
   0.08662517,
   0.1345188,
   0.1927267,
   0.2611671,
   0.3397623,
   0.4284386,
   0.5271261,
   0.6357583,
   0.754272,
   0.882607,
   1.020706,
   1.168514,
   1.325979,
   1.493051,
   1.669683,
   1.855828,
   2.051445,
   2.256489,
   2.470923,
   2.694707,
   2.927805,
   3.170181,
   3.421802,
   3.682635,
   3.952648,
   4.231812,
   4.520098,
   4.817478,
   5.123924,
   5.439412,
   5.763916,
   6.097412,
   6.439877,
   6.791289,
   7.151625,
   7.520866,
   7.89899,
   8.285979,
   8.681812,
   9.086473,
   9.499944,
   9.922206,
   10.35324,
   10.79304,
   11.24158,
   11.69885,
   12.16484,
   12.16484,
   12.16484,
   0};
   TGraph *graph = new TGraph(122,nll_simPdfFitRegions_dataFitRegions_with_constr_Norm[gamma_stat_UserRegion_cuts_bin_0]_fx5,nll_simPdfFitRegions_dataFitRegions_with_constr_Norm[gamma_stat_UserRegion_cuts_bin_0]_fy5);
   graph->SetName("nll_simPdfFitRegions_dataFitRegions_with_constr_Norm[gamma_stat_UserRegion_cuts_bin_0]");
   graph->SetTitle("Projection of nllWithCons");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(3);
   
   TH1F *Graph_nll_simPdfFitRegions_dataFitRegions_with_constr_NormoBgamma_stat_UserRegion_cuts_bin_0cB5 = new TH1F("Graph_nll_simPdfFitRegions_dataFitRegions_with_constr_NormoBgamma_stat_UserRegion_cuts_bin_0cB5","Projection of nllWithCons",122,-0.224,2.224);
   Graph_nll_simPdfFitRegions_dataFitRegions_with_constr_NormoBgamma_stat_UserRegion_cuts_bin_0cB5->SetMinimum(0);
   Graph_nll_simPdfFitRegions_dataFitRegions_with_constr_NormoBgamma_stat_UserRegion_cuts_bin_0cB5->SetMaximum(48.6274);
   Graph_nll_simPdfFitRegions_dataFitRegions_with_constr_NormoBgamma_stat_UserRegion_cuts_bin_0cB5->SetDirectory(0);
   Graph_nll_simPdfFitRegions_dataFitRegions_with_constr_NormoBgamma_stat_UserRegion_cuts_bin_0cB5->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_nll_simPdfFitRegions_dataFitRegions_with_constr_NormoBgamma_stat_UserRegion_cuts_bin_0cB5->SetLineColor(ci);
   Graph_nll_simPdfFitRegions_dataFitRegions_with_constr_NormoBgamma_stat_UserRegion_cuts_bin_0cB5->GetXaxis()->SetLabelFont(42);
   Graph_nll_simPdfFitRegions_dataFitRegions_with_constr_NormoBgamma_stat_UserRegion_cuts_bin_0cB5->GetXaxis()->SetLabelSize(0.035);
   Graph_nll_simPdfFitRegions_dataFitRegions_with_constr_NormoBgamma_stat_UserRegion_cuts_bin_0cB5->GetXaxis()->SetTitleSize(0.035);
   Graph_nll_simPdfFitRegions_dataFitRegions_with_constr_NormoBgamma_stat_UserRegion_cuts_bin_0cB5->GetXaxis()->SetTitleOffset(1);
   Graph_nll_simPdfFitRegions_dataFitRegions_with_constr_NormoBgamma_stat_UserRegion_cuts_bin_0cB5->GetXaxis()->SetTitleFont(42);
   Graph_nll_simPdfFitRegions_dataFitRegions_with_constr_NormoBgamma_stat_UserRegion_cuts_bin_0cB5->GetYaxis()->SetLabelFont(42);
   Graph_nll_simPdfFitRegions_dataFitRegions_with_constr_NormoBgamma_stat_UserRegion_cuts_bin_0cB5->GetYaxis()->SetLabelSize(0.035);
   Graph_nll_simPdfFitRegions_dataFitRegions_with_constr_NormoBgamma_stat_UserRegion_cuts_bin_0cB5->GetYaxis()->SetTitleSize(0.035);
   Graph_nll_simPdfFitRegions_dataFitRegions_with_constr_NormoBgamma_stat_UserRegion_cuts_bin_0cB5->GetYaxis()->SetTitleFont(42);
   Graph_nll_simPdfFitRegions_dataFitRegions_with_constr_NormoBgamma_stat_UserRegion_cuts_bin_0cB5->GetZaxis()->SetLabelFont(42);
   Graph_nll_simPdfFitRegions_dataFitRegions_with_constr_NormoBgamma_stat_UserRegion_cuts_bin_0cB5->GetZaxis()->SetLabelSize(0.035);
   Graph_nll_simPdfFitRegions_dataFitRegions_with_constr_NormoBgamma_stat_UserRegion_cuts_bin_0cB5->GetZaxis()->SetTitleSize(0.035);
   Graph_nll_simPdfFitRegions_dataFitRegions_with_constr_NormoBgamma_stat_UserRegion_cuts_bin_0cB5->GetZaxis()->SetTitleOffset(1);
   Graph_nll_simPdfFitRegions_dataFitRegions_with_constr_NormoBgamma_stat_UserRegion_cuts_bin_0cB5->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_nll_simPdfFitRegions_dataFitRegions_with_constr_Norm[gamma_stat_UserRegion_cuts_bin_0]5);
   
   graph->Draw("l");
   TLine *line = new TLine(0,2,2,2);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(0,0.5,2,0.5);
   line->SetLineStyle(3);
   line->Draw();
   
   TH1D *frame_7e67ae0__10 = new TH1D("frame_7e67ae0__10","A RooPlot of \"gamma_stat_UserRegion_cuts_bin_0\"",100,0,2);
   frame_7e67ae0__10->SetBinContent(1,46.41706);
   frame_7e67ae0__10->SetMinimum(0);
   frame_7e67ae0__10->SetMaximum(2.5);
   frame_7e67ae0__10->SetEntries(1);
   frame_7e67ae0__10->SetDirectory(0);
   frame_7e67ae0__10->SetStats(0);

   ci = TColor::GetColor("#000099");
   frame_7e67ae0__10->SetLineColor(ci);
   frame_7e67ae0__10->GetXaxis()->SetTitle("gamma_stat_UserRegion_cuts_bin_0");
   frame_7e67ae0__10->GetXaxis()->SetLabelFont(42);
   frame_7e67ae0__10->GetXaxis()->SetLabelSize(0.035);
   frame_7e67ae0__10->GetXaxis()->SetTitleSize(0.035);
   frame_7e67ae0__10->GetXaxis()->SetTitleOffset(1);
   frame_7e67ae0__10->GetXaxis()->SetTitleFont(42);
   frame_7e67ae0__10->GetYaxis()->SetTitle("Projection of nllWithCons");
   frame_7e67ae0__10->GetYaxis()->SetLabelFont(42);
   frame_7e67ae0__10->GetYaxis()->SetLabelSize(0.035);
   frame_7e67ae0__10->GetYaxis()->SetTitleSize(0.035);
   frame_7e67ae0__10->GetYaxis()->SetTitleFont(42);
   frame_7e67ae0__10->GetZaxis()->SetLabelFont(42);
   frame_7e67ae0__10->GetZaxis()->SetLabelSize(0.035);
   frame_7e67ae0__10->GetZaxis()->SetTitleSize(0.035);
   frame_7e67ae0__10->GetZaxis()->SetTitleOffset(1);
   frame_7e67ae0__10->GetZaxis()->SetTitleFont(42);
   frame_7e67ae0__10->Draw("AXISSAME");
   
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
   
   TPaveText *pt = new TPaveText(0.15,0.9341608,0.85,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("A RooPlot of \"gamma_stat_UserRegion_cuts_bin_0\"");
   pt->Draw();
   can_NLL__RooExpandedFitResult_afterFit_gamma_stat_UserRegion_cuts_bin_0->Modified();
   can_NLL__RooExpandedFitResult_afterFit_gamma_stat_UserRegion_cuts_bin_0->cd();
   can_NLL__RooExpandedFitResult_afterFit_gamma_stat_UserRegion_cuts_bin_0->SetSelected(can_NLL__RooExpandedFitResult_afterFit_gamma_stat_UserRegion_cuts_bin_0);
}
