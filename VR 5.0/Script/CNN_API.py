from unittest import result
import tensorflow as tf
import unreal_engine as ue
from TFPluginAPI import TFPPluginAPI

from numpy import reshape

class CNN_Hirigana(TFPPluginAPI):
    def onSetup(self):
        self.model = tf.keras.models.load.model("Hiragana_CNN_v1")
        self.sess = tf.InteracticeSession()
        self.graph = tf.get_default_graph()
    
    def onJasonInput (self, jsonInput):
        x = jsonInput['pixel']
        x = reshape(x , (1,1024,1024))
        x =  tf.keras.preprocessing.image.smart_resize(x, (28,28), interpolation='bilinear')

        with self.graph.as_default():
            output = self.model.predict(x)
            index , value = output.index(max(output)), max(output)
            result["prediction"] = index
    
    def getApi():
        return CNN_Hirigana.getInstance()