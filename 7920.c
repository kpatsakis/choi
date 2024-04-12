void fun()
{
  int entity_1 = 30;
  int entity_8 = 75;
  char entity_9[85] = "";
  entity_9 = NULL;
  memset(entity_9, 'G', 85-1);
  entity_9[85-1]='';
  entity_1 = 92;
  entity_9[entity_1] = 'I';
}