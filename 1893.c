void fun()
{
  int entity_1 = 49;
  entity_1 = 68;
  char entity_4[entity_1] = "";
  entity_4 = NULL;
  char entity_6 = 'U';
  char entity_3[64] = "";
  entity_3 = NULL;
  memset(entity_4, 'E', entity_1-1);
  entity_4[entity_1-1]='';
  memset(entity_3, 'v', 64-1);
  entity_3[64-1]='';
  entity_4[28] = 'c';
}