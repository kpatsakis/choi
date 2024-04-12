void fun()
{
  int entity_9 = 99;
  char entity_2 = 'C';
  char entity_8[entity_9] = "";
  entity_8 = NULL;
  memset(entity_8, 'H', entity_9-1);
  entity_8[entity_9-1]='';
  entity_8[25] = 'b';
}