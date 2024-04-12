void fun()
{
  int entity_6 = 59;
  int entity_2 = 94;
  entity_2 = 70;
  char entity_9[entity_2] = "";
  entity_9 = NULL;
  memset(entity_9, 'Z', entity_2-1);
  entity_9[entity_2-1]='';
  entity_9[64] = 't';
}