transcript on
if {[file exists rtl_work]} {
	vdel -lib rtl_work -all
}
vlib rtl_work
vmap work rtl_work

vlog -sv -work work +incdir+E:/ECE385Lab/ECE385_Final_Project/working_copy_final_project {E:/ECE385Lab/ECE385_Final_Project/working_copy_final_project/VGA_controller.sv}
vlog -sv -work work +incdir+E:/ECE385Lab/ECE385_Final_Project/working_copy_final_project {E:/ECE385Lab/ECE385_Final_Project/working_copy_final_project/Flappy_Bird.sv}
vlog -sv -work work +incdir+E:/ECE385Lab/ECE385_Final_Project/working_copy_final_project {E:/ECE385Lab/ECE385_Final_Project/working_copy_final_project/Color_Mapper.sv}
vlog -sv -work work +incdir+E:/ECE385Lab/ECE385_Final_Project/working_copy_final_project {E:/ECE385Lab/ECE385_Final_Project/working_copy_final_project/ball.sv}

