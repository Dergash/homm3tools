// Created by John Åkerblom 2014-01-27

// TODO: Needs balancing, also could load values from text file

#ifndef __CONV_TABLES_CREATURES_H_DEF__
#define __CONV_TABLES_CREATURES_H_DEF__

#include "../h3m_constants/h3m_creature.h"
#include "../utils/msvc_comp_stdint.h"

int creature_type_conv_table_roe[] = {
    H3M_CREATURE_PIKEMAN,       // Pikeman
    H3M_CREATURE_HALBERDIER,    // Halberdier
    H3M_CREATURE_ARCHER,        // Archer
    H3M_CREATURE_MARKSMAN,      // Marksman
    H3M_CREATURE_GRIFFIN,       // Griffin
    H3M_CREATURE_ROYAL_GRIFFIN, // Royal Griffin
    H3M_CREATURE_SWORDSMAN,     // Swordsman
    H3M_CREATURE_CRUSADER,      // Crusader
    H3M_CREATURE_MONK,          // Monk
    H3M_CREATURE_ZEALOT,        // Zealot
    H3M_CREATURE_CAVALIER,      // Cavalier
    H3M_CREATURE_CHAMPION,      // Champion
    H3M_CREATURE_ANGEL,         // Angel
    H3M_CREATURE_ARCHANGEL,     // Archangel
    H3M_CREATURE_CENTAUR,       // Centaur
    H3M_CREATURE_CENTAUR_CAPTAIN,       // Centaur Captain
    H3M_CREATURE_DWARF,         // Dwarf
    H3M_CREATURE_BATTLE_DWARF,  // Battle Dwarf
    H3M_CREATURE_WOOD_ELF,      // Wood Elf
    H3M_CREATURE_GRAND_ELF,     // Grand Elf
    H3M_CREATURE_PEGASUS,       // Pegasus
    H3M_CREATURE_SILVER_PEGASUS,        // Silver Pegasus
    H3M_CREATURE_DENDROID_GUARD,        // Dendroid Guard
    H3M_CREATURE_DENDROID_SOLDIER,      // Dendroid Soldier
    H3M_CREATURE_UNICORN,       // Unicorn
    H3M_CREATURE_WAR_UNICORN,   // War Unicorn
    H3M_CREATURE_GREEN_DRAGON,  // Green Dragon
    H3M_CREATURE_GOLD_DRAGON,   // Gold Dragon
    H3M_CREATURE_GREMLIN,       // Gremlin
    H3M_CREATURE_MASTER_GREMLIN,        // Master Gremlin
    H3M_CREATURE_STONE_GARGOYLE,        // Stone Gargoyle
    H3M_CREATURE_OBSIDIAN_GARGOYLE,     // Obsidian Gargoyle
    H3M_CREATURE_STONE_GOLEM,   // Stone Golem
    H3M_CREATURE_IRON_GOLEM,    // Iron Golem
    H3M_CREATURE_MAGE,          // Mage
    H3M_CREATURE_ARCH_MAGE,     // Arch Mage
    H3M_CREATURE_GENIE,         // Genie
    H3M_CREATURE_MASTER_GENIE,  // Master Genie
    H3M_CREATURE_NAGA,          // Naga
    H3M_CREATURE_NAGA_QUEEN,    // Naga Queen
    H3M_CREATURE_GIANT,         // Giant
    H3M_CREATURE_TITAN,         // Titan
    H3M_CREATURE_IMP,           // Imp
    H3M_CREATURE_FAMILIAR,      // Familiar
    H3M_CREATURE_GOG,           // Gog
    H3M_CREATURE_MAGOG,         // Magog
    H3M_CREATURE_HELL_HOUND,    // Hell Hound
    H3M_CREATURE_CERBERUS,      // Cerberus
    H3M_CREATURE_DEMON,         // Demon
    H3M_CREATURE_HORNED_DEMON,  // Horned Demon
    H3M_CREATURE_PIT_FIEND,     // Pit Fiend
    H3M_CREATURE_PIT_LORD,      // Pit Lord
    H3M_CREATURE_EFREETI,       // Efreeti
    H3M_CREATURE_EFREET_SULTAN, // Efreet Sultan
    H3M_CREATURE_DEVIL,         // Devil
    H3M_CREATURE_ARCH_DEVIL,    // Arch Devil
    H3M_CREATURE_SKELETON,      // Skeleton
    H3M_CREATURE_SKELETON_WARRIOR,      // Skeleton Warrior
    H3M_CREATURE_WALKING_DEAD,  // Walking Dead
    H3M_CREATURE_ZOMBIE,        // Zombie
    H3M_CREATURE_WIGHT,         // Wight
    H3M_CREATURE_WRAITH,        // Wraith
    H3M_CREATURE_VAMPIRE,       // Vampire
    H3M_CREATURE_VAMPIRE_LORD,  // Vampire Lord
    H3M_CREATURE_LICH,          // Lich
    H3M_CREATURE_POWER_LICH,    // Power Lich
    H3M_CREATURE_BLACK_KNIGHT,  // Black Knight
    H3M_CREATURE_DREAD_KNIGHT,  // Dread Knight
    H3M_CREATURE_BONE_DRAGON,   // Bone Dragon
    H3M_CREATURE_GHOST_DRAGON,  // Ghost Dragon
    H3M_CREATURE_TROGLODYTE,    // Troglodyte
    H3M_CREATURE_INFERNAL_TROGLODYTE,   // Infernal Troglodyte
    H3M_CREATURE_HARPY,         // Harpy
    H3M_CREATURE_HARPY_HAG,     // Harpy Hag
    H3M_CREATURE_BEHOLDER,      // Beholder
    H3M_CREATURE_EVIL_EYE,      // Evil Eye
    H3M_CREATURE_MEDUSA,        // Medusa
    H3M_CREATURE_MEDUSA_QUEEN,  // Medusa Queen
    H3M_CREATURE_MINOTAUR,      // Minotaur
    H3M_CREATURE_MINOTAUR_KING, // Minotaur King
    H3M_CREATURE_MANTICORE,     // Manticore
    H3M_CREATURE_SCORPICORE,    // Scorpicore
    H3M_CREATURE_RED_DRAGON,    // Red Dragon
    H3M_CREATURE_BLACK_DRAGON,  // Black Dragon
    H3M_CREATURE_GOBLIN,        // Goblin
    H3M_CREATURE_HOBGOBLIN,     // Hobgoblin
    H3M_CREATURE_WOLF_RIDER,    // Wolf Rider
    H3M_CREATURE_WOLF_RAIDER,   // Wolf Raider
    H3M_CREATURE_ORC,           // Orc
    H3M_CREATURE_ORC_CHIEFTAIN, // Orc Chieftain
    H3M_CREATURE_OGRE,          // Ogre
    H3M_CREATURE_OGRE_MAGE,     // Ogre Mage
    H3M_CREATURE_ROC,           // Roc
    H3M_CREATURE_THUNDERBIRD,   // Thunderbird
    H3M_CREATURE_CYCLOPS,       // Cyclops
    H3M_CREATURE_CYCLOPS_KING,  // Cyclops King
    H3M_CREATURE_BEHEMOTH,      // Behemoth
    H3M_CREATURE_ANCIENT_BEHEMOTH,      // Ancient Behemoth
    H3M_CREATURE_GNOLL,         // Gnoll
    H3M_CREATURE_GNOLL_MARAUDER,        // Gnoll Marauder
    H3M_CREATURE_LIZARDMAN,     // Lizardman
    H3M_CREATURE_LIZARD_WARRIOR,        // Lizard Warrior
    H3M_CREATURE_GORGON,        // Gorgon
    H3M_CREATURE_MIGHTY_GORGON, // Mighty Gorgon
    H3M_CREATURE_SERPENT_FLY,   // Serpent Fly
    H3M_CREATURE_DRAGON_FLY,    // Dragon Fly
    H3M_CREATURE_BASILISK,      // Basilisk
    H3M_CREATURE_GREATER_BASILISK,      // Greater Basilisk
    H3M_CREATURE_WYVERN,        // Wyvern
    H3M_CREATURE_WYVERN_MONARCH,        // Wyvern Monarch
    H3M_CREATURE_HYDRA,         // Hydra
    H3M_CREATURE_CHAOS_HYDRA,   // Chaos Hydra
    H3M_CREATURE_AIR_ELEMENTAL, // Air Elemental
    H3M_CREATURE_EARTH_ELEMENTAL,       // Earth Elemental
    H3M_CREATURE_FIRE_ELEMENTAL,        // Fire Elemental
    H3M_CREATURE_WATER_ELEMENTAL,       // Water Elemental
    H3M_CREATURE_GOLD_GOLEM,    // Gold Golem
    H3M_CREATURE_DIAMOND_GOLEM, // Diamond Golem
    H3M_CREATURE_GREMLIN,       // Pixie --------------------------> Gremlin
    H3M_CREATURE_HOBGOBLIN,     // Sprite -----------------------> Hobgoblin
    H3M_CREATURE_CHAMPION,      // Psychic Elemental -------------> Champion
    H3M_CREATURE_CAVALIER,      // Magic Elemental ---------------> Cavalier
    H3M_CREATURE_NOT_USED1,     // NOT USED(attacker)
    H3M_CREATURE_WATER_ELEMENTAL,       // Ice Elemental ----------> Water Elemental
    H3M_CREATURE_NOT_USED2,     // NOT USED(defender)
    H3M_CREATURE_EARTH_ELEMENTAL,       // Magma Elemental ---------> Earth Elemental
    H3M_CREATURE_NOT_USED3,     // NOT USED()
    H3M_CREATURE_AIR_ELEMENTAL, // Storm Elemental -----------> Air Elemental
    H3M_CREATURE_NOT_USED4,     // NOT USED()
    H3M_CREATURE_FIRE_ELEMENTAL,        // Energy Elemental --------->  Energy Elemental
    H3M_CREATURE_RED_DRAGON,    // Firebird ---------------------> Red Dragon
    H3M_CREATURE_GOLD_DRAGON,   // Phoenix ---------------------> Gold Dragon
    H3M_CREATURE_BLACK_DRAGON,  // Azure Dragon ---------------> Black Dragon
    H3M_CREATURE_BLACK_DRAGON,  // Crystal Dragon -------------> Black Dragon
    H3M_CREATURE_GREEN_DRAGON,  // Faerie Dragon --------------> Green Dragon
    H3M_CREATURE_GOLD_DRAGON,   // Rust Dragon -----------------> Gold Dragon
    H3M_CREATURE_ARCH_MAGE,     // Enchanter ---------------------> Archmage
    H3M_CREATURE_MARKSMAN,      // Sharpshooter -------------------> Marksman
    H3M_CREATURE_ARCHER,        // Halfling -----------------------> Archer
    H3M_CREATURE_PIKEMAN,       // Peasant -------------------------> Pikeman
    H3M_CREATURE_WOLF_RIDER,    // Boar -------------------------> Wolf Rider
    H3M_CREATURE_DIAMOND_GOLEM, // Mummy ---------------------> Diamond Golem
    H3M_CREATURE_WOLF_RIDER,    // Nomad ------------------------> Wolf Rider
    H3M_CREATURE_HALBERDIER,    // Rogue ------------------------> Halberdier
    H3M_CREATURE_OGRE           // Troll -------------------------------> Ogre
};

int creature_multiplier_table_roe[] = {
    1,                          // Pikeman
    1,                          // Halberdier
    1,                          // Archer
    1,                          // Marksman
    1,                          // Griffin
    1,                          // Royal Griffin
    1,                          // Swordsman
    1,                          // Crusader
    1,                          // Monk
    1,                          // Zealot
    1,                          // Cavalier
    1,                          // Champion
    1,                          // Angel
    1,                          // Archangel
    1,                          // Centaur
    1,                          // Centaur Captain
    1,                          // Dwarf
    1,                          // Battle Dwarf
    1,                          // Wood Elf
    1,                          // Grand Elf
    1,                          // Pegasus
    1,                          // Silver Pegasus
    1,                          // Dendroid Guard
    1,                          // Dendroid Soldier
    1,                          // Unicorn
    1,                          // War Unicorn
    1,                          // Green Dragon
    1,                          // Gold Dragon
    1,                          // Gremlin
    1,                          // Master Gremlin
    1,                          // Stone Gargoyle
    1,                          // Obsidian Gargoyle
    1,                          // Stone Golem
    1,                          // Iron Golem
    1,                          // Mage
    1,                          // Arch Mage
    1,                          // Genie
    1,                          // Master Genie
    1,                          // Naga
    1,                          // Naga Queen
    1,                          // Giant
    1,                          // Titan45
    1,                          // Imp
    1,                          // Familiar
    1,                          // Gog
    1,                          // Magog
    1,                          // Hell Hound
    1,                          // Cerberus
    1,                          // Demon
    1,                          // Horned Demon
    1,                          // Pit Fiend
    1,                          // Pit Lord
    1,                          // Efreeti
    1,                          // Efreet Sultan
    1,                          // Devil
    1,                          // Arch Devil
    1,                          // Skeleton
    1,                          // Skeleton Warrior
    1,                          // Walking Dead
    1,                          // Zombie
    1,                          // Wight
    1,                          // Wraith
    1,                          // Vampire
    1,                          // Vampire Lord
    1,                          // Lich
    1,                          // Power Lich
    1,                          // Black Knight
    1,                          // Dread Knight
    1,                          // Bone Dragon
    1,                          // Ghost Dragon
    1,                          // Troglodyte
    1,                          // Infernal Troglodyte
    1,                          // Harpy
    1,                          // Harpy Hag
    1,                          // Beholder
    1,                          // Evil Eye
    1,                          // Medusa
    1,                          // Medusa Queen
    1,                          // Minotaur
    1,                          // Minotaur King
    1,                          // Manticore
    1,                          // Scorpicore
    1,                          // Red Dragon
    1,                          // Black Dragon
    1,                          // Goblin
    1,                          // Hobgoblin
    1,                          // Wolf Rider
    1,                          // Wolf Raider
    1,                          // Orc
    1,                          // Orc Chieftain
    1,                          // Ogre
    1,                          // Ogre Mage
    1,                          // Roc
    1,                          // Thunderbird
    1,                          // Cyclops
    1,                          // Cyclops King
    1,                          // Behemoth
    1,                          // Ancient Behemoth
    1,                          // Gnoll
    1,                          // Gnoll Marauder
    1,                          // Lizardman
    1,                          // Lizard Warrior
    1,                          // Gorgon
    1,                          // Mighty Gorgon
    1,                          // Serpent Fly
    1,                          // Dragon Fly
    1,                          // Basilisk
    1,                          // Greater Basilisk
    1,                          // Wyvern
    1,                          // Wyvern Monarch
    1,                          // Hydra
    1,                          // Chaos Hydra
    1,                          // Air Elemental
    1,                          // Earth Elemental
    1,                          // Fire Elemental
    1,                          // Water Elemental
    1,                          // Gold Golem
    1,                          // Diamond Golem
    1,                          // Pixie
    1,                          // Sprite
    1,                          // Psychic Elemental
    1,                          // Magic Elemental
    1,                          // NOT USED(attacker)
    2,                          // Ice Elemental
    1,                          // NOT USED(defender)
    1,                          // Magma Elemental
    1,                          // NOT USED()
    2,                          // Storm Elemental
    1,                          // NOT USED()
    2,                          // Energy Elemental
    1,                          // Firebird
    1,                          // Phoenix
    3,                          // Azure Dragon  --------------> Black Dragon
    2,                          // Crystal Dragon -------------> Black Dragon
    3,                          // Faerie Dragon --------------> Green Dragon
    2,                          // Rust Dragon ----------------> Gold Dragon
    3,                          // Enchanter
    10,                         // Sharpshooter
    2,                          // Halfling
    3,                          // Peasant
    1,                          // Boar
    1,                          // Mummy
    1,                          // Nomad
    1,                          // Rogue
    1,                          // Troll ----------------------> Ogre
};

int creature_appearence_table_sod[] = {
    "AvWPike.def",              // Pikeman
    "AVWpikx0.def",             // Halberdier
    "AvWLCrs.def",              // Archer
    "AvWHCrs.def",              // Marksman
    "AvWGrif.def",              // Griffin
    "AVWgrix0.def",             // Royal Griffin
    "AVWswrd0.def",             // Swordsman
    "AVWswrx0.def",             // Crusader
    "AvWMonk.def",              // Monk
    "AVWmonx0.def",             // Zealot
    "AVWcvlr0.def",             // Cavalier
    "AVWcvlx0.def",             // Champion
    "AvWAngl.def",              // Angel
    "AvWArch.def",              // Archangel
    "AVWcent0.def",             // Centaur
    "AVWcenx0.def",             // Centaur Captain
    "AVWdwrf0.def",             // Dwarf
    "AVWdwrx0.def",             // Battle Dwarf
    "AVWelfw0.def",             // Wood Elf
    "AVWelfx0.def",             // Grand Elf
    "AVWpega0.def",             // Pegasus
    "AVWpegx0.def",             // Silver Pegasus
    "AVWtree0.def",             // Dendroid Guard
    "AVWtrex0.def",             // Dendroid Soldier
    "AVWunic0.def",             // Unicorn
    "AVWunix0.def",             // War Unicorn
    "AVWdrag0.def",             // Green Dragon
    "AVWdrax0.def",             // Gold Dragon
    "AVWgrem0.def",             // Gremlin
    "AVWgrex0.def",             // Master Gremlin
    "AVWgarg0.def",             // Stone Gargoyle
    "AVWgarx0.def",             // Obsidian Gargoyle
    "AVWgolm0.def",             // Stone Golem
    "AVWgolx0.def",             // Iron Golem
    "AVWmage0.def",             // Mage
    "AVWmagx0.def",             // Arch Mage
    "AVWgeni0.def",             // Genie
    "AVWgenx0.def",             // Master Genie
    "AVWnaga0.def",             // Naga
    "AVWnagx0.def",             // Naga Queen
    "AVWtitn0.def",             // Giant
    "AVWtitx0.def",             // Titan
    "AVWimp0.def",              // Imp
    "AVWimpx0.def",             // Familiar
    "AVWgog0.def",              // Gog
    "AVWgogx0.def",             // Magog
    "AVWhoun0.def",             // Hell Hound
    "AVWhoux0.def",             // Cerberus
    "AVWdemn0.def",             // Demon
    "AVWdemx0.def",             // Horned Demon
    "AVWpitf0.def",             // Pit Fiend
    "AVWpitx0.def",             // Pit Lord
    "AVWefre0.def",             // Efreeti
    "AVWefrx0.def",             // Efreeti Sultan
    "AVWdevl0.def",             // Devil
    "AVWdevx0.def",             // Arch Devil
    "AVWskel0.def",             // Skeleton
    "AVWskex0.def",             // Skeleton Warrior
    "AVWzomb0.def",             // Walking Dead
    "AVWzomx0.def",             // Zombie
    "AvWWigh.def",              // Wight
    "AVWwigx0.def",             // Wraith
    "AVWvamp0.def",             // Vampire
    "AVWvamx0.def",             // Vampire Lord
    "AVWlich0.def",             // Lich
    "AVWlicx0.def",             // Power Lich
    "AVWbkni0.def",             // Black Knight
    "AVWbknx0.def",             // Dread Knight
    "AVWbone0.def",             // Bone Dragon
    "AVWbonx0.def",             // Ghost Dragon
    "AVWtrog0.def",             // Troglodyte
    "AvWInfr.def",              // Infernal Troglodyte
    "AVWharp0.def",             // Harpy
    "AVWharx0.def",             // Harpy Hag
    "AVWbehl0.def",             // Beholder
    "AVWbehx0.def",             // Evil Eye
    "AvWMeds.def",              // Medusa
    "AVWmedx0.def",             // Medusa Queen
    "AvWMino.def",              // Minotaur
    "AVWminx0.def",             // Minotaur King
    "AVWmant0.def",             // Manticore
    "AVWmanx0.def",             // Scorpicore
    "AvWRDrg.def",              // Red Dragon
    "AVWddrx0.def",             // Black Dragon
    "AVWgobl0.def",             // Goblin
    "AVWgobx0.def",             // Hobgoblin
    "AVWwolf0.def",             // Wolf Rider
    "AVWwolx0.def",             // Wolf Raider
    "AVWorc0.def",              // Orc
    "AVWorcx0.def",             // Orc Chieftan
    "AVWogre0.def",             // Ogre
    "AVWogrx0.def",             // Ogre Mage
    "AVWroc0.def",              // Roc
    "AVWrocx0.def",             // Thunderbird
    "AVWcycl0.def",             // Cyclops
    "AVWcycx0.def",             // Cyclops King
    "AVWbhmt0.def",             // Behemoth
    "AVWbhmx0.def",             // Ancient Behemoth
    "AVWgnll0.def",             // Gnoll
    "AVWgnlx0.def",             // Gnoll Maradeur
    "AvWLizr.def",              // Lizardman
    "AVWlizx0.def",             // Lizard Warrior
    "AvWGorg.def",              // Gorgon
    "AVWgorx0.def",             // Mighty Gorgon
    "AvWDFly.def",              // Serpent Fly
    "AvWDFir.def",              // Dragon Fly
    "AvWBasl.def",              // Basilisk
    "AvWGBas.def",              // Greater Basilisk
    "AvWWyvr.def",              // Wyvern
    "AVWwyvx0.def",             // Wyvern Monarch
    "AvWHydr.def",              // Hydra
    "AVWhydx0.def",             // Chaos Hydra
    "AVWelma0.def",             // Air Elemental
    "AVWelme0.def",             // Earth Elemental
    "AVWelmf0.def",             // Fire Elemental
    "AVWelmw0.def",             // Water Elemental
    "AVWglmg0.def",             // Gold Golem
    "AVWglmd0.def",             // Diamon Golem
    "AVWpixie.def",             // Pixie
    "AVWsprit.def",             // Sprite
    "AVWpsye.def",              // Psychic Elemental
    "AVWmagel.def",             // Magic Elemental
    "AVWmrnd0.def",             // NOT USED()
    "AVWicee.def",              // Ice Elemental
    "AVWmrnd0.def",             // NOT USED()
    "AVWstone.def",             // Magma Elemental
    "AVWmrnd0.def",             // NOT USED()
    "AVWstorm.def",             // Storm Elemental
    "AVWmrnd0.def",             // NOT USED()
    "AVWnrg.def",               // Energy Elemental
    "AVWfbird.def",             // Firebird
    "AVWphx.def",               // Phoenix
    "AVWazure.def",             // Azure Dragon
    "AVWcdrg.def",              // Crystal Dragon
    "AVWfdrg.def",              // Faerie Dragon
    "AVWrust.def",              // Rust Dragon
    "AVWench.def",              // Enchanter
    "AVWsharp.def",             // Sharpshooter
    "AVWhalf.def",              // Halfling
    "AVWpeas.def",              // Peasant
    "AVWboar.def",              // Boar
    "AVWmumy.def",              // Mummy
    "AVWnomd.def",              // Nomad
    "AVWrog.def",               // Rogue
    "AVWtrll.def"               // Troll
};

#endif
