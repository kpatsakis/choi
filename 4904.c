void fun()
{
  int entity_6 = 98;
  entity_6 = 38;
  char entity_7[72] = "";
  entity_7 = NULL;
  char entity_0[50] = "";
  entity_0 = NULL;
  char entity_4[entity_6] = "";
  entity_4 = NULL;
  memset(entity_0, 'S', 50-1);
  entity_0[50-1]='';
  memset(entity_7, 'O', 72-1);
  entity_7[72-1]='';
  memset(entity_4, 'l', entity_6-1);
  entity_4[entity_6-1]='';
  entity_4[86] = 'W';
}