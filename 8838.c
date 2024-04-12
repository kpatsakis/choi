void fun()
{
  int entity_8 = 51;
  char entity_4[5] = "";
  entity_4 = NULL;
  memset(entity_4, 'O', 5-1);
  entity_4[5-1]='';
  entity_4[entity_8] = 'm';
}