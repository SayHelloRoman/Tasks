class UtilsTemperature {
    public static float celsiusToFahrenheit(float temperature) {
        return temperature + 273.15F;
    }

    public static float celsiusToKelvin(float temperature){
        return temperature * 9 / 5 + 32;
    }
}

public class Main {
    public static void main(String[] args) {
        System.out.println(UtilsTemperature.celsiusToFahrenheit(5));
        System.out.println(UtilsTemperature.celsiusToKelvin(5));
    }
}