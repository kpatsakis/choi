void fun()
{
  int entity_7 = 55;
  int entity_5 = 16;
  char entity_1[93] = "";
  entity_1 = NULL;
  char entity_0[entity_7] = "";
  entity_0 = NULL;
  char entity_3[57] = "";
  entity_3 = NULL;
  memset(entity_3, 'B', 57-1);
  entity_3[57-1]='';
  memset(entity_1, 'q', 93-1);
  entity_1[93-1]='';
  memset(entity_0, 'n', entity_7-1);
  entity_0[entity_7-1]='';
  entity_0[19] = 'u';
}