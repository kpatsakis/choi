void fun()
{
  int entity_2 = 71;
  char entity_3[51] = "";
  entity_3 = NULL;
  char entity_1[4] = "";
  entity_1 = NULL;
  memset(entity_1, 'g', 4-1);
  entity_1[4-1]='';
  memset(entity_3, 'E', 51-1);
  entity_3[51-1]='';
  entity_3[entity_2] = 'K';
}