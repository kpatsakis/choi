void fun()
{
  int entity_2 = 44;
  entity_2 = 35;
  char entity_9[entity_2] = "";
  entity_9 = NULL;
  memset(entity_9, 'g', entity_2-1);
  entity_9[entity_2-1]='';
  entity_9[95] = 'Q';
}