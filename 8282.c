void fun()
{
  int entity_8 = 24;
  char entity_7[entity_8] = "";
  entity_7 = NULL;
  char entity_0[23] = "";
  entity_0 = NULL;
  memset(entity_0, 'B', 23-1);
  entity_0[23-1]='';
  memset(entity_7, 'A', entity_8-1);
  entity_7[entity_8-1]='';
  entity_7[10] = 'P';
}