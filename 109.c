void fun()
{
  int entity_9 = 99;
  char entity_3[42] = "";
  entity_3 = NULL;
  memset(entity_3, 'p', 42-1);
  entity_3[42-1]='';
  entity_3[entity_9] = 'b';
}