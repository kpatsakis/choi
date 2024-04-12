void fun()
{
  int entity_7 = 17;
  int entity_5 = 84;
  entity_5 = 28;
  char entity_1[80] = "";
  entity_1 = NULL;
  char entity_3[6] = "";
  entity_3 = NULL;
  memset(entity_3, 'H', 6-1);
  entity_3[6-1]='';
  memset(entity_1, 'y', 80-1);
  entity_1[80-1]='';
  entity_1[entity_5] = 'k';
}