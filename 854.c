void fun()
{
  int entity_3 = 75;
  int entity_5 = 72;
  char entity_6 = 'F';
  char entity_1[entity_5] = "";
  entity_1 = NULL;
  char entity_4[57] = "";
  entity_4 = NULL;
  memset(entity_1, 'G', entity_5-1);
  entity_1[entity_5-1]='';
  memset(entity_4, 'x', 57-1);
  entity_4[57-1]='';
  entity_1[1] = 'N';
}