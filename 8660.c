void fun()
{
  int entity_4 = 47;
  int entity_2 = 25;
  char entity_9[16] = "";
  entity_9 = NULL;
  memset(entity_9, 'q', 16-1);
  entity_9[16-1]='';
  entity_2 = 66;
  entity_9[entity_2] = 'S';
}