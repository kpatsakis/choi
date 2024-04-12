void fun()
{
  int entity_7 = 42;
  char entity_9[7] = "";
  entity_9 = NULL;
  memset(entity_9, 'U', 7-1);
  entity_9[7-1]='';
  entity_9[89] = 't';
}