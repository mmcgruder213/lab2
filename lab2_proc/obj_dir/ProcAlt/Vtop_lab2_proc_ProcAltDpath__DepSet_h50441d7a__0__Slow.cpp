// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vtop.h for the primary calling header

#include "verilated.h"
#include "verilated_dpi.h"

#include "Vtop__Syms.h"
#include "Vtop_lab2_proc_ProcAltDpath.h"

VL_ATTR_COLD void Vtop_lab2_proc_ProcAltDpath___ctor_var_reset(Vtop_lab2_proc_ProcAltDpath* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    Vtop__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          Vtop_lab2_proc_ProcAltDpath___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__reset = VL_RAND_RESET_I(1);
    vlSelf->__PVT__imem_reqstream_msg_addr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__imem_respstream_msg = VL_RAND_RESET_Q(47);
    vlSelf->__PVT__dmem_reqstream_msg_addr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__dmem_reqstream_msg_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__dmem_respstream_msg_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__mngr2proc_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__proc2mngr_data = VL_RAND_RESET_I(32);
    vlSelf->__PVT__imem_respstream_drop = VL_RAND_RESET_I(1);
    vlSelf->__PVT__reg_en_F = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pc_sel_F = VL_RAND_RESET_I(2);
    vlSelf->__PVT__reg_en_D = VL_RAND_RESET_I(1);
    vlSelf->__PVT__op1_sel_D = VL_RAND_RESET_I(1);
    vlSelf->__PVT__op2_sel_D = VL_RAND_RESET_I(2);
    vlSelf->__PVT__csrr_sel_D = VL_RAND_RESET_I(2);
    vlSelf->__PVT__imm_type_D = VL_RAND_RESET_I(3);
    vlSelf->__PVT__op1_byp_sel_D = VL_RAND_RESET_I(2);
    vlSelf->__PVT__op2_byp_sel_D = VL_RAND_RESET_I(2);
    vlSelf->__PVT__reg_en_X = VL_RAND_RESET_I(1);
    vlSelf->__PVT__alu_fn_X = VL_RAND_RESET_I(4);
    vlSelf->__PVT__ex_result_sel_X = VL_RAND_RESET_I(2);
    vlSelf->__PVT__imul_req_val_D = VL_RAND_RESET_I(1);
    vlSelf->__PVT__imul_resp_rdy_X = VL_RAND_RESET_I(1);
    vlSelf->__PVT__imul_req_rdy_D = VL_RAND_RESET_I(1);
    vlSelf->__PVT__imul_resp_val_X = VL_RAND_RESET_I(1);
    vlSelf->__PVT__reg_en_M = VL_RAND_RESET_I(1);
    vlSelf->__PVT__wb_result_sel_M = VL_RAND_RESET_I(1);
    vlSelf->__PVT__reg_en_W = VL_RAND_RESET_I(1);
    vlSelf->__PVT__rf_waddr_W = VL_RAND_RESET_I(5);
    vlSelf->__PVT__rf_wen_W = VL_RAND_RESET_I(1);
    vlSelf->__PVT__stats_en_wen_W = VL_RAND_RESET_I(1);
    vlSelf->__PVT__inst_D = VL_RAND_RESET_I(32);
    vlSelf->__PVT__br_cond_eq_X = VL_RAND_RESET_I(1);
    vlSelf->__PVT__br_cond_lt_X = VL_RAND_RESET_I(1);
    vlSelf->__PVT__br_cond_ltu_X = VL_RAND_RESET_I(1);
    vlSelf->__PVT__core_id = VL_RAND_RESET_I(32);
    vlSelf->__PVT__stats_en = VL_RAND_RESET_I(1);
    vlSelf->__PVT__pc_F = VL_RAND_RESET_I(32);
    vlSelf->__PVT__pc_next_F = VL_RAND_RESET_I(32);
    vlSelf->__PVT__pc_plus4_F = VL_RAND_RESET_I(32);
    vlSelf->__PVT__br_target_X = VL_RAND_RESET_I(32);
    vlSelf->__PVT__jal_target_D = VL_RAND_RESET_I(32);
    vlSelf->__PVT__jalr_target_X = VL_RAND_RESET_I(32);
    vlSelf->__PVT__pc_D = VL_RAND_RESET_I(32);
    vlSelf->__PVT__inst_rd_D = VL_RAND_RESET_I(5);
    vlSelf->__PVT__inst_rs1_D = VL_RAND_RESET_I(5);
    vlSelf->__PVT__inst_rs2_D = VL_RAND_RESET_I(5);
    vlSelf->__PVT__imm_D = VL_RAND_RESET_I(32);
    vlSelf->__PVT__bypass_from_X = VL_RAND_RESET_I(32);
    vlSelf->__PVT__bypass_from_M = VL_RAND_RESET_I(32);
    vlSelf->__PVT__bypass_from_W = VL_RAND_RESET_I(32);
    vlSelf->__Vcellinp__inst_D_reg__d = VL_RAND_RESET_I(32);
    vlSelf->__PVT__rf_rdata0_D = VL_RAND_RESET_I(32);
    vlSelf->__PVT__rf_rdata1_D = VL_RAND_RESET_I(32);
    vlSelf->__PVT__rf_wdata_W = VL_RAND_RESET_I(32);
    vlSelf->__PVT__op1_D = VL_RAND_RESET_I(32);
    vlSelf->__PVT__op2_D = VL_RAND_RESET_I(32);
    vlSelf->__PVT__csrr_data_D = VL_RAND_RESET_I(32);
    vlSelf->__PVT__num_cores = VL_RAND_RESET_I(32);
    vlSelf->__PVT__op1_byp_mux_out = VL_RAND_RESET_I(32);
    vlSelf->__PVT__op2_byp_mux_out = VL_RAND_RESET_I(32);
    vlSelf->__PVT__istream_msg = VL_RAND_RESET_Q(64);
    vlSelf->__PVT__ostream_msg = VL_RAND_RESET_I(32);
    vlSelf->__PVT__op1_X = VL_RAND_RESET_I(32);
    vlSelf->__PVT__op2_X = VL_RAND_RESET_I(32);
    vlSelf->__PVT__pc_X = VL_RAND_RESET_I(32);
    vlSelf->__PVT__alu_result_X = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ex_result_X = VL_RAND_RESET_I(32);
    vlSelf->__PVT__pc_plus4_X = VL_RAND_RESET_I(32);
    vlSelf->__PVT__ex_result_M = VL_RAND_RESET_I(32);
    vlSelf->__PVT__dmem_result_M = VL_RAND_RESET_I(32);
    vlSelf->__PVT__wb_result_M = VL_RAND_RESET_I(32);
    vlSelf->__PVT__wb_result_W = VL_RAND_RESET_I(32);
    vlSelf->__PVT__stats_en_W = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__clk = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__reset = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__imem_reqstream_msg_addr = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__imem_respstream_msg = VL_RAND_RESET_Q(47);
    vlSelf->__Vtogcov__dmem_reqstream_msg_addr = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__dmem_reqstream_msg_data = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__dmem_respstream_msg_data = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__mngr2proc_data = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__proc2mngr_data = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__imem_respstream_drop = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__reg_en_F = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__pc_sel_F = VL_RAND_RESET_I(2);
    vlSelf->__Vtogcov__reg_en_D = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__op1_sel_D = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__op2_sel_D = VL_RAND_RESET_I(2);
    vlSelf->__Vtogcov__csrr_sel_D = VL_RAND_RESET_I(2);
    vlSelf->__Vtogcov__imm_type_D = VL_RAND_RESET_I(3);
    vlSelf->__Vtogcov__op1_byp_sel_D = VL_RAND_RESET_I(2);
    vlSelf->__Vtogcov__op2_byp_sel_D = VL_RAND_RESET_I(2);
    vlSelf->__Vtogcov__reg_en_X = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__alu_fn_X = VL_RAND_RESET_I(4);
    vlSelf->__Vtogcov__ex_result_sel_X = VL_RAND_RESET_I(2);
    vlSelf->__Vtogcov__imul_req_val_D = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__imul_resp_rdy_X = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__imul_req_rdy_D = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__imul_resp_val_X = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__reg_en_M = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__wb_result_sel_M = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__reg_en_W = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__rf_waddr_W = VL_RAND_RESET_I(5);
    vlSelf->__Vtogcov__rf_wen_W = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__stats_en_wen_W = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__inst_D = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__br_cond_eq_X = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__br_cond_lt_X = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__br_cond_ltu_X = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__core_id = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__stats_en = VL_RAND_RESET_I(1);
    vlSelf->__Vtogcov__pc_F = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__pc_next_F = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__pc_plus4_F = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__br_target_X = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__jal_target_D = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__jalr_target_X = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__pc_D = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__inst_rd_D = VL_RAND_RESET_I(5);
    vlSelf->__Vtogcov__inst_rs1_D = VL_RAND_RESET_I(5);
    vlSelf->__Vtogcov__inst_rs2_D = VL_RAND_RESET_I(5);
    vlSelf->__Vtogcov__imm_D = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__bypass_from_X = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__bypass_from_M = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__bypass_from_W = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__rf_rdata0_D = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__rf_rdata1_D = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__rf_wdata_W = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__op1_D = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__op2_D = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__csrr_data_D = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__num_cores = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__op1_byp_mux_out = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__op2_byp_mux_out = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__istream_msg = VL_RAND_RESET_Q(64);
    vlSelf->__Vtogcov__ostream_msg = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__op1_X = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__op2_X = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__pc_X = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__alu_result_X = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__ex_result_X = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__pc_plus4_X = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__ex_result_M = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__dmem_result_M = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__wb_result_M = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__wb_result_W = VL_RAND_RESET_I(32);
    vlSelf->__Vtogcov__stats_en_W = VL_RAND_RESET_I(32);
}