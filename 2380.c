void fun()
{
  int entity_1 = 20;
  char entity_2[78] = "";
  entity_2 = NULL;
  char entity_9[17] = "";
  entity_9 = NULL;
  memset(entity_9, 'C', 17-1);
  entity_9[17-1]='';
  memset(entity_2, 'g', 78-1);
  entity_2[78-1]='';
  entity_2[99] = 'q';
}