void fun()
{
  int entity_2 = 31;
  char entity_0 = 'g';
  char entity_5[17] = "";
  entity_5 = NULL;
  char entity_1[entity_2] = "";
  entity_1 = NULL;
  memset(entity_1, 'y', entity_2-1);
  entity_1[entity_2-1]='';
  memset(entity_5, 'w', 17-1);
  entity_5[17-1]='';
  entity_1[51] = 'E';
}