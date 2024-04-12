void fun()
{
  int entity_0 = 23;
  char entity_2[entity_0] = "";
  entity_2 = NULL;
  memset(entity_2, 'R', entity_0-1);
  entity_2[entity_0-1]='';
  entity_2[69] = 'u';
}