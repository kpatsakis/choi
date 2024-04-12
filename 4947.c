void fun()
{
  int entity_1 = 95;
  char entity_2[36] = "";
  entity_2 = NULL;
  char entity_3[entity_1] = "";
  entity_3 = NULL;
  char entity_8[39] = "";
  entity_8 = NULL;
  memset(entity_8, 'q', 39-1);
  entity_8[39-1]='';
  memset(entity_3, 'm', entity_1-1);
  entity_3[entity_1-1]='';
  memset(entity_2, 'o', 36-1);
  entity_2[36-1]='';
  entity_3[81] = 'D';
}