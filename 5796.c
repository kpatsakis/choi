void fun()
{
  int entity_8 = 12;
  char entity_9[100] = "";
  entity_9 = NULL;
  memset(entity_9, 'v', 100-1);
  entity_9[100-1]='';
  entity_9[entity_8] = 'K';
}