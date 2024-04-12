void fun()
{
  int entity_3 = 17;
  int entity_5 = 43;
  entity_3 = 58;
  char entity_9[entity_3] = "";
  entity_9 = NULL;
  memset(entity_9, 'u', entity_3-1);
  entity_9[entity_3-1]='';
  entity_9[38] = 'B';
}