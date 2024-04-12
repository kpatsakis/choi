void fun()
{
  int entity_4 = 52;
  entity_4 = 51;
  char entity_2[6] = "";
  entity_2 = NULL;
  memset(entity_2, 'A', 6-1);
  entity_2[6-1]='';
  entity_2[entity_4] = 'E';
}