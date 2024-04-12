void fun()
{
  int entity_3 = 77;
  char entity_4[58] = "";
  entity_4 = NULL;
  char entity_9[37] = "";
  entity_9 = NULL;
  memset(entity_9, 'C', 37-1);
  entity_9[37-1]='';
  memset(entity_4, 't', 58-1);
  entity_4[58-1]='';
  entity_9[entity_3] = 'O';
}