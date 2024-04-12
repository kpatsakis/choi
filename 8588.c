void fun()
{
  int entity_3 = 99;
  char entity_5[entity_3] = "";
  entity_5 = NULL;
  char entity_4[59] = "";
  entity_4 = NULL;
  memset(entity_4, 'O', 59-1);
  entity_4[59-1]='';
  memset(entity_5, 'c', entity_3-1);
  entity_5[entity_3-1]='';
  entity_5[11] = 'E';
}