void fun()
{
  int entity_5 = 11;
  int entity_4 = 35;
  char entity_1[0] = "";
  entity_1 = NULL;
  char entity_3[entity_4] = "";
  entity_3 = NULL;
  memset(entity_3, 'd', entity_4-1);
  entity_3[entity_4-1]='';
  memset(entity_1, 'j', 0-1);
  entity_1[0-1]='';
  entity_4 = 92;
  entity_3[5] = 's';
}