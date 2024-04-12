void fun()
{
  int entity_8 = 60;
  char entity_9[43] = "";
  entity_9 = NULL;
  memset(entity_9, 's', 43-1);
  entity_9[43-1]='';
  entity_9[entity_8] = 'o';
}