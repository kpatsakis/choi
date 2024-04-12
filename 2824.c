void fun()
{
  int entity_4 = 60;
  char entity_6[entity_4] = "";
  entity_6 = NULL;
  char entity_5[12] = "";
  entity_5 = NULL;
  memset(entity_6, 'd', entity_4-1);
  entity_6[entity_4-1]='';
  memset(entity_5, 'i', 12-1);
  entity_5[12-1]='';
  entity_6[48] = 'G';
}