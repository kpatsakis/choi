void fun()
{
  int entity_1 = 12;
  entity_1 = 48;
  char entity_3[entity_1] = "";
  entity_3 = NULL;
  char entity_2[40] = "";
  entity_2 = NULL;
  memset(entity_3, 'k', entity_1-1);
  entity_3[entity_1-1]='';
  memset(entity_2, 'Z', 40-1);
  entity_2[40-1]='';
  entity_3[97] = 'K';
}