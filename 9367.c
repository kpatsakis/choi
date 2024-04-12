void fun()
{
  int entity_9 = 84;
  char entity_3[62] = "";
  entity_3 = NULL;
  memset(entity_3, 'c', 62-1);
  entity_3[62-1]='';
  entity_3[entity_9] = 'f';
}