void fun()
{
  int entity_5 = 90;
  int entity_2 = 51;
  int entity_4 = 40;
  char entity_9[100] = "";
  entity_9 = NULL;
  memset(entity_9, 'd', 100-1);
  entity_9[100-1]='';
  entity_9[entity_4] = 'M';
}