/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package ec.edu.espe.ChickenFarm.view;

import ec.edu.espe.ChickenFarm.model.Chicken;
import ec.edu.espe.ChickenFarm.model.ChickenCoop;
import ec.edu.espe.ChickenFarm.model.ChickenFarmer;
import ec.edu.espe.ChickenFarm.model.Egg;

/**
 *
 * @author Nicole Lara ESPE-DCCO
 */
public class FarmSimulator {

    public static void main(String[] args) {
        Egg egg = new Egg();
        System.out.println("egg-->" + egg);
        Chicken chicken1 = new Chicken(1, "Margarita", "blue", 1, true);
        Chicken chicken2 = new Chicken(2, "Lupe", "white", 2, true);
        System.out.println("chicken Margarita -->" + chicken1);
        
        Chicken[] chickens = new Chicken[2];
        chickens[0]=chicken1;
        chickens[1]=chicken2;
        System.out.println("chicken (0) -->" + chickens[0]);
        System.out.println("chicken (1) -->" + chickens[1]);
        
        ChickenCoop coop1= new ChickenCoop(01,chickens);
        
        ChickenFarmer farmer = new ChickenFarmer("Martin",coop1);
        System.out.println(farmer);
        
        
        try {
            System.out.println("chicken (0) -->" + chickens[10]);
        }catch(Exception ex){
            System.out.println("OIGA EL SISTEMA ACEPTA SOLO 5 GALLINAS");
        }

    }

}
