void fun()
{
  int entity_5 = 22;
  entity_5 = 40;
  char entity_1[73] = "";
  entity_1 = NULL;
  char entity_4[17] = "";
  entity_4 = NULL;
  memset(entity_1, 'S', 73-1);
  entity_1[73-1]='';
  memset(entity_4, 'b', 17-1);
  entity_4[17-1]='';
  entity_4[entity_5] = 'S';
}