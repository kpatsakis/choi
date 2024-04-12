void fun()
{
  int entity_4 = 12;
  int entity_2 = 26;
  char entity_9[29] = "";
  entity_9 = NULL;
  memset(entity_9, 'X', 29-1);
  entity_9[29-1]='';
  entity_4 = 55;
  entity_9[entity_4] = 'i';
}