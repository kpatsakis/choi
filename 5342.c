void fun()
{
  int entity_6 = 77;
  char entity_3[72] = "";
  entity_3 = NULL;
  memset(entity_3, 'W', 72-1);
  entity_3[72-1]='';
  entity_3[entity_6] = 'm';
}