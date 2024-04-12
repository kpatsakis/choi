void fun()
{
  int entity_1 = 72;
  int entity_9 = 47;
  entity_1 = 4;
  char entity_2[17] = "";
  entity_2 = NULL;
  char entity_4[entity_1] = "";
  entity_4 = NULL;
  memset(entity_4, 'g', entity_1-1);
  entity_4[entity_1-1]='';
  memset(entity_2, 'Y', 17-1);
  entity_2[17-1]='';
  entity_4[73] = 'f';
}