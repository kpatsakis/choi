void fun()
{
  int entity_0 = 68;
  char entity_7[53] = "";
  entity_7 = NULL;
  char entity_1[entity_0] = "";
  entity_1 = NULL;
  memset(entity_7, 'y', 53-1);
  entity_7[53-1]='';
  memset(entity_1, 'L', entity_0-1);
  entity_1[entity_0-1]='';
  entity_1[12] = 'n';
}