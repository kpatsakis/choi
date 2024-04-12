void fun()
{
  int entity_0 = 40;
  char entity_2 = 'k';
  char entity_6 = 'o';
  char entity_9[entity_0] = "";
  entity_9 = NULL;
  memset(entity_9, 'x', entity_0-1);
  entity_9[entity_0-1]='';
  entity_0 = 33;
  entity_9[56] = 'K';
}