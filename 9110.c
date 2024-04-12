void fun()
{
  int entity_3 = 56;
  int entity_9 = 9;
  entity_9 = 48;
  char entity_2 = 'u';
  char entity_8[entity_9] = "";
  entity_8 = NULL;
  memset(entity_8, 'K', entity_9-1);
  entity_8[entity_9-1]='';
  entity_8[50] = 'P';
}