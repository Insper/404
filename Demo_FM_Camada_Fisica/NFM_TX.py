#!/usr/bin/env python2
# -*- coding: utf-8 -*-
##################################################
# GNU Radio Python Flow Graph
# Title: Transmissor FM
# Author: Arnaldo Viana
# Description: INSPER
# Generated: Mon Nov  4 17:57:14 2019
##################################################


if __name__ == '__main__':
    import ctypes
    import sys
    if sys.platform.startswith('linux'):
        try:
            x11 = ctypes.cdll.LoadLibrary('libX11.so')
            x11.XInitThreads()
        except:
            print "Warning: failed to XInitThreads()"

from gnuradio import analog
from gnuradio import blocks
from gnuradio import eng_notation
from gnuradio import filter
from gnuradio import gr
from gnuradio import wxgui
from gnuradio.eng_option import eng_option
from gnuradio.fft import window
from gnuradio.filter import firdes
from gnuradio.wxgui import fftsink2
from gnuradio.wxgui import forms
from grc_gnuradio import wxgui as grc_wxgui
from optparse import OptionParser
import osmosdr
import time
import wx


class NFM_TX(grc_wxgui.top_block_gui):

    def __init__(self):
        grc_wxgui.top_block_gui.__init__(self, title="Transmissor FM")
        _icon_path = "/usr/share/icons/hicolor/32x32/apps/gnuradio-grc.png"
        self.SetIcon(wx.Icon(_icon_path, wx.BITMAP_TYPE_ANY))

        ##################################################
        # Variables
        ##################################################
        self.samp_rate = samp_rate = 44100
        self.rf_gain = rf_gain = 20
        self.freq = freq = 89.5e6
        self.antenna = antenna = True
        self.VGAtx_gain = VGAtx_gain = 20
        self.BB_gain = BB_gain = 0

        ##################################################
        # Blocks
        ##################################################
        _rf_gain_sizer = wx.BoxSizer(wx.VERTICAL)
        self._rf_gain_text_box = forms.text_box(
        	parent=self.GetWin(),
        	sizer=_rf_gain_sizer,
        	value=self.rf_gain,
        	callback=self.set_rf_gain,
        	label='rf_gain',
        	converter=forms.float_converter(),
        	proportion=0,
        )
        self._rf_gain_slider = forms.slider(
        	parent=self.GetWin(),
        	sizer=_rf_gain_sizer,
        	value=self.rf_gain,
        	callback=self.set_rf_gain,
        	minimum=0,
        	maximum=40,
        	num_steps=5,
        	style=wx.SL_HORIZONTAL,
        	cast=float,
        	proportion=1,
        )
        self.Add(_rf_gain_sizer)
        _freq_sizer = wx.BoxSizer(wx.VERTICAL)
        self._freq_text_box = forms.text_box(
        	parent=self.GetWin(),
        	sizer=_freq_sizer,
        	value=self.freq,
        	callback=self.set_freq,
        	label='freq',
        	converter=forms.float_converter(),
        	proportion=0,
        )
        self._freq_slider = forms.slider(
        	parent=self.GetWin(),
        	sizer=_freq_sizer,
        	value=self.freq,
        	callback=self.set_freq,
        	minimum=87e6,
        	maximum=107e6,
        	num_steps=1000,
        	style=wx.SL_HORIZONTAL,
        	cast=float,
        	proportion=1,
        )
        self.Add(_freq_sizer)
        _VGAtx_gain_sizer = wx.BoxSizer(wx.VERTICAL)
        self._VGAtx_gain_text_box = forms.text_box(
        	parent=self.GetWin(),
        	sizer=_VGAtx_gain_sizer,
        	value=self.VGAtx_gain,
        	callback=self.set_VGAtx_gain,
        	label='VGAtx_gain',
        	converter=forms.float_converter(),
        	proportion=0,
        )
        self._VGAtx_gain_slider = forms.slider(
        	parent=self.GetWin(),
        	sizer=_VGAtx_gain_sizer,
        	value=self.VGAtx_gain,
        	callback=self.set_VGAtx_gain,
        	minimum=0,
        	maximum=47,
        	num_steps=47,
        	style=wx.SL_HORIZONTAL,
        	cast=float,
        	proportion=1,
        )
        self.Add(_VGAtx_gain_sizer)
        self.wxgui_fftsink2_0 = fftsink2.fft_sink_c(
        	self.GetWin(),
        	baseband_freq=0,
        	y_per_div=10,
        	y_divs=10,
        	ref_level=0,
        	ref_scale=2.0,
        	sample_rate=samp_rate * 2,
        	fft_size=1024,
        	fft_rate=15,
        	average=False,
        	avg_alpha=None,
        	title='FFT Plot',
        	peak_hold=False,
        )
        self.Add(self.wxgui_fftsink2_0.win)
        self.rational_resampler_xxx_0 = filter.rational_resampler_ccc(
                interpolation=2000000,
                decimation=samp_rate * 2,
                taps=None,
                fractional_bw=None,
        )
        self.osmosdr_sink_0 = osmosdr.sink( args="numchan=" + str(1) + " " + '' )
        self.osmosdr_sink_0.set_sample_rate(2000000)
        self.osmosdr_sink_0.set_center_freq(freq, 0)
        self.osmosdr_sink_0.set_freq_corr(0, 0)
        self.osmosdr_sink_0.set_gain(rf_gain, 0)
        self.osmosdr_sink_0.set_if_gain(VGAtx_gain, 0)
        self.osmosdr_sink_0.set_bb_gain(10, 0)
        self.osmosdr_sink_0.set_antenna('antenna', 0)
        self.osmosdr_sink_0.set_bandwidth(0, 0)

        self.blocks_wavfile_source_0 = blocks.wavfile_source('/home/engecorp/404/Demo_FM_Camada_Fisica/piano2.wav', True)
        self.blocks_multiply_const_vxx_0 = blocks.multiply_const_vff((1, ))
        self._antenna_check_box = forms.check_box(
        	parent=self.GetWin(),
        	value=self.antenna,
        	callback=self.set_antenna,
        	label='antenna',
        	true=True,
        	false=False,
        )
        self.Add(self._antenna_check_box)
        self.analog_nbfm_tx_0 = analog.nbfm_tx(
        	audio_rate=samp_rate,
        	quad_rate=samp_rate*2,
        	tau=75e-6,
        	max_dev=5e3,
        	fh=-1.0,
                )
        _BB_gain_sizer = wx.BoxSizer(wx.VERTICAL)
        self._BB_gain_text_box = forms.text_box(
        	parent=self.GetWin(),
        	sizer=_BB_gain_sizer,
        	value=self.BB_gain,
        	callback=self.set_BB_gain,
        	label='BB_gain',
        	converter=forms.float_converter(),
        	proportion=0,
        )
        self._BB_gain_slider = forms.slider(
        	parent=self.GetWin(),
        	sizer=_BB_gain_sizer,
        	value=self.BB_gain,
        	callback=self.set_BB_gain,
        	minimum=0,
        	maximum=62,
        	num_steps=31,
        	style=wx.SL_HORIZONTAL,
        	cast=float,
        	proportion=1,
        )
        self.Add(_BB_gain_sizer)

        ##################################################
        # Connections
        ##################################################
        self.connect((self.analog_nbfm_tx_0, 0), (self.rational_resampler_xxx_0, 0))
        self.connect((self.analog_nbfm_tx_0, 0), (self.wxgui_fftsink2_0, 0))
        self.connect((self.blocks_multiply_const_vxx_0, 0), (self.analog_nbfm_tx_0, 0))
        self.connect((self.blocks_wavfile_source_0, 0), (self.blocks_multiply_const_vxx_0, 0))
        self.connect((self.rational_resampler_xxx_0, 0), (self.osmosdr_sink_0, 0))

    def get_samp_rate(self):
        return self.samp_rate

    def set_samp_rate(self, samp_rate):
        self.samp_rate = samp_rate
        self.wxgui_fftsink2_0.set_sample_rate(self.samp_rate * 2)

    def get_rf_gain(self):
        return self.rf_gain

    def set_rf_gain(self, rf_gain):
        self.rf_gain = rf_gain
        self._rf_gain_slider.set_value(self.rf_gain)
        self._rf_gain_text_box.set_value(self.rf_gain)
        self.osmosdr_sink_0.set_gain(self.rf_gain, 0)

    def get_freq(self):
        return self.freq

    def set_freq(self, freq):
        self.freq = freq
        self._freq_slider.set_value(self.freq)
        self._freq_text_box.set_value(self.freq)
        self.osmosdr_sink_0.set_center_freq(self.freq, 0)

    def get_antenna(self):
        return self.antenna

    def set_antenna(self, antenna):
        self.antenna = antenna
        self._antenna_check_box.set_value(self.antenna)

    def get_VGAtx_gain(self):
        return self.VGAtx_gain

    def set_VGAtx_gain(self, VGAtx_gain):
        self.VGAtx_gain = VGAtx_gain
        self._VGAtx_gain_slider.set_value(self.VGAtx_gain)
        self._VGAtx_gain_text_box.set_value(self.VGAtx_gain)
        self.osmosdr_sink_0.set_if_gain(self.VGAtx_gain, 0)

    def get_BB_gain(self):
        return self.BB_gain

    def set_BB_gain(self, BB_gain):
        self.BB_gain = BB_gain
        self._BB_gain_slider.set_value(self.BB_gain)
        self._BB_gain_text_box.set_value(self.BB_gain)


def main(top_block_cls=NFM_TX, options=None):

    tb = top_block_cls()
    tb.Start(True)
    tb.Wait()


if __name__ == '__main__':
    main()
