void fun()
{
  int entity_2 = 67;
  int entity_9 = 58;
  entity_2 = 7;
  char entity_6[entity_2] = "";
  entity_6 = NULL;
  memset(entity_6, 'N', entity_2-1);
  entity_6[entity_2-1]='';
  entity_6[28] = 'y';
}