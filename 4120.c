void fun()
{
  int entity_8 = 51;
  int entity_3 = 90;
  char entity_2[88] = "";
  entity_2 = NULL;
  char entity_9[entity_3] = "";
  entity_9 = NULL;
  memset(entity_9, 'E', entity_3-1);
  entity_9[entity_3-1]='';
  memset(entity_2, 'h', 88-1);
  entity_2[88-1]='';
  entity_9[64] = 'i';
}