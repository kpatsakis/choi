void fun()
{
  int entity_7 = 96;
  int entity_8 = 31;
  char entity_2[4] = "";
  entity_2 = NULL;
  char entity_4[entity_7] = "";
  entity_4 = NULL;
  memset(entity_4, 'B', entity_7-1);
  entity_4[entity_7-1]='';
  memset(entity_2, 's', 4-1);
  entity_2[4-1]='';
  entity_7 = 50;
  entity_4[30] = 'Q';
}