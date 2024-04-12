void fun()
{
  int entity_2 = 34;
  char entity_9[62] = "";
  entity_9 = NULL;
  memset(entity_9, 'k', 62-1);
  entity_9[62-1]='';
  entity_9[entity_2] = 'F';
}