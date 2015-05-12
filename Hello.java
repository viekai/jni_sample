class Hello {
    static {
        System.loadLibrary("hello-jni");  
    }

    public static void main(String args[]) {
        Test t = new Test();
        t.hello();
    }
}

class Test {
    public native void helloFromJNI(); 

    public void hello() {
        helloFromJNI();
    }

}
