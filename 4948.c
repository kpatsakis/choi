void fun()
{
  int entity_2 = 77;
  char entity_8[entity_2] = "";
  entity_8 = NULL;
  memset(entity_8, 'q', entity_2-1);
  entity_8[entity_2-1]='';
  entity_8[51] = 'w';
}