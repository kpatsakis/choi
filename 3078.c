void fun()
{
  int entity_1 = 13;
  char entity_2[51] = "";
  entity_2 = NULL;
  char entity_4[57] = "";
  entity_4 = NULL;
  memset(entity_4, 'f', 57-1);
  entity_4[57-1]='';
  memset(entity_2, 'l', 51-1);
  entity_2[51-1]='';
  entity_4[entity_1] = 'Q';
}