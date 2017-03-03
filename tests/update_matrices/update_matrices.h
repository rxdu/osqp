#ifndef UPDATE_MATRICES_DATA_H
#define UPDATE_MATRICES_DATA_H
#include "osqp.h"


/* create data and solutions structure */
typedef struct {
csc * test_form_KKT_Pu;
c_float test_form_KKT_rho;
csc * test_form_KKT_Pu_new;
csc * test_form_KKT_A_new;
c_int test_form_KKT_n;
csc * test_form_KKT_KKT;
c_int test_form_KKT_m;
csc * test_form_KKT_KKT_new;
csc * test_form_KKT_KKTu;
csc * test_form_KKT_P;
csc * test_form_KKT_A;
csc * test_form_KKT_P_new;
csc * test_form_KKT_KKTu_new;
c_float test_form_KKT_sigma;
} update_matrices_sols_data;

/* function to define problem data */
update_matrices_sols_data *  generate_problem_update_matrices_sols_data(){

update_matrices_sols_data * data = (update_matrices_sols_data *)c_malloc(sizeof(update_matrices_sols_data));


// Matrix test_form_KKT_Pu
//------------------------
data->test_form_KKT_Pu = c_malloc(sizeof(csc));
data->test_form_KKT_Pu->m = 5;
data->test_form_KKT_Pu->n = 5;
data->test_form_KKT_Pu->nz = -1;
data->test_form_KKT_Pu->nzmax = 7;
data->test_form_KKT_Pu->x = c_malloc(7 * sizeof(c_float));
data->test_form_KKT_Pu->x[0] = 0.90982609604676600856;
data->test_form_KKT_Pu->x[1] = 0.31639048027624872006;
data->test_form_KKT_Pu->x[2] = 0.63836193757356618494;
data->test_form_KKT_Pu->x[3] = 0.91307982692881961562;
data->test_form_KKT_Pu->x[4] = 0.30056343854343026134;
data->test_form_KKT_Pu->x[5] = 0.92493605889108121421;
data->test_form_KKT_Pu->x[6] = 0.44069462430428141264;
data->test_form_KKT_Pu->i = c_malloc(7 * sizeof(c_int));
data->test_form_KKT_Pu->i[0] = 0;
data->test_form_KKT_Pu->i[1] = 1;
data->test_form_KKT_Pu->i[2] = 0;
data->test_form_KKT_Pu->i[3] = 3;
data->test_form_KKT_Pu->i[4] = 1;
data->test_form_KKT_Pu->i[5] = 2;
data->test_form_KKT_Pu->i[6] = 3;
data->test_form_KKT_Pu->p = c_malloc((5 + 1) * sizeof(c_int));
data->test_form_KKT_Pu->p[0] = 0;
data->test_form_KKT_Pu->p[1] = 0;
data->test_form_KKT_Pu->p[2] = 2;
data->test_form_KKT_Pu->p[3] = 2;
data->test_form_KKT_Pu->p[4] = 4;
data->test_form_KKT_Pu->p[5] = 7;

data->test_form_KKT_rho = 1.60000000000000008882;

// Matrix test_form_KKT_Pu_new
//----------------------------
data->test_form_KKT_Pu_new = c_malloc(sizeof(csc));
data->test_form_KKT_Pu_new->m = 5;
data->test_form_KKT_Pu_new->n = 5;
data->test_form_KKT_Pu_new->nz = -1;
data->test_form_KKT_Pu_new->nzmax = 7;
data->test_form_KKT_Pu_new->x = c_malloc(7 * sizeof(c_float));
data->test_form_KKT_Pu_new->x[0] = -1.55518296971830238817;
data->test_form_KKT_Pu_new->x[1] = -0.18228888152862054994;
data->test_form_KKT_Pu_new->x[2] = 1.21021252002976842377;
data->test_form_KKT_Pu_new->x[3] = -0.31771321547085307202;
data->test_form_KKT_Pu_new->x[4] = -1.46305565898067202468;
data->test_form_KKT_Pu_new->x[5] = 1.12866870772872318618;
data->test_form_KKT_Pu_new->x[6] = 0.61931975144621953522;
data->test_form_KKT_Pu_new->i = c_malloc(7 * sizeof(c_int));
data->test_form_KKT_Pu_new->i[0] = 0;
data->test_form_KKT_Pu_new->i[1] = 1;
data->test_form_KKT_Pu_new->i[2] = 0;
data->test_form_KKT_Pu_new->i[3] = 3;
data->test_form_KKT_Pu_new->i[4] = 1;
data->test_form_KKT_Pu_new->i[5] = 2;
data->test_form_KKT_Pu_new->i[6] = 3;
data->test_form_KKT_Pu_new->p = c_malloc((5 + 1) * sizeof(c_int));
data->test_form_KKT_Pu_new->p[0] = 0;
data->test_form_KKT_Pu_new->p[1] = 0;
data->test_form_KKT_Pu_new->p[2] = 2;
data->test_form_KKT_Pu_new->p[3] = 2;
data->test_form_KKT_Pu_new->p[4] = 4;
data->test_form_KKT_Pu_new->p[5] = 7;


// Matrix test_form_KKT_A_new
//---------------------------
data->test_form_KKT_A_new = c_malloc(sizeof(csc));
data->test_form_KKT_A_new->m = 8;
data->test_form_KKT_A_new->n = 5;
data->test_form_KKT_A_new->nz = -1;
data->test_form_KKT_A_new->nzmax = 12;
data->test_form_KKT_A_new->x = c_malloc(12 * sizeof(c_float));
data->test_form_KKT_A_new->x[0] = 0.17963239052976531784;
data->test_form_KKT_A_new->x[1] = 0.65665593514326681124;
data->test_form_KKT_A_new->x[2] = -1.54402181842441521553;
data->test_form_KKT_A_new->x[3] = 1.17694524339033956828;
data->test_form_KKT_A_new->x[4] = 1.11985940907205927530;
data->test_form_KKT_A_new->x[5] = 0.42277741138149604883;
data->test_form_KKT_A_new->x[6] = -0.27472983572570774946;
data->test_form_KKT_A_new->x[7] = 1.17100983887591203469;
data->test_form_KKT_A_new->x[8] = 1.07013787972181506625;
data->test_form_KKT_A_new->x[9] = 1.58970148365877594898;
data->test_form_KKT_A_new->x[10] = -0.96975162039154272353;
data->test_form_KKT_A_new->x[11] = 0.52501207769246971413;
data->test_form_KKT_A_new->i = c_malloc(12 * sizeof(c_int));
data->test_form_KKT_A_new->i[0] = 5;
data->test_form_KKT_A_new->i[1] = 7;
data->test_form_KKT_A_new->i[2] = 0;
data->test_form_KKT_A_new->i[3] = 2;
data->test_form_KKT_A_new->i[4] = 3;
data->test_form_KKT_A_new->i[5] = 5;
data->test_form_KKT_A_new->i[6] = 0;
data->test_form_KKT_A_new->i[7] = 6;
data->test_form_KKT_A_new->i[8] = 7;
data->test_form_KKT_A_new->i[9] = 1;
data->test_form_KKT_A_new->i[10] = 4;
data->test_form_KKT_A_new->i[11] = 6;
data->test_form_KKT_A_new->p = c_malloc((5 + 1) * sizeof(c_int));
data->test_form_KKT_A_new->p[0] = 0;
data->test_form_KKT_A_new->p[1] = 2;
data->test_form_KKT_A_new->p[2] = 5;
data->test_form_KKT_A_new->p[3] = 6;
data->test_form_KKT_A_new->p[4] = 9;
data->test_form_KKT_A_new->p[5] = 12;

data->test_form_KKT_n = 5;

// Matrix test_form_KKT_KKT
//-------------------------
data->test_form_KKT_KKT = c_malloc(sizeof(csc));
data->test_form_KKT_KKT->m = 13;
data->test_form_KKT_KKT->n = 13;
data->test_form_KKT_KKT->nz = -1;
data->test_form_KKT_KKT->nzmax = 47;
data->test_form_KKT_KKT->x = c_malloc(47 * sizeof(c_float));
data->test_form_KKT_KKT->x[0] = 0.10000000000000000555;
data->test_form_KKT_KKT->x[1] = 0.90982609604676600856;
data->test_form_KKT_KKT->x[2] = 0.63836193757356618494;
data->test_form_KKT_KKT->x[3] = 0.82994450650124806934;
data->test_form_KKT_KKT->x[4] = 0.26340342649584036483;
data->test_form_KKT_KKT->x[5] = 0.90982609604676600856;
data->test_form_KKT_KKT->x[6] = 0.41639048027624869786;
data->test_form_KKT_KKT->x[7] = 0.30056343854343026134;
data->test_form_KKT_KKT->x[8] = 0.37234440475934249548;
data->test_form_KKT_KKT->x[9] = 0.89795054967242948774;
data->test_form_KKT_KKT->x[10] = 0.73117832144044825338;
data->test_form_KKT_KKT->x[11] = 0.10000000000000000555;
data->test_form_KKT_KKT->x[12] = 0.92493605889108121421;
data->test_form_KKT_KKT->x[13] = 0.30055066274531205828;
data->test_form_KKT_KKT->x[14] = 0.63836193757356618494;
data->test_form_KKT_KKT->x[15] = 1.01307982692881970443;
data->test_form_KKT_KKT->x[16] = 0.44069462430428141264;
data->test_form_KKT_KKT->x[17] = 0.98394608999299193464;
data->test_form_KKT_KKT->x[18] = 0.12555963072733178354;
data->test_form_KKT_KKT->x[19] = 0.75165219348629752627;
data->test_form_KKT_KKT->x[20] = 0.30056343854343026134;
data->test_form_KKT_KKT->x[21] = 0.92493605889108121421;
data->test_form_KKT_KKT->x[22] = 0.44069462430428141264;
data->test_form_KKT_KKT->x[23] = 0.10000000000000000555;
data->test_form_KKT_KKT->x[24] = 0.98677587588029092025;
data->test_form_KKT_KKT->x[25] = 0.32665007219134978289;
data->test_form_KKT_KKT->x[26] = 0.48593588671284537739;
data->test_form_KKT_KKT->x[27] = 0.37234440475934249548;
data->test_form_KKT_KKT->x[28] = 0.98394608999299193464;
data->test_form_KKT_KKT->x[29] = -0.62500000000000000000;
data->test_form_KKT_KKT->x[30] = 0.98677587588029092025;
data->test_form_KKT_KKT->x[31] = -0.62500000000000000000;
data->test_form_KKT_KKT->x[32] = 0.89795054967242948774;
data->test_form_KKT_KKT->x[33] = -0.62500000000000000000;
data->test_form_KKT_KKT->x[34] = 0.73117832144044825338;
data->test_form_KKT_KKT->x[35] = -0.62500000000000000000;
data->test_form_KKT_KKT->x[36] = 0.32665007219134978289;
data->test_form_KKT_KKT->x[37] = -0.62500000000000000000;
data->test_form_KKT_KKT->x[38] = 0.82994450650124806934;
data->test_form_KKT_KKT->x[39] = 0.30055066274531205828;
data->test_form_KKT_KKT->x[40] = -0.62500000000000000000;
data->test_form_KKT_KKT->x[41] = 0.12555963072733178354;
data->test_form_KKT_KKT->x[42] = 0.48593588671284537739;
data->test_form_KKT_KKT->x[43] = -0.62500000000000000000;
data->test_form_KKT_KKT->x[44] = 0.26340342649584036483;
data->test_form_KKT_KKT->x[45] = 0.75165219348629752627;
data->test_form_KKT_KKT->x[46] = -0.62500000000000000000;
data->test_form_KKT_KKT->i = c_malloc(47 * sizeof(c_int));
data->test_form_KKT_KKT->i[0] = 0;
data->test_form_KKT_KKT->i[1] = 1;
data->test_form_KKT_KKT->i[2] = 3;
data->test_form_KKT_KKT->i[3] = 10;
data->test_form_KKT_KKT->i[4] = 12;
data->test_form_KKT_KKT->i[5] = 0;
data->test_form_KKT_KKT->i[6] = 1;
data->test_form_KKT_KKT->i[7] = 4;
data->test_form_KKT_KKT->i[8] = 5;
data->test_form_KKT_KKT->i[9] = 7;
data->test_form_KKT_KKT->i[10] = 8;
data->test_form_KKT_KKT->i[11] = 2;
data->test_form_KKT_KKT->i[12] = 4;
data->test_form_KKT_KKT->i[13] = 10;
data->test_form_KKT_KKT->i[14] = 0;
data->test_form_KKT_KKT->i[15] = 3;
data->test_form_KKT_KKT->i[16] = 4;
data->test_form_KKT_KKT->i[17] = 5;
data->test_form_KKT_KKT->i[18] = 11;
data->test_form_KKT_KKT->i[19] = 12;
data->test_form_KKT_KKT->i[20] = 1;
data->test_form_KKT_KKT->i[21] = 2;
data->test_form_KKT_KKT->i[22] = 3;
data->test_form_KKT_KKT->i[23] = 4;
data->test_form_KKT_KKT->i[24] = 6;
data->test_form_KKT_KKT->i[25] = 9;
data->test_form_KKT_KKT->i[26] = 11;
data->test_form_KKT_KKT->i[27] = 1;
data->test_form_KKT_KKT->i[28] = 3;
data->test_form_KKT_KKT->i[29] = 5;
data->test_form_KKT_KKT->i[30] = 4;
data->test_form_KKT_KKT->i[31] = 6;
data->test_form_KKT_KKT->i[32] = 1;
data->test_form_KKT_KKT->i[33] = 7;
data->test_form_KKT_KKT->i[34] = 1;
data->test_form_KKT_KKT->i[35] = 8;
data->test_form_KKT_KKT->i[36] = 4;
data->test_form_KKT_KKT->i[37] = 9;
data->test_form_KKT_KKT->i[38] = 0;
data->test_form_KKT_KKT->i[39] = 2;
data->test_form_KKT_KKT->i[40] = 10;
data->test_form_KKT_KKT->i[41] = 3;
data->test_form_KKT_KKT->i[42] = 4;
data->test_form_KKT_KKT->i[43] = 11;
data->test_form_KKT_KKT->i[44] = 0;
data->test_form_KKT_KKT->i[45] = 3;
data->test_form_KKT_KKT->i[46] = 12;
data->test_form_KKT_KKT->p = c_malloc((13 + 1) * sizeof(c_int));
data->test_form_KKT_KKT->p[0] = 0;
data->test_form_KKT_KKT->p[1] = 5;
data->test_form_KKT_KKT->p[2] = 11;
data->test_form_KKT_KKT->p[3] = 14;
data->test_form_KKT_KKT->p[4] = 20;
data->test_form_KKT_KKT->p[5] = 27;
data->test_form_KKT_KKT->p[6] = 30;
data->test_form_KKT_KKT->p[7] = 32;
data->test_form_KKT_KKT->p[8] = 34;
data->test_form_KKT_KKT->p[9] = 36;
data->test_form_KKT_KKT->p[10] = 38;
data->test_form_KKT_KKT->p[11] = 41;
data->test_form_KKT_KKT->p[12] = 44;
data->test_form_KKT_KKT->p[13] = 47;

data->test_form_KKT_m = 8;

// Matrix test_form_KKT_KKT_new
//-----------------------------
data->test_form_KKT_KKT_new = c_malloc(sizeof(csc));
data->test_form_KKT_KKT_new->m = 13;
data->test_form_KKT_KKT_new->n = 13;
data->test_form_KKT_KKT_new->nz = -1;
data->test_form_KKT_KKT_new->nzmax = 47;
data->test_form_KKT_KKT_new->x = c_malloc(47 * sizeof(c_float));
data->test_form_KKT_KKT_new->x[0] = 0.10000000000000000555;
data->test_form_KKT_KKT_new->x[1] = -1.55518296971830238817;
data->test_form_KKT_KKT_new->x[2] = 1.21021252002976842377;
data->test_form_KKT_KKT_new->x[3] = 0.17963239052976531784;
data->test_form_KKT_KKT_new->x[4] = 0.65665593514326681124;
data->test_form_KKT_KKT_new->x[5] = -1.55518296971830238817;
data->test_form_KKT_KKT_new->x[6] = -0.08228888152862054439;
data->test_form_KKT_KKT_new->x[7] = -1.46305565898067202468;
data->test_form_KKT_KKT_new->x[8] = -1.54402181842441521553;
data->test_form_KKT_KKT_new->x[9] = 1.17694524339033956828;
data->test_form_KKT_KKT_new->x[10] = 1.11985940907205927530;
data->test_form_KKT_KKT_new->x[11] = 0.10000000000000000555;
data->test_form_KKT_KKT_new->x[12] = 1.12866870772872318618;
data->test_form_KKT_KKT_new->x[13] = 0.42277741138149604883;
data->test_form_KKT_KKT_new->x[14] = 1.21021252002976842377;
data->test_form_KKT_KKT_new->x[15] = -0.21771321547085306647;
data->test_form_KKT_KKT_new->x[16] = 0.61931975144621953522;
data->test_form_KKT_KKT_new->x[17] = -0.27472983572570774946;
data->test_form_KKT_KKT_new->x[18] = 1.17100983887591203469;
data->test_form_KKT_KKT_new->x[19] = 1.07013787972181506625;
data->test_form_KKT_KKT_new->x[20] = -1.46305565898067202468;
data->test_form_KKT_KKT_new->x[21] = 1.12866870772872318618;
data->test_form_KKT_KKT_new->x[22] = 0.61931975144621953522;
data->test_form_KKT_KKT_new->x[23] = 0.10000000000000000555;
data->test_form_KKT_KKT_new->x[24] = 1.58970148365877594898;
data->test_form_KKT_KKT_new->x[25] = -0.96975162039154272353;
data->test_form_KKT_KKT_new->x[26] = 0.52501207769246971413;
data->test_form_KKT_KKT_new->x[27] = -1.54402181842441521553;
data->test_form_KKT_KKT_new->x[28] = -0.27472983572570774946;
data->test_form_KKT_KKT_new->x[29] = -0.62500000000000000000;
data->test_form_KKT_KKT_new->x[30] = 1.58970148365877594898;
data->test_form_KKT_KKT_new->x[31] = -0.62500000000000000000;
data->test_form_KKT_KKT_new->x[32] = 1.17694524339033956828;
data->test_form_KKT_KKT_new->x[33] = -0.62500000000000000000;
data->test_form_KKT_KKT_new->x[34] = 1.11985940907205927530;
data->test_form_KKT_KKT_new->x[35] = -0.62500000000000000000;
data->test_form_KKT_KKT_new->x[36] = -0.96975162039154272353;
data->test_form_KKT_KKT_new->x[37] = -0.62500000000000000000;
data->test_form_KKT_KKT_new->x[38] = 0.17963239052976531784;
data->test_form_KKT_KKT_new->x[39] = 0.42277741138149604883;
data->test_form_KKT_KKT_new->x[40] = -0.62500000000000000000;
data->test_form_KKT_KKT_new->x[41] = 1.17100983887591203469;
data->test_form_KKT_KKT_new->x[42] = 0.52501207769246971413;
data->test_form_KKT_KKT_new->x[43] = -0.62500000000000000000;
data->test_form_KKT_KKT_new->x[44] = 0.65665593514326681124;
data->test_form_KKT_KKT_new->x[45] = 1.07013787972181506625;
data->test_form_KKT_KKT_new->x[46] = -0.62500000000000000000;
data->test_form_KKT_KKT_new->i = c_malloc(47 * sizeof(c_int));
data->test_form_KKT_KKT_new->i[0] = 0;
data->test_form_KKT_KKT_new->i[1] = 1;
data->test_form_KKT_KKT_new->i[2] = 3;
data->test_form_KKT_KKT_new->i[3] = 10;
data->test_form_KKT_KKT_new->i[4] = 12;
data->test_form_KKT_KKT_new->i[5] = 0;
data->test_form_KKT_KKT_new->i[6] = 1;
data->test_form_KKT_KKT_new->i[7] = 4;
data->test_form_KKT_KKT_new->i[8] = 5;
data->test_form_KKT_KKT_new->i[9] = 7;
data->test_form_KKT_KKT_new->i[10] = 8;
data->test_form_KKT_KKT_new->i[11] = 2;
data->test_form_KKT_KKT_new->i[12] = 4;
data->test_form_KKT_KKT_new->i[13] = 10;
data->test_form_KKT_KKT_new->i[14] = 0;
data->test_form_KKT_KKT_new->i[15] = 3;
data->test_form_KKT_KKT_new->i[16] = 4;
data->test_form_KKT_KKT_new->i[17] = 5;
data->test_form_KKT_KKT_new->i[18] = 11;
data->test_form_KKT_KKT_new->i[19] = 12;
data->test_form_KKT_KKT_new->i[20] = 1;
data->test_form_KKT_KKT_new->i[21] = 2;
data->test_form_KKT_KKT_new->i[22] = 3;
data->test_form_KKT_KKT_new->i[23] = 4;
data->test_form_KKT_KKT_new->i[24] = 6;
data->test_form_KKT_KKT_new->i[25] = 9;
data->test_form_KKT_KKT_new->i[26] = 11;
data->test_form_KKT_KKT_new->i[27] = 1;
data->test_form_KKT_KKT_new->i[28] = 3;
data->test_form_KKT_KKT_new->i[29] = 5;
data->test_form_KKT_KKT_new->i[30] = 4;
data->test_form_KKT_KKT_new->i[31] = 6;
data->test_form_KKT_KKT_new->i[32] = 1;
data->test_form_KKT_KKT_new->i[33] = 7;
data->test_form_KKT_KKT_new->i[34] = 1;
data->test_form_KKT_KKT_new->i[35] = 8;
data->test_form_KKT_KKT_new->i[36] = 4;
data->test_form_KKT_KKT_new->i[37] = 9;
data->test_form_KKT_KKT_new->i[38] = 0;
data->test_form_KKT_KKT_new->i[39] = 2;
data->test_form_KKT_KKT_new->i[40] = 10;
data->test_form_KKT_KKT_new->i[41] = 3;
data->test_form_KKT_KKT_new->i[42] = 4;
data->test_form_KKT_KKT_new->i[43] = 11;
data->test_form_KKT_KKT_new->i[44] = 0;
data->test_form_KKT_KKT_new->i[45] = 3;
data->test_form_KKT_KKT_new->i[46] = 12;
data->test_form_KKT_KKT_new->p = c_malloc((13 + 1) * sizeof(c_int));
data->test_form_KKT_KKT_new->p[0] = 0;
data->test_form_KKT_KKT_new->p[1] = 5;
data->test_form_KKT_KKT_new->p[2] = 11;
data->test_form_KKT_KKT_new->p[3] = 14;
data->test_form_KKT_KKT_new->p[4] = 20;
data->test_form_KKT_KKT_new->p[5] = 27;
data->test_form_KKT_KKT_new->p[6] = 30;
data->test_form_KKT_KKT_new->p[7] = 32;
data->test_form_KKT_KKT_new->p[8] = 34;
data->test_form_KKT_KKT_new->p[9] = 36;
data->test_form_KKT_KKT_new->p[10] = 38;
data->test_form_KKT_KKT_new->p[11] = 41;
data->test_form_KKT_KKT_new->p[12] = 44;
data->test_form_KKT_KKT_new->p[13] = 47;


// Matrix test_form_KKT_KKTu
//--------------------------
data->test_form_KKT_KKTu = c_malloc(sizeof(csc));
data->test_form_KKT_KKTu->m = 13;
data->test_form_KKT_KKTu->n = 13;
data->test_form_KKT_KKTu->nz = -1;
data->test_form_KKT_KKTu->nzmax = 30;
data->test_form_KKT_KKTu->x = c_malloc(30 * sizeof(c_float));
data->test_form_KKT_KKTu->x[0] = 0.10000000000000000555;
data->test_form_KKT_KKTu->x[1] = 0.90982609604676600856;
data->test_form_KKT_KKTu->x[2] = 0.41639048027624869786;
data->test_form_KKT_KKTu->x[3] = 0.10000000000000000555;
data->test_form_KKT_KKTu->x[4] = 0.63836193757356618494;
data->test_form_KKT_KKTu->x[5] = 1.01307982692881970443;
data->test_form_KKT_KKTu->x[6] = 0.30056343854343026134;
data->test_form_KKT_KKTu->x[7] = 0.92493605889108121421;
data->test_form_KKT_KKTu->x[8] = 0.44069462430428141264;
data->test_form_KKT_KKTu->x[9] = 0.10000000000000000555;
data->test_form_KKT_KKTu->x[10] = 0.37234440475934249548;
data->test_form_KKT_KKTu->x[11] = 0.98394608999299193464;
data->test_form_KKT_KKTu->x[12] = -0.62500000000000000000;
data->test_form_KKT_KKTu->x[13] = 0.98677587588029092025;
data->test_form_KKT_KKTu->x[14] = -0.62500000000000000000;
data->test_form_KKT_KKTu->x[15] = 0.89795054967242948774;
data->test_form_KKT_KKTu->x[16] = -0.62500000000000000000;
data->test_form_KKT_KKTu->x[17] = 0.73117832144044825338;
data->test_form_KKT_KKTu->x[18] = -0.62500000000000000000;
data->test_form_KKT_KKTu->x[19] = 0.32665007219134978289;
data->test_form_KKT_KKTu->x[20] = -0.62500000000000000000;
data->test_form_KKT_KKTu->x[21] = 0.82994450650124806934;
data->test_form_KKT_KKTu->x[22] = 0.30055066274531205828;
data->test_form_KKT_KKTu->x[23] = -0.62500000000000000000;
data->test_form_KKT_KKTu->x[24] = 0.12555963072733178354;
data->test_form_KKT_KKTu->x[25] = 0.48593588671284537739;
data->test_form_KKT_KKTu->x[26] = -0.62500000000000000000;
data->test_form_KKT_KKTu->x[27] = 0.26340342649584036483;
data->test_form_KKT_KKTu->x[28] = 0.75165219348629752627;
data->test_form_KKT_KKTu->x[29] = -0.62500000000000000000;
data->test_form_KKT_KKTu->i = c_malloc(30 * sizeof(c_int));
data->test_form_KKT_KKTu->i[0] = 0;
data->test_form_KKT_KKTu->i[1] = 0;
data->test_form_KKT_KKTu->i[2] = 1;
data->test_form_KKT_KKTu->i[3] = 2;
data->test_form_KKT_KKTu->i[4] = 0;
data->test_form_KKT_KKTu->i[5] = 3;
data->test_form_KKT_KKTu->i[6] = 1;
data->test_form_KKT_KKTu->i[7] = 2;
data->test_form_KKT_KKTu->i[8] = 3;
data->test_form_KKT_KKTu->i[9] = 4;
data->test_form_KKT_KKTu->i[10] = 1;
data->test_form_KKT_KKTu->i[11] = 3;
data->test_form_KKT_KKTu->i[12] = 5;
data->test_form_KKT_KKTu->i[13] = 4;
data->test_form_KKT_KKTu->i[14] = 6;
data->test_form_KKT_KKTu->i[15] = 1;
data->test_form_KKT_KKTu->i[16] = 7;
data->test_form_KKT_KKTu->i[17] = 1;
data->test_form_KKT_KKTu->i[18] = 8;
data->test_form_KKT_KKTu->i[19] = 4;
data->test_form_KKT_KKTu->i[20] = 9;
data->test_form_KKT_KKTu->i[21] = 0;
data->test_form_KKT_KKTu->i[22] = 2;
data->test_form_KKT_KKTu->i[23] = 10;
data->test_form_KKT_KKTu->i[24] = 3;
data->test_form_KKT_KKTu->i[25] = 4;
data->test_form_KKT_KKTu->i[26] = 11;
data->test_form_KKT_KKTu->i[27] = 0;
data->test_form_KKT_KKTu->i[28] = 3;
data->test_form_KKT_KKTu->i[29] = 12;
data->test_form_KKT_KKTu->p = c_malloc((13 + 1) * sizeof(c_int));
data->test_form_KKT_KKTu->p[0] = 0;
data->test_form_KKT_KKTu->p[1] = 1;
data->test_form_KKT_KKTu->p[2] = 3;
data->test_form_KKT_KKTu->p[3] = 4;
data->test_form_KKT_KKTu->p[4] = 6;
data->test_form_KKT_KKTu->p[5] = 10;
data->test_form_KKT_KKTu->p[6] = 13;
data->test_form_KKT_KKTu->p[7] = 15;
data->test_form_KKT_KKTu->p[8] = 17;
data->test_form_KKT_KKTu->p[9] = 19;
data->test_form_KKT_KKTu->p[10] = 21;
data->test_form_KKT_KKTu->p[11] = 24;
data->test_form_KKT_KKTu->p[12] = 27;
data->test_form_KKT_KKTu->p[13] = 30;


// Matrix test_form_KKT_P
//-----------------------
data->test_form_KKT_P = c_malloc(sizeof(csc));
data->test_form_KKT_P->m = 5;
data->test_form_KKT_P->n = 5;
data->test_form_KKT_P->nz = -1;
data->test_form_KKT_P->nzmax = 12;
data->test_form_KKT_P->x = c_malloc(12 * sizeof(c_float));
data->test_form_KKT_P->x[0] = 0.90982609604676600856;
data->test_form_KKT_P->x[1] = 0.63836193757356618494;
data->test_form_KKT_P->x[2] = 0.90982609604676600856;
data->test_form_KKT_P->x[3] = 0.31639048027624872006;
data->test_form_KKT_P->x[4] = 0.30056343854343026134;
data->test_form_KKT_P->x[5] = 0.92493605889108121421;
data->test_form_KKT_P->x[6] = 0.63836193757356618494;
data->test_form_KKT_P->x[7] = 0.91307982692881961562;
data->test_form_KKT_P->x[8] = 0.44069462430428141264;
data->test_form_KKT_P->x[9] = 0.30056343854343026134;
data->test_form_KKT_P->x[10] = 0.92493605889108121421;
data->test_form_KKT_P->x[11] = 0.44069462430428141264;
data->test_form_KKT_P->i = c_malloc(12 * sizeof(c_int));
data->test_form_KKT_P->i[0] = 1;
data->test_form_KKT_P->i[1] = 3;
data->test_form_KKT_P->i[2] = 0;
data->test_form_KKT_P->i[3] = 1;
data->test_form_KKT_P->i[4] = 4;
data->test_form_KKT_P->i[5] = 4;
data->test_form_KKT_P->i[6] = 0;
data->test_form_KKT_P->i[7] = 3;
data->test_form_KKT_P->i[8] = 4;
data->test_form_KKT_P->i[9] = 1;
data->test_form_KKT_P->i[10] = 2;
data->test_form_KKT_P->i[11] = 3;
data->test_form_KKT_P->p = c_malloc((5 + 1) * sizeof(c_int));
data->test_form_KKT_P->p[0] = 0;
data->test_form_KKT_P->p[1] = 2;
data->test_form_KKT_P->p[2] = 5;
data->test_form_KKT_P->p[3] = 6;
data->test_form_KKT_P->p[4] = 9;
data->test_form_KKT_P->p[5] = 12;


// Matrix test_form_KKT_A
//-----------------------
data->test_form_KKT_A = c_malloc(sizeof(csc));
data->test_form_KKT_A->m = 8;
data->test_form_KKT_A->n = 5;
data->test_form_KKT_A->nz = -1;
data->test_form_KKT_A->nzmax = 12;
data->test_form_KKT_A->x = c_malloc(12 * sizeof(c_float));
data->test_form_KKT_A->x[0] = 0.82994450650124806934;
data->test_form_KKT_A->x[1] = 0.26340342649584036483;
data->test_form_KKT_A->x[2] = 0.37234440475934249548;
data->test_form_KKT_A->x[3] = 0.89795054967242948774;
data->test_form_KKT_A->x[4] = 0.73117832144044825338;
data->test_form_KKT_A->x[5] = 0.30055066274531205828;
data->test_form_KKT_A->x[6] = 0.98394608999299193464;
data->test_form_KKT_A->x[7] = 0.12555963072733178354;
data->test_form_KKT_A->x[8] = 0.75165219348629752627;
data->test_form_KKT_A->x[9] = 0.98677587588029092025;
data->test_form_KKT_A->x[10] = 0.32665007219134978289;
data->test_form_KKT_A->x[11] = 0.48593588671284537739;
data->test_form_KKT_A->i = c_malloc(12 * sizeof(c_int));
data->test_form_KKT_A->i[0] = 5;
data->test_form_KKT_A->i[1] = 7;
data->test_form_KKT_A->i[2] = 0;
data->test_form_KKT_A->i[3] = 2;
data->test_form_KKT_A->i[4] = 3;
data->test_form_KKT_A->i[5] = 5;
data->test_form_KKT_A->i[6] = 0;
data->test_form_KKT_A->i[7] = 6;
data->test_form_KKT_A->i[8] = 7;
data->test_form_KKT_A->i[9] = 1;
data->test_form_KKT_A->i[10] = 4;
data->test_form_KKT_A->i[11] = 6;
data->test_form_KKT_A->p = c_malloc((5 + 1) * sizeof(c_int));
data->test_form_KKT_A->p[0] = 0;
data->test_form_KKT_A->p[1] = 2;
data->test_form_KKT_A->p[2] = 5;
data->test_form_KKT_A->p[3] = 6;
data->test_form_KKT_A->p[4] = 9;
data->test_form_KKT_A->p[5] = 12;


// Matrix test_form_KKT_P_new
//---------------------------
data->test_form_KKT_P_new = c_malloc(sizeof(csc));
data->test_form_KKT_P_new->m = 5;
data->test_form_KKT_P_new->n = 5;
data->test_form_KKT_P_new->nz = -1;
data->test_form_KKT_P_new->nzmax = 12;
data->test_form_KKT_P_new->x = c_malloc(12 * sizeof(c_float));
data->test_form_KKT_P_new->x[0] = -1.55518296971830238817;
data->test_form_KKT_P_new->x[1] = 1.21021252002976842377;
data->test_form_KKT_P_new->x[2] = -1.55518296971830238817;
data->test_form_KKT_P_new->x[3] = -0.18228888152862054994;
data->test_form_KKT_P_new->x[4] = -1.46305565898067202468;
data->test_form_KKT_P_new->x[5] = 1.12866870772872318618;
data->test_form_KKT_P_new->x[6] = 1.21021252002976842377;
data->test_form_KKT_P_new->x[7] = -0.31771321547085307202;
data->test_form_KKT_P_new->x[8] = 0.61931975144621953522;
data->test_form_KKT_P_new->x[9] = -1.46305565898067202468;
data->test_form_KKT_P_new->x[10] = 1.12866870772872318618;
data->test_form_KKT_P_new->x[11] = 0.61931975144621953522;
data->test_form_KKT_P_new->i = c_malloc(12 * sizeof(c_int));
data->test_form_KKT_P_new->i[0] = 1;
data->test_form_KKT_P_new->i[1] = 3;
data->test_form_KKT_P_new->i[2] = 0;
data->test_form_KKT_P_new->i[3] = 1;
data->test_form_KKT_P_new->i[4] = 4;
data->test_form_KKT_P_new->i[5] = 4;
data->test_form_KKT_P_new->i[6] = 0;
data->test_form_KKT_P_new->i[7] = 3;
data->test_form_KKT_P_new->i[8] = 4;
data->test_form_KKT_P_new->i[9] = 1;
data->test_form_KKT_P_new->i[10] = 2;
data->test_form_KKT_P_new->i[11] = 3;
data->test_form_KKT_P_new->p = c_malloc((5 + 1) * sizeof(c_int));
data->test_form_KKT_P_new->p[0] = 0;
data->test_form_KKT_P_new->p[1] = 2;
data->test_form_KKT_P_new->p[2] = 5;
data->test_form_KKT_P_new->p[3] = 6;
data->test_form_KKT_P_new->p[4] = 9;
data->test_form_KKT_P_new->p[5] = 12;


// Matrix test_form_KKT_KKTu_new
//------------------------------
data->test_form_KKT_KKTu_new = c_malloc(sizeof(csc));
data->test_form_KKT_KKTu_new->m = 13;
data->test_form_KKT_KKTu_new->n = 13;
data->test_form_KKT_KKTu_new->nz = -1;
data->test_form_KKT_KKTu_new->nzmax = 30;
data->test_form_KKT_KKTu_new->x = c_malloc(30 * sizeof(c_float));
data->test_form_KKT_KKTu_new->x[0] = 0.10000000000000000555;
data->test_form_KKT_KKTu_new->x[1] = -1.55518296971830238817;
data->test_form_KKT_KKTu_new->x[2] = -0.08228888152862054439;
data->test_form_KKT_KKTu_new->x[3] = 0.10000000000000000555;
data->test_form_KKT_KKTu_new->x[4] = 1.21021252002976842377;
data->test_form_KKT_KKTu_new->x[5] = -0.21771321547085306647;
data->test_form_KKT_KKTu_new->x[6] = -1.46305565898067202468;
data->test_form_KKT_KKTu_new->x[7] = 1.12866870772872318618;
data->test_form_KKT_KKTu_new->x[8] = 0.61931975144621953522;
data->test_form_KKT_KKTu_new->x[9] = 0.10000000000000000555;
data->test_form_KKT_KKTu_new->x[10] = -1.54402181842441521553;
data->test_form_KKT_KKTu_new->x[11] = -0.27472983572570774946;
data->test_form_KKT_KKTu_new->x[12] = -0.62500000000000000000;
data->test_form_KKT_KKTu_new->x[13] = 1.58970148365877594898;
data->test_form_KKT_KKTu_new->x[14] = -0.62500000000000000000;
data->test_form_KKT_KKTu_new->x[15] = 1.17694524339033956828;
data->test_form_KKT_KKTu_new->x[16] = -0.62500000000000000000;
data->test_form_KKT_KKTu_new->x[17] = 1.11985940907205927530;
data->test_form_KKT_KKTu_new->x[18] = -0.62500000000000000000;
data->test_form_KKT_KKTu_new->x[19] = -0.96975162039154272353;
data->test_form_KKT_KKTu_new->x[20] = -0.62500000000000000000;
data->test_form_KKT_KKTu_new->x[21] = 0.17963239052976531784;
data->test_form_KKT_KKTu_new->x[22] = 0.42277741138149604883;
data->test_form_KKT_KKTu_new->x[23] = -0.62500000000000000000;
data->test_form_KKT_KKTu_new->x[24] = 1.17100983887591203469;
data->test_form_KKT_KKTu_new->x[25] = 0.52501207769246971413;
data->test_form_KKT_KKTu_new->x[26] = -0.62500000000000000000;
data->test_form_KKT_KKTu_new->x[27] = 0.65665593514326681124;
data->test_form_KKT_KKTu_new->x[28] = 1.07013787972181506625;
data->test_form_KKT_KKTu_new->x[29] = -0.62500000000000000000;
data->test_form_KKT_KKTu_new->i = c_malloc(30 * sizeof(c_int));
data->test_form_KKT_KKTu_new->i[0] = 0;
data->test_form_KKT_KKTu_new->i[1] = 0;
data->test_form_KKT_KKTu_new->i[2] = 1;
data->test_form_KKT_KKTu_new->i[3] = 2;
data->test_form_KKT_KKTu_new->i[4] = 0;
data->test_form_KKT_KKTu_new->i[5] = 3;
data->test_form_KKT_KKTu_new->i[6] = 1;
data->test_form_KKT_KKTu_new->i[7] = 2;
data->test_form_KKT_KKTu_new->i[8] = 3;
data->test_form_KKT_KKTu_new->i[9] = 4;
data->test_form_KKT_KKTu_new->i[10] = 1;
data->test_form_KKT_KKTu_new->i[11] = 3;
data->test_form_KKT_KKTu_new->i[12] = 5;
data->test_form_KKT_KKTu_new->i[13] = 4;
data->test_form_KKT_KKTu_new->i[14] = 6;
data->test_form_KKT_KKTu_new->i[15] = 1;
data->test_form_KKT_KKTu_new->i[16] = 7;
data->test_form_KKT_KKTu_new->i[17] = 1;
data->test_form_KKT_KKTu_new->i[18] = 8;
data->test_form_KKT_KKTu_new->i[19] = 4;
data->test_form_KKT_KKTu_new->i[20] = 9;
data->test_form_KKT_KKTu_new->i[21] = 0;
data->test_form_KKT_KKTu_new->i[22] = 2;
data->test_form_KKT_KKTu_new->i[23] = 10;
data->test_form_KKT_KKTu_new->i[24] = 3;
data->test_form_KKT_KKTu_new->i[25] = 4;
data->test_form_KKT_KKTu_new->i[26] = 11;
data->test_form_KKT_KKTu_new->i[27] = 0;
data->test_form_KKT_KKTu_new->i[28] = 3;
data->test_form_KKT_KKTu_new->i[29] = 12;
data->test_form_KKT_KKTu_new->p = c_malloc((13 + 1) * sizeof(c_int));
data->test_form_KKT_KKTu_new->p[0] = 0;
data->test_form_KKT_KKTu_new->p[1] = 1;
data->test_form_KKT_KKTu_new->p[2] = 3;
data->test_form_KKT_KKTu_new->p[3] = 4;
data->test_form_KKT_KKTu_new->p[4] = 6;
data->test_form_KKT_KKTu_new->p[5] = 10;
data->test_form_KKT_KKTu_new->p[6] = 13;
data->test_form_KKT_KKTu_new->p[7] = 15;
data->test_form_KKT_KKTu_new->p[8] = 17;
data->test_form_KKT_KKTu_new->p[9] = 19;
data->test_form_KKT_KKTu_new->p[10] = 21;
data->test_form_KKT_KKTu_new->p[11] = 24;
data->test_form_KKT_KKTu_new->p[12] = 27;
data->test_form_KKT_KKTu_new->p[13] = 30;

data->test_form_KKT_sigma = 0.10000000000000000555;

return data;

}

/* function to clean data struct */
void clean_problem_update_matrices_sols_data(update_matrices_sols_data * data){

c_free(data->test_form_KKT_Pu->x);
c_free(data->test_form_KKT_Pu->i);
c_free(data->test_form_KKT_Pu->p);
c_free(data->test_form_KKT_Pu);
c_free(data->test_form_KKT_Pu_new->x);
c_free(data->test_form_KKT_Pu_new->i);
c_free(data->test_form_KKT_Pu_new->p);
c_free(data->test_form_KKT_Pu_new);
c_free(data->test_form_KKT_A_new->x);
c_free(data->test_form_KKT_A_new->i);
c_free(data->test_form_KKT_A_new->p);
c_free(data->test_form_KKT_A_new);
c_free(data->test_form_KKT_KKT->x);
c_free(data->test_form_KKT_KKT->i);
c_free(data->test_form_KKT_KKT->p);
c_free(data->test_form_KKT_KKT);
c_free(data->test_form_KKT_KKT_new->x);
c_free(data->test_form_KKT_KKT_new->i);
c_free(data->test_form_KKT_KKT_new->p);
c_free(data->test_form_KKT_KKT_new);
c_free(data->test_form_KKT_KKTu->x);
c_free(data->test_form_KKT_KKTu->i);
c_free(data->test_form_KKT_KKTu->p);
c_free(data->test_form_KKT_KKTu);
c_free(data->test_form_KKT_P->x);
c_free(data->test_form_KKT_P->i);
c_free(data->test_form_KKT_P->p);
c_free(data->test_form_KKT_P);
c_free(data->test_form_KKT_A->x);
c_free(data->test_form_KKT_A->i);
c_free(data->test_form_KKT_A->p);
c_free(data->test_form_KKT_A);
c_free(data->test_form_KKT_P_new->x);
c_free(data->test_form_KKT_P_new->i);
c_free(data->test_form_KKT_P_new->p);
c_free(data->test_form_KKT_P_new);
c_free(data->test_form_KKT_KKTu_new->x);
c_free(data->test_form_KKT_KKTu_new->i);
c_free(data->test_form_KKT_KKTu_new->p);
c_free(data->test_form_KKT_KKTu_new);

c_free(data);

}

#endif
