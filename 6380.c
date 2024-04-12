void fun()
{
  int entity_4 = 33;
  char entity_8[50] = "";
  entity_8 = NULL;
  char entity_6[entity_4] = "";
  entity_6 = NULL;
  char entity_2[50] = "";
  entity_2 = NULL;
  memset(entity_8, 'W', 50-1);
  entity_8[50-1]='';
  memset(entity_2, 'V', 50-1);
  entity_2[50-1]='';
  memset(entity_6, 's', entity_4-1);
  entity_6[entity_4-1]='';
  entity_4 = 60;
  entity_6[44] = 'J';
}