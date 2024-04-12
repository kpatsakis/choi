void fun()
{
  int entity_8 = 6;
  char entity_2[entity_8] = "";
  entity_2 = NULL;
  memset(entity_2, 'c', entity_8-1);
  entity_2[entity_8-1]='';
  entity_2[14] = 'u';
}