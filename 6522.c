void fun()
{
  int entity_3 = 73;
  char entity_8[6] = "";
  entity_8 = NULL;
  char entity_4 = 'C';
  char entity_9[6] = "";
  entity_9 = NULL;
  memset(entity_8, 'q', 6-1);
  entity_8[6-1]='';
  memset(entity_9, 'O', 6-1);
  entity_9[6-1]='';
  entity_8[entity_3] = 'Z';
}