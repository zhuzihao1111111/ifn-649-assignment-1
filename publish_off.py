import paho.mqtt.publish as publish

mqtt_broker = "13.211.45.203"
topic = "ifn649"
message = "LED_OFF"

publish.single(topic, message, hostname=mqtt_broker)
