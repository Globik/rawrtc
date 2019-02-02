## FROM TERMINAL

```
globik@globik-laptop:~/fork/rawrtc/my-tools$ ./peer-connection 1 host
[000000000] peer-connection-app: SSSSSSSSSSSSSSSS Init
[000000000] peer-connection-app: ICE ROLE IS 1
[000000001] peer-connection-app: argc>= 3!
[000000600] helper-handler: (A) Negotiation needed
[000000601] helper-handler: (A) ICE gatherer state: gathering
[000000602] (A) ICE candidate: foundation=0a2219c0, protocol=udp, priority=1, ip=10.34.25.192, port=50603, type=host, tcp-type=n/a, related-address=n/a, related-port=0; URL: n/a; mid=rawrtc-sctp-dc, media_line_index=0, username_fragment=38zSyJqXTyybcnsL; enabled
[000000603] helper-handler: (A) Signaling state change: have-local-offer
***Start main loop***
[000010235] ice-gatherer: TODO: Gather relay candidates using server 5.148.189.203:443 (turn:turn.threema.ch:443)
[000011074] (A) ICE candidate: foundation=d97653b9, protocol=udp, priority=1, ip=217.118.83.184, port=14832, type=srflx, tcp-type=n/a, related-address=10.34.25.192, related-port=50603; URL: stun:stun.l.google.com:19302; mid=rawrtc-sctp-dc, media_line_index=0, username_fragment=38zSyJqXTyybcnsL; disabled
[000011113] helper-common: (A) ICE gatherer last local candidate
[000011114] peer-connection-app: Local Description:
{"type":"offer","sdp":"v=0\r\no=sdpartanic-rawrtc-0.2.2 444552127 1 IN IP4 127.0.0.1\r\ns=-\r\nt=0 0\r\na=ice-options:trickle\r\na=group:BUNDLE rawrtc-sctp-dc\r\nm=application 9 DTLS\/SCTP 5000\r\nc=IN IP4 0.0.0.0\r\na=mid:rawrtc-sctp-dc\r\na=sendrecv\r\na=ice-ufrag:38zSyJqXTyybcnsL\r\na=ice-pwd:TrRFUIIN11gOH1a2kH0QxnDIG09F0lIU\r\na=setup:actpass\r\na=fingerprint:sha-256 F9:C3:6B:0B:D3:49:EB:07:05:DB:CD:B5:FB:78:4F:F1:F8:A0:1D:8D:84:B7:FE:34:59:02:23:6E:B2:73:20:32\r\na=tls-id:svggdTpL8MKRm6lDRPtLau1iR8y5WLYu\r\na=sctpmap:5000 webrtc-datachannel 65535\r\na=max-message-size:0\r\na=candidate:0a2219c0 1 udp 1 10.34.25.192 50603 typ host\r\na=candidate:d97653b9 1 udp 1 217.118.83.184 14832 typ srflx raddr 10.34.25.192 rport 50603\r\na=end-of-candidates\r\n"}
[000011116] helper-handler: (A) ICE gatherer state: complete
[000011214] icem: STUN resp from 64.233.161.127:19302 dropped (no checklist)
[000011214] icem: STUN resp from 5.148.189.203:443 dropped (no checklist)
{"type":"offer","sdp":"v=0\r\no=- 3396597627279745794 2 IN IP4 127.0.0.1\r\ns=-\r\nt=0 0\r\na=group:BUNDLE data\r\na=msid-semantic: WMS\r\nm=application 33811 DTLS/SCTP 5000\r\nc=IN IP4 10.34.25.192\r\na=candidate:3924338437 1 udp 2122260223 10.34.25.192 33811 typ host generation 0 network-id 1 network-cost 50\r\na=candidate:2808830965 1 tcp 1518280447 10.34.25.192 9 typ host tcptype active generation 0 network-id 1 network-cost 50\r\na=ice-ufrag:vFB1\r\na=ice-pwd:V2JzjqTkHbj9PFJFFsLP+Jq+\r\na=ice-options:trickle\r\na=fingerprint:sha-256 D7:9B:4E:99:64:C8:DA:46:48:DA:9B:2C:3C:0B:FC:F4:E5:FE:3B:41:8B:32:13:06:5D:44:92:0D:BA:44:7B:06\r\na=setup:actpass\r\na=mid:data\r\na=sctpmap:5000 webrtc-datachannel 1024\r\n"}
[000049457] peer-connection-app: Applying remote description
[000049457] peer-connection: There's no support for renegotiation at the moment.
[000049457] helper-common: Not implemented in peer-connection.c 268
^C[000055156] helper-handler: Got signal: 2, terminating...
*** Stop client & bye ***
[000055156] helper-handler: (A) Signaling state change: closed
[000055156] helper-handler: (A) Peer connection state change: closed
[000055156] helper-handler: (A) Data channel closed: cat-noises
joined with addres: 0
globik@globik-laptop:~/fork/rawrtc/my-tools$ ./peer-connection 1 host
[000000000] peer-connection-app: SSSSSSSSSSSSSSSS Init
[000000001] peer-connection-app: ICE ROLE IS 1
[000000001] peer-connection-app: argc>= 3!
[000000603] helper-handler: (A) Negotiation needed
[000000604] helper-handler: (A) ICE gatherer state: gathering
[000000605] (A) ICE candidate: foundation=0a2219c0, protocol=udp, priority=1, ip=10.34.25.192, port=40999, type=host, tcp-type=n/a, related-address=n/a, related-port=0; URL: n/a; mid=rawrtc-sctp-dc, media_line_index=0, username_fragment=dyvdWCltHGslv94A; enabled
[000000605] helper-handler: (A) Signaling state change: have-local-offer
***Start main loop***
[000000884] ice-gatherer: TODO: Gather relay candidates using server 5.148.189.204:443 (turn:turn.threema.ch:443)
[000001044] (A) ICE candidate: foundation=d97653b9, protocol=udp, priority=1, ip=217.118.83.184, port=14839, type=srflx, tcp-type=n/a, related-address=10.34.25.192, related-port=40999; URL: stun:stun.l.google.com:19302; mid=rawrtc-sctp-dc, media_line_index=0, username_fragment=dyvdWCltHGslv94A; disabled
[000001184] helper-common: (A) ICE gatherer last local candidate
[000001184] peer-connection-app: Local Description:
{"type":"offer","sdp":"v=0\r\no=sdpartanic-rawrtc-0.2.2 1901006965 1 IN IP4 127.0.0.1\r\ns=-\r\nt=0 0\r\na=ice-options:trickle\r\na=group:BUNDLE rawrtc-sctp-dc\r\nm=application 9 DTLS\/SCTP 5000\r\nc=IN IP4 0.0.0.0\r\na=mid:rawrtc-sctp-dc\r\na=sendrecv\r\na=ice-ufrag:dyvdWCltHGslv94A\r\na=ice-pwd:1Z28xcHHDJB4aovZkingfHLRz4HOkHIY\r\na=setup:actpass\r\na=fingerprint:sha-256 6B:27:17:35:C5:D5:FD:0D:CF:7C:27:04:6D:DC:84:6E:52:EA:70:0A:8A:56:CE:9E:D1:24:78:85:04:E8:EB:F5\r\na=tls-id:x4zeTeGbPcWn3eWCRkHdK25EGLxVDOk7\r\na=sctpmap:5000 webrtc-datachannel 65535\r\na=max-message-size:0\r\na=candidate:0a2219c0 1 udp 1 10.34.25.192 40999 typ host\r\na=candidate:d97653b9 1 udp 1 217.118.83.184 14839 typ srflx raddr 10.34.25.192 rport 40999\r\na=end-of-candidates\r\n"}
[000001186] helper-handler: (A) ICE gatherer state: complete
{"type":"answer","sdp":"v=0\r\no=- 7844535314130813210 2 IN IP4 127.0.0.1\r\ns=-\r\nt=0 0\r\na=group:BUNDLE rawrtc-sctp-dc\r\na=msid-semantic: WMS\r\nm=application 52585 DTLS/SCTP 5000\r\nc=IN IP4 10.34.25.192\r\nb=AS:30\r\na=candidate:3924338437 1 udp 2122260223 10.34.25.192 52585 typ host generation 0 network-id 1 network-cost 50\r\na=ice-ufrag:n9TT\r\na=ice-pwd:wwub1uXdCwht/+SLlMPLObse\r\na=ice-options:trickle\r\na=fingerprint:sha-256 65:20:A2:5C:92:CB:00:D1:25:9A:6A:9A:F2:23:D3:C2:BC:30:D9:D2:A2:4D:CE:1B:0D:DC:7B:18:F3:9C:FB:24\r\na=setup:active\r\na=mid:rawrtc-sctp-dc\r\na=sctpmap:5000 webrtc-datachannel 1024\r\n"}
[000076685] peer-connection-app: Applying remote description
[000076686] helper-handler: (A) ICE transport state: checking
[000076686] helper-handler: (A) Peer connection state change: connecting
[000076705] helper-handler: (A) Signaling state change: stable
[000076706] helper-handler: (A) ICE transport state: connected
[000076733] helper-handler: (A) Peer connection state change: connected
[000076742] helper-handler: (A) Data channel open: cat-noises
[000076742] peer-connection-app: (A) Sending 8192 bytes
[000076743] helper-handler: (A) Data channel open: bear-noises
[000076783] helper-handler: (A) Data channel buffered amount low: cat-noises
[000076784] helper-handler: (A) Data channel buffered amount low: bear-noises
[000076794] helper-handler: (A) Incoming message for data channel cat-noises: 16384 bytes
[000077740] helper-handler: (A) New data channel instance: dinosaur-noises
[000077746] helper-handler: (A) Data channel buffered amount low: cat-noises
[000077746] helper-handler: (A) Data channel buffered amount low: bear-noises
[000077762] sctp-transport: No message handler, message of 16384 bytes has been discarded
[000106743] peer-connection-app: (A) Sending 16384 bytes
[000106744] peer-connection-app: (A) Closing channel
[000106751] helper-handler: (A) Data channel buffered amount low: cat-noises
[000106751] helper-handler: (A) Data channel buffered amount low: bear-noises
^C[000402878] helper-handler: Got signal: 2, terminating...
*** Stop client & bye ***
[000402878] helper-handler: (A) Signaling state change: closed
[000402878] helper-handler: (A) Peer connection state change: closed
[000402878] helper-handler: (A) Data channel closed: cat-noises
[000402878] helper-handler: (A) Data channel closed: bear-noises
joined with addres: 0
globik@globik-laptop:~/fork/rawrtc/my-tools$ 

```

# In browser Chromium console:

```
Hello! Press 'Start' when you're ready.
(index):150 Starting with role: Answering
(index):150 Negotiation needed
(index):150 Setting remote description
(index):150 Remote description: RTCSessionDescription {type: "offer", sdp: "v=0
↵o=- 1901006965 1 IN IP4 127.0.0.1
↵s=-
↵t=0 0…sctp-dc
↵a=sctpmap:5000 webrtc-datachannel 1024
↵"}
(index):150 Remote description complete
(index):150  Creating answer
(index):150 Local description: RTCSessionDescription {type: "answer", sdp: "v=0
↵o=- 7844535314130813210 2 IN IP4 127.0.0.1
↵s…sctp-dc
↵a=sctpmap:5000 webrtc-datachannel 1024
↵"}
(index):150 ICE connection state: checking
(index):150 ICE gathering state: gathering
(index):150 Local ICE candidate: RTCIceCandidate {foundation: "3924338437", component: 1, protocol: "udp", priority: 2122260223, ip: "10.34.25.192", …}
(index):150 ICE gathering state: complete
(index):150 Local ICE candidate: null
(index):150 Closing signalling channel
(index):150 Local description complete
(index):150 ICE connection state: connected
(index):150 cat-noises open
(index):150 cat-noises outgoing message (16384 bytes)
(index):150 Incoming data channel: bear-noises
(index):150 bear-noises open
(index):150 cat-noises incoming message (8192 bytes)
(index):150 dinosaur-noises open
(index):150 dinosaur-noises outgoing message (16384 bytes)
(index):150 bear-noises incoming message (16384 bytes)
(index):150 bear-noises closed
(index):150 ICE connection state: disconnected
(index):150 ICE connection state: failed

```

#In browser Chromium rights

```
ICE connection state: failed 
ICE connection state: disconnected 
bear-noises closed 
bear-noises incoming message (16384 bytes) 
dinosaur-noises outgoing message (16384 bytes) 
dinosaur-noises open 
cat-noises incoming message (8192 bytes) 
bear-noises open 
Incoming data channel: bear-noises 
cat-noises outgoing message (16384 bytes) 
cat-noises open 
ICE connection state: connected 
Local description complete 
Closing signalling channel 
Local ICE candidate: null 
ICE gathering state: complete 
Local ICE candidate: {
  "candidate": "candidate:3924338437 1 udp 2122260223 10.34.25.192 52585 typ host generation 0 ufrag n9TT network-id 1 network-cost 50",
  "sdpMid": "rawrtc-sctp-dc",
  "sdpMLineIndex": 0,
  "usernameFragment": "n9TT"
} 
ICE gathering state: gathering 
ICE connection state: checking 
Local description: {
  "type": "answer",
  "sdp": "v=0\r\no=- 7844535314130813210 2 IN IP4 127.0.0.1\r\ns=-\r\nt=0 0\r\na=group:BUNDLE rawrtc-sctp-dc\r\na=msid-semantic: WMS\r\nm=application 9 DTLS/SCTP 5000\r\nc=IN IP4 0.0.0.0\r\nb=AS:30\r\na=ice-ufrag:n9TT\r\na=ice-pwd:wwub1uXdCwht/+SLlMPLObse\r\na=ice-options:trickle\r\na=fingerprint:sha-256 65:20:A2:5C:92:CB:00:D1:25:9A:6A:9A:F2:23:D3:C2:BC:30:D9:D2:A2:4D:CE:1B:0D:DC:7B:18:F3:9C:FB:24\r\na=setup:active\r\na=mid:rawrtc-sctp-dc\r\na=sctpmap:5000 webrtc-datachannel 1024\r\n"
} 
 Creating answer 
Remote description complete 
Remote description: {
  "type": "offer",
  "sdp": "v=0\r\no=- 1901006965 1 IN IP4 127.0.0.1\r\ns=-\r\nt=0 0\r\na=group:BUNDLE rawrtc-sctp-dc\r\na=msid-semantic: WMS\r\nm=application 14839 DTLS/SCTP 5000\r\nc=IN IP4 217.118.83.184\r\na=candidate:0a2219c0 1 udp 1 10.34.25.192 40999 typ host generation 0\r\na=candidate:d97653b9 1 udp 1 217.118.83.184 14839 typ srflx raddr 10.34.25.192 rport 40999 generation 0\r\na=ice-ufrag:dyvdWCltHGslv94A\r\na=ice-pwd:1Z28xcHHDJB4aovZkingfHLRz4HOkHIY\r\na=ice-options:trickle\r\na=fingerprint:sha-256 6B:27:17:35:C5:D5:FD:0D:CF:7C:27:04:6D:DC:84:6E:52:EA:70:0A:8A:56:CE:9E:D1:24:78:85:04:E8:EB:F5\r\na=setup:actpass\r\na=mid:rawrtc-sctp-dc\r\na=sctpmap:5000 webrtc-datachannel 1024\r\n"
} 
Setting remote description 
Negotiation needed 
Starting with role: Answering 
Hello! Press 'Start' when you're ready. 
```
