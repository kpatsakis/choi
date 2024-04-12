void fun()
{
  int entity_8 = 25;
  entity_8 = 34;
  char entity_9[53] = "";
  entity_9 = NULL;
  char entity_6 = 'h';
  memset(entity_9, 'z', 53-1);
  entity_9[53-1]='';
  entity_9[entity_8] = 'x';
}