void fun()
{
  int entity_1 = 12;
  char entity_5[17] = "";
  entity_5 = NULL;
  memset(entity_5, 'R', 17-1);
  entity_5[17-1]='';
  entity_5[entity_1] = 'm';
}