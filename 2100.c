void fun()
{
  int entity_2 = 8;
  char entity_0[6] = "";
  entity_0 = NULL;
  char entity_4[70] = "";
  entity_4 = NULL;
  memset(entity_0, 'U', 6-1);
  entity_0[6-1]='';
  memset(entity_4, 'i', 70-1);
  entity_4[70-1]='';
  entity_0[entity_2] = 'Q';
}