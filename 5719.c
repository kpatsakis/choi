void fun()
{
  int entity_3 = 1;
  entity_3 = 55;
  char entity_9[34] = "";
  entity_9 = NULL;
  memset(entity_9, 's', 34-1);
  entity_9[34-1]='';
  entity_9[entity_3] = 'i';
}