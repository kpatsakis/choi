void fun()
{
  int entity_2 = 38;
  entity_2 = 57;
  char entity_9[40] = "";
  entity_9 = NULL;
  memset(entity_9, 'F', 40-1);
  entity_9[40-1]='';
  entity_9[entity_2] = 'K';
}