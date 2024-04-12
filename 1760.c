void fun()
{
  int entity_4 = 4;
  char entity_3[7] = "";
  entity_3 = NULL;
  memset(entity_3, 'S', 7-1);
  entity_3[7-1]='';
  entity_4 = 15;
  entity_3[entity_4] = 'm';
}