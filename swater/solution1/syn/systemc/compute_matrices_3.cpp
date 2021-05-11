#include "compute_matrices.h"
#include "AESL_pkg.h"

using namespace std;

namespace ap_rtl {

void compute_matrices::thread_hdltv_gen() {
    const char* dump_tv = std::getenv("AP_WRITE_TV");
    if (!(dump_tv && string(dump_tv) == "on")) return;

    wait();

    mHdltvinHandle << "[ " << endl;
    mHdltvoutHandle << "[ " << endl;
    int ap_cycleNo = 0;
    while (1) {
        wait();
        const char* mComma = ap_cycleNo == 0 ? " " : ", " ;
        mHdltvinHandle << mComma << "{"  <<  " \"ap_rst_n\" :  \"" << ap_rst_n.read() << "\" ";
        mHdltvoutHandle << mComma << "{"  <<  " \"m_axi_gmem0_AWVALID\" :  \"" << m_axi_gmem0_AWVALID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_gmem0_AWREADY\" :  \"" << m_axi_gmem0_AWREADY.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_gmem0_AWADDR\" :  \"" << m_axi_gmem0_AWADDR.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_gmem0_AWID\" :  \"" << m_axi_gmem0_AWID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_gmem0_AWLEN\" :  \"" << m_axi_gmem0_AWLEN.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_gmem0_AWSIZE\" :  \"" << m_axi_gmem0_AWSIZE.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_gmem0_AWBURST\" :  \"" << m_axi_gmem0_AWBURST.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_gmem0_AWLOCK\" :  \"" << m_axi_gmem0_AWLOCK.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_gmem0_AWCACHE\" :  \"" << m_axi_gmem0_AWCACHE.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_gmem0_AWPROT\" :  \"" << m_axi_gmem0_AWPROT.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_gmem0_AWQOS\" :  \"" << m_axi_gmem0_AWQOS.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_gmem0_AWREGION\" :  \"" << m_axi_gmem0_AWREGION.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_gmem0_AWUSER\" :  \"" << m_axi_gmem0_AWUSER.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_gmem0_WVALID\" :  \"" << m_axi_gmem0_WVALID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_gmem0_WREADY\" :  \"" << m_axi_gmem0_WREADY.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_gmem0_WDATA\" :  \"" << m_axi_gmem0_WDATA.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_gmem0_WSTRB\" :  \"" << m_axi_gmem0_WSTRB.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_gmem0_WLAST\" :  \"" << m_axi_gmem0_WLAST.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_gmem0_WID\" :  \"" << m_axi_gmem0_WID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_gmem0_WUSER\" :  \"" << m_axi_gmem0_WUSER.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_gmem0_ARVALID\" :  \"" << m_axi_gmem0_ARVALID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_gmem0_ARREADY\" :  \"" << m_axi_gmem0_ARREADY.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_gmem0_ARADDR\" :  \"" << m_axi_gmem0_ARADDR.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_gmem0_ARID\" :  \"" << m_axi_gmem0_ARID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_gmem0_ARLEN\" :  \"" << m_axi_gmem0_ARLEN.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_gmem0_ARSIZE\" :  \"" << m_axi_gmem0_ARSIZE.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_gmem0_ARBURST\" :  \"" << m_axi_gmem0_ARBURST.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_gmem0_ARLOCK\" :  \"" << m_axi_gmem0_ARLOCK.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_gmem0_ARCACHE\" :  \"" << m_axi_gmem0_ARCACHE.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_gmem0_ARPROT\" :  \"" << m_axi_gmem0_ARPROT.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_gmem0_ARQOS\" :  \"" << m_axi_gmem0_ARQOS.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_gmem0_ARREGION\" :  \"" << m_axi_gmem0_ARREGION.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_gmem0_ARUSER\" :  \"" << m_axi_gmem0_ARUSER.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_gmem0_RVALID\" :  \"" << m_axi_gmem0_RVALID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_gmem0_RREADY\" :  \"" << m_axi_gmem0_RREADY.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_gmem0_RDATA\" :  \"" << m_axi_gmem0_RDATA.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_gmem0_RLAST\" :  \"" << m_axi_gmem0_RLAST.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_gmem0_RID\" :  \"" << m_axi_gmem0_RID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_gmem0_RUSER\" :  \"" << m_axi_gmem0_RUSER.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_gmem0_RRESP\" :  \"" << m_axi_gmem0_RRESP.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_gmem0_BVALID\" :  \"" << m_axi_gmem0_BVALID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_gmem0_BREADY\" :  \"" << m_axi_gmem0_BREADY.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_gmem0_BRESP\" :  \"" << m_axi_gmem0_BRESP.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_gmem0_BID\" :  \"" << m_axi_gmem0_BID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_gmem0_BUSER\" :  \"" << m_axi_gmem0_BUSER.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_gmem1_AWVALID\" :  \"" << m_axi_gmem1_AWVALID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_gmem1_AWREADY\" :  \"" << m_axi_gmem1_AWREADY.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_gmem1_AWADDR\" :  \"" << m_axi_gmem1_AWADDR.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_gmem1_AWID\" :  \"" << m_axi_gmem1_AWID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_gmem1_AWLEN\" :  \"" << m_axi_gmem1_AWLEN.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_gmem1_AWSIZE\" :  \"" << m_axi_gmem1_AWSIZE.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_gmem1_AWBURST\" :  \"" << m_axi_gmem1_AWBURST.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_gmem1_AWLOCK\" :  \"" << m_axi_gmem1_AWLOCK.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_gmem1_AWCACHE\" :  \"" << m_axi_gmem1_AWCACHE.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_gmem1_AWPROT\" :  \"" << m_axi_gmem1_AWPROT.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_gmem1_AWQOS\" :  \"" << m_axi_gmem1_AWQOS.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_gmem1_AWREGION\" :  \"" << m_axi_gmem1_AWREGION.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_gmem1_AWUSER\" :  \"" << m_axi_gmem1_AWUSER.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_gmem1_WVALID\" :  \"" << m_axi_gmem1_WVALID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_gmem1_WREADY\" :  \"" << m_axi_gmem1_WREADY.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_gmem1_WDATA\" :  \"" << m_axi_gmem1_WDATA.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_gmem1_WSTRB\" :  \"" << m_axi_gmem1_WSTRB.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_gmem1_WLAST\" :  \"" << m_axi_gmem1_WLAST.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_gmem1_WID\" :  \"" << m_axi_gmem1_WID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_gmem1_WUSER\" :  \"" << m_axi_gmem1_WUSER.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_gmem1_ARVALID\" :  \"" << m_axi_gmem1_ARVALID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_gmem1_ARREADY\" :  \"" << m_axi_gmem1_ARREADY.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_gmem1_ARADDR\" :  \"" << m_axi_gmem1_ARADDR.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_gmem1_ARID\" :  \"" << m_axi_gmem1_ARID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_gmem1_ARLEN\" :  \"" << m_axi_gmem1_ARLEN.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_gmem1_ARSIZE\" :  \"" << m_axi_gmem1_ARSIZE.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_gmem1_ARBURST\" :  \"" << m_axi_gmem1_ARBURST.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_gmem1_ARLOCK\" :  \"" << m_axi_gmem1_ARLOCK.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_gmem1_ARCACHE\" :  \"" << m_axi_gmem1_ARCACHE.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_gmem1_ARPROT\" :  \"" << m_axi_gmem1_ARPROT.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_gmem1_ARQOS\" :  \"" << m_axi_gmem1_ARQOS.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_gmem1_ARREGION\" :  \"" << m_axi_gmem1_ARREGION.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_gmem1_ARUSER\" :  \"" << m_axi_gmem1_ARUSER.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_gmem1_RVALID\" :  \"" << m_axi_gmem1_RVALID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_gmem1_RREADY\" :  \"" << m_axi_gmem1_RREADY.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_gmem1_RDATA\" :  \"" << m_axi_gmem1_RDATA.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_gmem1_RLAST\" :  \"" << m_axi_gmem1_RLAST.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_gmem1_RID\" :  \"" << m_axi_gmem1_RID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_gmem1_RUSER\" :  \"" << m_axi_gmem1_RUSER.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_gmem1_RRESP\" :  \"" << m_axi_gmem1_RRESP.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_gmem1_BVALID\" :  \"" << m_axi_gmem1_BVALID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"m_axi_gmem1_BREADY\" :  \"" << m_axi_gmem1_BREADY.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_gmem1_BRESP\" :  \"" << m_axi_gmem1_BRESP.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_gmem1_BID\" :  \"" << m_axi_gmem1_BID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"m_axi_gmem1_BUSER\" :  \"" << m_axi_gmem1_BUSER.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_control_AWVALID\" :  \"" << s_axi_control_AWVALID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_control_AWREADY\" :  \"" << s_axi_control_AWREADY.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_control_AWADDR\" :  \"" << s_axi_control_AWADDR.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_control_WVALID\" :  \"" << s_axi_control_WVALID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_control_WREADY\" :  \"" << s_axi_control_WREADY.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_control_WDATA\" :  \"" << s_axi_control_WDATA.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_control_WSTRB\" :  \"" << s_axi_control_WSTRB.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_control_ARVALID\" :  \"" << s_axi_control_ARVALID.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_control_ARREADY\" :  \"" << s_axi_control_ARREADY.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_control_ARADDR\" :  \"" << s_axi_control_ARADDR.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_control_RVALID\" :  \"" << s_axi_control_RVALID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_control_RREADY\" :  \"" << s_axi_control_RREADY.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_control_RDATA\" :  \"" << s_axi_control_RDATA.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_control_RRESP\" :  \"" << s_axi_control_RRESP.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_control_BVALID\" :  \"" << s_axi_control_BVALID.read() << "\" ";
        mHdltvinHandle << " , " <<  " \"s_axi_control_BREADY\" :  \"" << s_axi_control_BREADY.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"s_axi_control_BRESP\" :  \"" << s_axi_control_BRESP.read() << "\" ";
        mHdltvoutHandle << " , " <<  " \"interrupt\" :  \"" << interrupt.read() << "\" ";
        mHdltvinHandle << "}" << std::endl;
        mHdltvoutHandle << "}" << std::endl;
        ap_cycleNo++;
    }
}

}

