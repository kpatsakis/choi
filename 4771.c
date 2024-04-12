void fun()
{
  int entity_2 = 60;
  char entity_9[55] = "";
  entity_9 = NULL;
  memset(entity_9, 't', 55-1);
  entity_9[55-1]='';
  entity_2 = 44;
  entity_9[entity_2] = 'j';
}