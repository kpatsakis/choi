void fun()
{
  int entity_8 = 93;
  char entity_4[20] = "";
  entity_4 = NULL;
  memset(entity_4, 'T', 20-1);
  entity_4[20-1]='';
  entity_4[entity_8] = 'J';
}