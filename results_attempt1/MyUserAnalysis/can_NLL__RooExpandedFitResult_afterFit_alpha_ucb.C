void can_NLL__RooExpandedFitResult_afterFit_alpha_ucb()
{
//=========Macro generated from canvas: can_NLL__RooExpandedFitResult_afterFit_alpha_ucb/can_NLL__RooExpandedFitResult_afterFit_alpha_ucb
//=========  (Sat Jul 18 23:08:59 2020) by ROOT version 6.18/04
   TCanvas *can_NLL__RooExpandedFitResult_afterFit_alpha_ucb = new TCanvas("can_NLL__RooExpandedFitResult_afterFit_alpha_ucb", "can_NLL__RooExpandedFitResult_afterFit_alpha_ucb",0,0,600,600);
   gStyle->SetOptStat(0);
   can_NLL__RooExpandedFitResult_afterFit_alpha_ucb->SetHighLightColor(2);
   can_NLL__RooExpandedFitResult_afterFit_alpha_ucb->Range(-3.75,-0.3125,3.75,2.8125);
   can_NLL__RooExpandedFitResult_afterFit_alpha_ucb->SetFillColor(0);
   can_NLL__RooExpandedFitResult_afterFit_alpha_ucb->SetBorderMode(0);
   can_NLL__RooExpandedFitResult_afterFit_alpha_ucb->SetBorderSize(2);
   can_NLL__RooExpandedFitResult_afterFit_alpha_ucb->SetFrameBorderMode(0);
   can_NLL__RooExpandedFitResult_afterFit_alpha_ucb->SetFrameBorderMode(0);
   
   TH1D *frame_7b96e60__5 = new TH1D("frame_7b96e60__5","A RooPlot of \"alpha_ucb\"",100,-3,3);
   frame_7b96e60__5->SetBinContent(1,5.480776);
   frame_7b96e60__5->SetMinimum(0);
   frame_7b96e60__5->SetMaximum(2.5);
   frame_7b96e60__5->SetEntries(1);
   frame_7b96e60__5->SetDirectory(0);
   frame_7b96e60__5->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   frame_7b96e60__5->SetLineColor(ci);
   frame_7b96e60__5->GetXaxis()->SetTitle("alpha_ucb");
   frame_7b96e60__5->GetXaxis()->SetLabelFont(42);
   frame_7b96e60__5->GetXaxis()->SetLabelSize(0.035);
   frame_7b96e60__5->GetXaxis()->SetTitleSize(0.035);
   frame_7b96e60__5->GetXaxis()->SetTitleOffset(1);
   frame_7b96e60__5->GetXaxis()->SetTitleFont(42);
   frame_7b96e60__5->GetYaxis()->SetTitle("Projection of nllWithCons");
   frame_7b96e60__5->GetYaxis()->SetLabelFont(42);
   frame_7b96e60__5->GetYaxis()->SetLabelSize(0.035);
   frame_7b96e60__5->GetYaxis()->SetTitleSize(0.035);
   frame_7b96e60__5->GetYaxis()->SetTitleFont(42);
   frame_7b96e60__5->GetZaxis()->SetLabelFont(42);
   frame_7b96e60__5->GetZaxis()->SetLabelSize(0.035);
   frame_7b96e60__5->GetZaxis()->SetTitleSize(0.035);
   frame_7b96e60__5->GetZaxis()->SetTitleOffset(1);
   frame_7b96e60__5->GetZaxis()->SetTitleFont(42);
   frame_7b96e60__5->Draw("FUNC");
   
   Double_t nll_simPdfFitRegions_dataFitRegions_with_constr_Norm[alpha_ucb]_fx3[106] = {
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
   Double_t nll_simPdfFitRegions_dataFitRegions_with_constr_Norm[alpha_ucb]_fy3[106] = {
   0,
   5.045526,
   5.045526,
   4.849364,
   4.656958,
   4.468316,
   4.283443,
   4.102348,
   3.925038,
   3.751518,
   3.581798,
   3.415884,
   3.253785,
   3.095507,
   2.941058,
   2.790447,
   2.643682,
   2.50077,
   2.361721,
   2.226541,
   2.095242,
   1.967829,
   1.844314,
   1.724704,
   1.609008,
   1.497236,
   1.389398,
   1.285502,
   1.185558,
   1.089576,
   0.9975663,
   0.9095381,
   0.8255019,
   0.7454679,
   0.6694465,
   0.5974485,
   0.5294819,
   0.4655332,
   0.4055936,
   0.3496754,
   0.2978048,
   0.2500151,
   0.206342,
   0.1668187,
   0.1314739,
   0.1003285,
   0.07339583,
   0.05068018,
   0.03217784,
   0.01787776,
   0.007762891,
   0.001811717,
   0,
   0.002302522,
   0.008694793,
   0.01915463,
   0.03366353,
   0.05220785,
   0.07477963,
   0.1013772,
   0.1320054,
   0.1666753,
   0.2054038,
   0.2482126,
   0.2951264,
   0.3461709,
   0.40137,
   0.4607421,
   0.5242955,
   0.5920237,
   0.663917,
   0.7399826,
   0.8202292,
   0.9046658,
   0.9933016,
   1.086146,
   1.183207,
   1.284496,
   1.39002,
   1.499791,
   1.613817,
   1.732108,
   1.854674,
   1.981525,
   2.112671,
   2.248122,
   2.387888,
   2.53198,
   2.680408,
   2.833183,
   2.990315,
   3.151815,
   3.317693,
   3.487962,
   3.662631,
   3.841713,
   4.025218,
   4.213157,
   4.405543,
   4.602388,
   4.803702,
   5.009497,
   5.219787,
   5.219787,
   5.219787,
   0};
   TGraph *graph = new TGraph(106,nll_simPdfFitRegions_dataFitRegions_with_constr_Norm[alpha_ucb]_fx3,nll_simPdfFitRegions_dataFitRegions_with_constr_Norm[alpha_ucb]_fy3);
   graph->SetName("nll_simPdfFitRegions_dataFitRegions_with_constr_Norm[alpha_ucb]");
   graph->SetTitle("Projection of nllWithCons");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(3);
   
   TH1F *Graph_nll_simPdfFitRegions_dataFitRegions_with_constr_NormoBalpha_ucbcB3 = new TH1F("Graph_nll_simPdfFitRegions_dataFitRegions_with_constr_NormoBalpha_ucbcB3","Projection of nllWithCons",106,-3.672,3.672);
   Graph_nll_simPdfFitRegions_dataFitRegions_with_constr_NormoBalpha_ucbcB3->SetMinimum(0);
   Graph_nll_simPdfFitRegions_dataFitRegions_with_constr_NormoBalpha_ucbcB3->SetMaximum(5.741765);
   Graph_nll_simPdfFitRegions_dataFitRegions_with_constr_NormoBalpha_ucbcB3->SetDirectory(0);
   Graph_nll_simPdfFitRegions_dataFitRegions_with_constr_NormoBalpha_ucbcB3->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_nll_simPdfFitRegions_dataFitRegions_with_constr_NormoBalpha_ucbcB3->SetLineColor(ci);
   Graph_nll_simPdfFitRegions_dataFitRegions_with_constr_NormoBalpha_ucbcB3->GetXaxis()->SetLabelFont(42);
   Graph_nll_simPdfFitRegions_dataFitRegions_with_constr_NormoBalpha_ucbcB3->GetXaxis()->SetLabelSize(0.035);
   Graph_nll_simPdfFitRegions_dataFitRegions_with_constr_NormoBalpha_ucbcB3->GetXaxis()->SetTitleSize(0.035);
   Graph_nll_simPdfFitRegions_dataFitRegions_with_constr_NormoBalpha_ucbcB3->GetXaxis()->SetTitleOffset(1);
   Graph_nll_simPdfFitRegions_dataFitRegions_with_constr_NormoBalpha_ucbcB3->GetXaxis()->SetTitleFont(42);
   Graph_nll_simPdfFitRegions_dataFitRegions_with_constr_NormoBalpha_ucbcB3->GetYaxis()->SetLabelFont(42);
   Graph_nll_simPdfFitRegions_dataFitRegions_with_constr_NormoBalpha_ucbcB3->GetYaxis()->SetLabelSize(0.035);
   Graph_nll_simPdfFitRegions_dataFitRegions_with_constr_NormoBalpha_ucbcB3->GetYaxis()->SetTitleSize(0.035);
   Graph_nll_simPdfFitRegions_dataFitRegions_with_constr_NormoBalpha_ucbcB3->GetYaxis()->SetTitleFont(42);
   Graph_nll_simPdfFitRegions_dataFitRegions_with_constr_NormoBalpha_ucbcB3->GetZaxis()->SetLabelFont(42);
   Graph_nll_simPdfFitRegions_dataFitRegions_with_constr_NormoBalpha_ucbcB3->GetZaxis()->SetLabelSize(0.035);
   Graph_nll_simPdfFitRegions_dataFitRegions_with_constr_NormoBalpha_ucbcB3->GetZaxis()->SetTitleSize(0.035);
   Graph_nll_simPdfFitRegions_dataFitRegions_with_constr_NormoBalpha_ucbcB3->GetZaxis()->SetTitleOffset(1);
   Graph_nll_simPdfFitRegions_dataFitRegions_with_constr_NormoBalpha_ucbcB3->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_nll_simPdfFitRegions_dataFitRegions_with_constr_Norm[alpha_ucb]3);
   
   graph->Draw("l");
   TLine *line = new TLine(-3,2,3,2);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(-3,0.5,3,0.5);
   line->SetLineStyle(3);
   line->Draw();
   
   TH1D *frame_7b96e60__6 = new TH1D("frame_7b96e60__6","A RooPlot of \"alpha_ucb\"",100,-3,3);
   frame_7b96e60__6->SetBinContent(1,5.480776);
   frame_7b96e60__6->SetMinimum(0);
   frame_7b96e60__6->SetMaximum(2.5);
   frame_7b96e60__6->SetEntries(1);
   frame_7b96e60__6->SetDirectory(0);
   frame_7b96e60__6->SetStats(0);

   ci = TColor::GetColor("#000099");
   frame_7b96e60__6->SetLineColor(ci);
   frame_7b96e60__6->GetXaxis()->SetTitle("alpha_ucb");
   frame_7b96e60__6->GetXaxis()->SetLabelFont(42);
   frame_7b96e60__6->GetXaxis()->SetLabelSize(0.035);
   frame_7b96e60__6->GetXaxis()->SetTitleSize(0.035);
   frame_7b96e60__6->GetXaxis()->SetTitleOffset(1);
   frame_7b96e60__6->GetXaxis()->SetTitleFont(42);
   frame_7b96e60__6->GetYaxis()->SetTitle("Projection of nllWithCons");
   frame_7b96e60__6->GetYaxis()->SetLabelFont(42);
   frame_7b96e60__6->GetYaxis()->SetLabelSize(0.035);
   frame_7b96e60__6->GetYaxis()->SetTitleSize(0.035);
   frame_7b96e60__6->GetYaxis()->SetTitleFont(42);
   frame_7b96e60__6->GetZaxis()->SetLabelFont(42);
   frame_7b96e60__6->GetZaxis()->SetLabelSize(0.035);
   frame_7b96e60__6->GetZaxis()->SetTitleSize(0.035);
   frame_7b96e60__6->GetZaxis()->SetTitleOffset(1);
   frame_7b96e60__6->GetZaxis()->SetTitleFont(42);
   frame_7b96e60__6->Draw("AXISSAME");
   
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
   
   TPaveText *pt = new TPaveText(0.1930201,0.9341608,0.8069799,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("A RooPlot of \"alpha_ucb\"");
   pt->Draw();
   can_NLL__RooExpandedFitResult_afterFit_alpha_ucb->Modified();
   can_NLL__RooExpandedFitResult_afterFit_alpha_ucb->cd();
   can_NLL__RooExpandedFitResult_afterFit_alpha_ucb->SetSelected(can_NLL__RooExpandedFitResult_afterFit_alpha_ucb);
}
