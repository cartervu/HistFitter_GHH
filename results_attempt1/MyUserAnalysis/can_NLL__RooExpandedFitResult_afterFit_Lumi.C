void can_NLL__RooExpandedFitResult_afterFit_Lumi()
{
//=========Macro generated from canvas: can_NLL__RooExpandedFitResult_afterFit_Lumi/can_NLL__RooExpandedFitResult_afterFit_Lumi
//=========  (Sat Jul 18 23:08:58 2020) by ROOT version 6.18/04
   TCanvas *can_NLL__RooExpandedFitResult_afterFit_Lumi = new TCanvas("can_NLL__RooExpandedFitResult_afterFit_Lumi", "can_NLL__RooExpandedFitResult_afterFit_Lumi",0,0,600,600);
   gStyle->SetOptStat(0);
   can_NLL__RooExpandedFitResult_afterFit_Lumi->SetHighLightColor(2);
   can_NLL__RooExpandedFitResult_afterFit_Lumi->Range(0.61175,-0.3125,2.15425,2.8125);
   can_NLL__RooExpandedFitResult_afterFit_Lumi->SetFillColor(0);
   can_NLL__RooExpandedFitResult_afterFit_Lumi->SetBorderMode(0);
   can_NLL__RooExpandedFitResult_afterFit_Lumi->SetBorderSize(2);
   can_NLL__RooExpandedFitResult_afterFit_Lumi->SetFrameBorderMode(0);
   can_NLL__RooExpandedFitResult_afterFit_Lumi->SetFrameBorderMode(0);
   
   TH1D *frame_7f2ec20__1 = new TH1D("frame_7f2ec20__1","A RooPlot of \"Lumi\"",100,0.766,2);
   frame_7f2ec20__1->SetBinContent(1,213.1371);
   frame_7f2ec20__1->SetMinimum(0);
   frame_7f2ec20__1->SetMaximum(2.5);
   frame_7f2ec20__1->SetEntries(1);
   frame_7f2ec20__1->SetDirectory(0);
   frame_7f2ec20__1->SetStats(0);

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#000099");
   frame_7f2ec20__1->SetLineColor(ci);
   frame_7f2ec20__1->GetXaxis()->SetTitle("Lumi");
   frame_7f2ec20__1->GetXaxis()->SetLabelFont(42);
   frame_7f2ec20__1->GetXaxis()->SetLabelSize(0.035);
   frame_7f2ec20__1->GetXaxis()->SetTitleSize(0.035);
   frame_7f2ec20__1->GetXaxis()->SetTitleOffset(1);
   frame_7f2ec20__1->GetXaxis()->SetTitleFont(42);
   frame_7f2ec20__1->GetYaxis()->SetTitle("Projection of nllWithCons");
   frame_7f2ec20__1->GetYaxis()->SetLabelFont(42);
   frame_7f2ec20__1->GetYaxis()->SetLabelSize(0.035);
   frame_7f2ec20__1->GetYaxis()->SetTitleSize(0.035);
   frame_7f2ec20__1->GetYaxis()->SetTitleFont(42);
   frame_7f2ec20__1->GetZaxis()->SetLabelFont(42);
   frame_7f2ec20__1->GetZaxis()->SetLabelSize(0.035);
   frame_7f2ec20__1->GetZaxis()->SetTitleSize(0.035);
   frame_7f2ec20__1->GetZaxis()->SetTitleOffset(1);
   frame_7f2ec20__1->GetZaxis()->SetTitleFont(42);
   frame_7f2ec20__1->Draw("FUNC");
   
   Double_t nll_simPdfFitRegions_dataFitRegions_with_constr_Norm[Lumi]_fx1[106] = {
   0.75366,
   0.75366,
   0.766,
   0.77834,
   0.79068,
   0.80302,
   0.81536,
   0.8277,
   0.84004,
   0.85238,
   0.86472,
   0.87706,
   0.8894,
   0.90174,
   0.91408,
   0.92642,
   0.93876,
   0.9511,
   0.96344,
   0.97578,
   0.98812,
   1.00046,
   1.0128,
   1.02514,
   1.03748,
   1.04982,
   1.06216,
   1.0745,
   1.08684,
   1.09918,
   1.11152,
   1.12386,
   1.1362,
   1.14854,
   1.16088,
   1.17322,
   1.18556,
   1.1979,
   1.21024,
   1.22258,
   1.23492,
   1.24726,
   1.2596,
   1.27194,
   1.28428,
   1.29662,
   1.30896,
   1.3213,
   1.33364,
   1.34598,
   1.35832,
   1.37066,
   1.383,
   1.39534,
   1.40768,
   1.42002,
   1.43236,
   1.4447,
   1.45704,
   1.46938,
   1.48172,
   1.49406,
   1.5064,
   1.51874,
   1.53108,
   1.54342,
   1.55576,
   1.5681,
   1.58044,
   1.59278,
   1.60512,
   1.61746,
   1.6298,
   1.64214,
   1.65448,
   1.66682,
   1.67916,
   1.6915,
   1.70384,
   1.71618,
   1.72852,
   1.74086,
   1.7532,
   1.76554,
   1.77788,
   1.79022,
   1.80256,
   1.8149,
   1.82724,
   1.83958,
   1.85192,
   1.86426,
   1.8766,
   1.88894,
   1.90128,
   1.91362,
   1.92596,
   1.9383,
   1.95064,
   1.96298,
   1.97532,
   1.98766,
   2,
   2,
   2.01234,
   2.01234};
   Double_t nll_simPdfFitRegions_dataFitRegions_with_constr_Norm[Lumi]_fy1[106] = {
   0,
   18.01548,
   18.01548,
   16.16539,
   14.4155,
   12.76584,
   11.21639,
   9.767156,
   8.418136,
   7.169328,
   6.020733,
   4.972349,
   4.024176,
   3.176214,
   2.428461,
   1.780917,
   1.233581,
   0.7864521,
   0.4395304,
   0.192815,
   0.04630505,
   0,
   0.0538992,
   0.208002,
   0.4623078,
   0.816816,
   1.271526,
   1.826437,
   2.481549,
   3.236861,
   4.092372,
   5.048082,
   6.10399,
   7.260096,
   8.516399,
   9.872898,
   11.32959,
   12.88648,
   14.54357,
   16.30084,
   18.15829,
   20.11587,
   22.17344,
   24.33067,
   26.58679,
   28.94023,
   31.38818,
   33.92617,
   36.54793,
   39.24554,
   42.01004,
   44.83215,
   47.70298,
   50.61445,
   53.55958,
   56.53253,
   59.52847,
   62.54349,
   65.57445,
   68.61879,
   71.67447,
   74.73982,
   77.81348,
   80.89433,
   83.98146,
   87.0741,
   90.17161,
   93.27344,
   96.37914,
   99.48832,
   102.6006,
   105.7158,
   108.8335,
   111.9536,
   115.0759,
   118.2002,
   121.3263,
   124.4542,
   127.5836,
   130.7145,
   133.8468,
   136.9804,
   140.1152,
   143.2511,
   146.3881,
   149.5262,
   152.6652,
   155.8051,
   158.9458,
   162.0874,
   165.2298,
   168.3729,
   171.5167,
   174.6612,
   177.8063,
   180.9521,
   184.0984,
   187.2453,
   190.3928,
   193.5408,
   196.6893,
   199.8383,
   202.9877,
   202.9877,
   202.9877,
   0};
   TGraph *graph = new TGraph(106,nll_simPdfFitRegions_dataFitRegions_with_constr_Norm[Lumi]_fx1,nll_simPdfFitRegions_dataFitRegions_with_constr_Norm[Lumi]_fy1);
   graph->SetName("nll_simPdfFitRegions_dataFitRegions_with_constr_Norm[Lumi]");
   graph->SetTitle("Projection of nllWithCons");
   graph->SetFillStyle(1000);

   ci = TColor::GetColor("#0000ff");
   graph->SetLineColor(ci);
   graph->SetLineWidth(3);
   
   TH1F *Graph_nll_simPdfFitRegions_dataFitRegions_with_constr_NormoBLumicB1 = new TH1F("Graph_nll_simPdfFitRegions_dataFitRegions_with_constr_NormoBLumicB1","Projection of nllWithCons",106,0.627792,2.138208);
   Graph_nll_simPdfFitRegions_dataFitRegions_with_constr_NormoBLumicB1->SetMinimum(0);
   Graph_nll_simPdfFitRegions_dataFitRegions_with_constr_NormoBLumicB1->SetMaximum(223.2865);
   Graph_nll_simPdfFitRegions_dataFitRegions_with_constr_NormoBLumicB1->SetDirectory(0);
   Graph_nll_simPdfFitRegions_dataFitRegions_with_constr_NormoBLumicB1->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_nll_simPdfFitRegions_dataFitRegions_with_constr_NormoBLumicB1->SetLineColor(ci);
   Graph_nll_simPdfFitRegions_dataFitRegions_with_constr_NormoBLumicB1->GetXaxis()->SetLabelFont(42);
   Graph_nll_simPdfFitRegions_dataFitRegions_with_constr_NormoBLumicB1->GetXaxis()->SetLabelSize(0.035);
   Graph_nll_simPdfFitRegions_dataFitRegions_with_constr_NormoBLumicB1->GetXaxis()->SetTitleSize(0.035);
   Graph_nll_simPdfFitRegions_dataFitRegions_with_constr_NormoBLumicB1->GetXaxis()->SetTitleOffset(1);
   Graph_nll_simPdfFitRegions_dataFitRegions_with_constr_NormoBLumicB1->GetXaxis()->SetTitleFont(42);
   Graph_nll_simPdfFitRegions_dataFitRegions_with_constr_NormoBLumicB1->GetYaxis()->SetLabelFont(42);
   Graph_nll_simPdfFitRegions_dataFitRegions_with_constr_NormoBLumicB1->GetYaxis()->SetLabelSize(0.035);
   Graph_nll_simPdfFitRegions_dataFitRegions_with_constr_NormoBLumicB1->GetYaxis()->SetTitleSize(0.035);
   Graph_nll_simPdfFitRegions_dataFitRegions_with_constr_NormoBLumicB1->GetYaxis()->SetTitleFont(42);
   Graph_nll_simPdfFitRegions_dataFitRegions_with_constr_NormoBLumicB1->GetZaxis()->SetLabelFont(42);
   Graph_nll_simPdfFitRegions_dataFitRegions_with_constr_NormoBLumicB1->GetZaxis()->SetLabelSize(0.035);
   Graph_nll_simPdfFitRegions_dataFitRegions_with_constr_NormoBLumicB1->GetZaxis()->SetTitleSize(0.035);
   Graph_nll_simPdfFitRegions_dataFitRegions_with_constr_NormoBLumicB1->GetZaxis()->SetTitleOffset(1);
   Graph_nll_simPdfFitRegions_dataFitRegions_with_constr_NormoBLumicB1->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_nll_simPdfFitRegions_dataFitRegions_with_constr_Norm[Lumi]1);
   
   graph->Draw("l");
   TLine *line = new TLine(0.766,2,2,2);
   line->SetLineStyle(3);
   line->Draw();
   line = new TLine(0.766,0.5,2,0.5);
   line->SetLineStyle(3);
   line->Draw();
   
   TH1D *frame_7f2ec20__2 = new TH1D("frame_7f2ec20__2","A RooPlot of \"Lumi\"",100,0.766,2);
   frame_7f2ec20__2->SetBinContent(1,213.1371);
   frame_7f2ec20__2->SetMinimum(0);
   frame_7f2ec20__2->SetMaximum(2.5);
   frame_7f2ec20__2->SetEntries(1);
   frame_7f2ec20__2->SetDirectory(0);
   frame_7f2ec20__2->SetStats(0);

   ci = TColor::GetColor("#000099");
   frame_7f2ec20__2->SetLineColor(ci);
   frame_7f2ec20__2->GetXaxis()->SetTitle("Lumi");
   frame_7f2ec20__2->GetXaxis()->SetLabelFont(42);
   frame_7f2ec20__2->GetXaxis()->SetLabelSize(0.035);
   frame_7f2ec20__2->GetXaxis()->SetTitleSize(0.035);
   frame_7f2ec20__2->GetXaxis()->SetTitleOffset(1);
   frame_7f2ec20__2->GetXaxis()->SetTitleFont(42);
   frame_7f2ec20__2->GetYaxis()->SetTitle("Projection of nllWithCons");
   frame_7f2ec20__2->GetYaxis()->SetLabelFont(42);
   frame_7f2ec20__2->GetYaxis()->SetLabelSize(0.035);
   frame_7f2ec20__2->GetYaxis()->SetTitleSize(0.035);
   frame_7f2ec20__2->GetYaxis()->SetTitleFont(42);
   frame_7f2ec20__2->GetZaxis()->SetLabelFont(42);
   frame_7f2ec20__2->GetZaxis()->SetLabelSize(0.035);
   frame_7f2ec20__2->GetZaxis()->SetTitleSize(0.035);
   frame_7f2ec20__2->GetZaxis()->SetTitleOffset(1);
   frame_7f2ec20__2->GetZaxis()->SetTitleFont(42);
   frame_7f2ec20__2->Draw("AXISSAME");
   
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
   
   TPaveText *pt = new TPaveText(0.2559396,0.94,0.7440604,0.995,"blNDC");
   pt->SetName("title");
   pt->SetBorderSize(0);
   pt->SetFillColor(0);
   pt->SetFillStyle(0);
   pt->SetTextFont(42);
   TText *pt_LaTex = pt->AddText("A RooPlot of \"Lumi\"");
   pt->Draw();
   can_NLL__RooExpandedFitResult_afterFit_Lumi->Modified();
   can_NLL__RooExpandedFitResult_afterFit_Lumi->cd();
   can_NLL__RooExpandedFitResult_afterFit_Lumi->SetSelected(can_NLL__RooExpandedFitResult_afterFit_Lumi);
}
