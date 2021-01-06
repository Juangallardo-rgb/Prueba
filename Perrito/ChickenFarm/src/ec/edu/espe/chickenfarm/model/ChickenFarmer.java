/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package ec.edu.espe.ChickenFarm.model;

/**
 *
 * @author Nicole Lara ESPE-DCCO
 */
public class ChickenFarmer {
    private String name;
    private ChickenCoop coops;

    public ChickenFarmer(String name, ChickenCoop coops) {
        this.name = name;
        this.coops = coops;
    }

    
    
    @Override
    public String toString() {
        return "ChickenFarmer{" + "name=" + getName() + ", coops=" + getCoops() + '}';
    }

    
    public String getName() {
        return name;
    }

    public void setName(String name) {
        this.name = name;
    }

    public ChickenCoop getCoops() {
        return coops;
    }

    public void setCoops(ChickenCoop coops) {
        this.coops = coops;
    }
    
    
}
