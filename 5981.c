void fun()
{
  int entity_5 = 54;
  entity_5 = 55;
  char entity_3[entity_5] = "";
  entity_3 = NULL;
  char entity_8[6] = "";
  entity_8 = NULL;
  memset(entity_8, 'n', 6-1);
  entity_8[6-1]='';
  memset(entity_3, 'n', entity_5-1);
  entity_3[entity_5-1]='';
  entity_3[10] = 'd';
}