void fun()
{
  int entity_5 = 82;
  char entity_6[entity_5] = "";
  entity_6 = NULL;
  char entity_1[63] = "";
  entity_1 = NULL;
  char entity_7[28] = "";
  entity_7 = NULL;
  memset(entity_1, 'L', 63-1);
  entity_1[63-1]='';
  memset(entity_7, 'q', 28-1);
  entity_7[28-1]='';
  memset(entity_6, 'G', entity_5-1);
  entity_6[entity_5-1]='';
  entity_5 = 19;
  entity_6[59] = 'n';
}