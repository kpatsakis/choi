void fun()
{
  int entity_3 = 29;
  int entity_8 = 15;
  char entity_2[20] = "";
  entity_2 = NULL;
  memset(entity_2, 'c', 20-1);
  entity_2[20-1]='';
  entity_3 = 75;
  entity_2[entity_3] = 'v';
}