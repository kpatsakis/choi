void fun()
{
  int entity_5 = 85;
  char entity_2[19] = "";
  entity_2 = NULL;
  memset(entity_2, 'J', 19-1);
  entity_2[19-1]='';
  entity_2[entity_5] = 'c';
}