void fun()
{
  int entity_9 = 91;
  entity_9 = 42;
  char entity_2 = 'o';
  char entity_3[entity_9] = "";
  entity_3 = NULL;
  memset(entity_3, 'M', entity_9-1);
  entity_3[entity_9-1]='';
  entity_3[16] = 'f';
}