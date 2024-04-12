void fun()
{
  int entity_4 = 84;
  int entity_8 = 64;
  char entity_2[25] = "";
  entity_2 = NULL;
  char entity_3[62] = "";
  entity_3 = NULL;
  char entity_5[entity_8] = "";
  entity_5 = NULL;
  memset(entity_3, 'd', 62-1);
  entity_3[62-1]='';
  memset(entity_2, 'J', 25-1);
  entity_2[25-1]='';
  memset(entity_5, 'u', entity_8-1);
  entity_5[entity_8-1]='';
  entity_8 = 46;
  entity_5[39] = 'I';
}