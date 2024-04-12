void fun()
{
  int entity_7 = 15;
  char entity_9[27] = "";
  entity_9 = NULL;
  memset(entity_9, 'F', 27-1);
  entity_9[27-1]='';
  entity_9[entity_7] = 'Z';
}