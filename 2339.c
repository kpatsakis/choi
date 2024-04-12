void fun()
{
  int entity_7 = 49;
  char entity_5[14] = "";
  entity_5 = NULL;
  char entity_8[60] = "";
  entity_8 = NULL;
  char entity_9[11] = "";
  entity_9 = NULL;
  char entity_2[97] = "";
  entity_2 = NULL;
  memset(entity_2, 's', 97-1);
  entity_2[97-1]='';
  memset(entity_9, 'i', 11-1);
  entity_9[11-1]='';
  memset(entity_5, 'q', 14-1);
  entity_5[14-1]='';
  memset(entity_8, 'i', 60-1);
  entity_8[60-1]='';
  entity_2[entity_7] = 's';
}