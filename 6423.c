void fun()
{
  int entity_3 = 72;
  char entity_0[32] = "";
  entity_0 = NULL;
  char entity_4 = 'Z';
  char entity_1[23] = "";
  entity_1 = NULL;
  memset(entity_1, 'M', 23-1);
  entity_1[23-1]='';
  memset(entity_0, 'v', 32-1);
  entity_0[32-1]='';
  entity_1[entity_3] = 'I';
}