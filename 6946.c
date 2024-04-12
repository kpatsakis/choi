void fun()
{
  int entity_3 = 68;
  int entity_1 = 73;
  char entity_5[entity_1] = "";
  entity_5 = NULL;
  char entity_0[50] = "";
  entity_0 = NULL;
  memset(entity_5, 'S', entity_1-1);
  entity_5[entity_1-1]='';
  memset(entity_0, 'D', 50-1);
  entity_0[50-1]='';
  entity_1 = 86;
  entity_5[34] = 'S';
}