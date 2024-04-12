void fun()
{
  int entity_4 = 53;
  int entity_5 = 51;
  char entity_2[entity_5] = "";
  entity_2 = NULL;
  memset(entity_2, 'E', entity_5-1);
  entity_2[entity_5-1]='';
  entity_2[17] = 'i';
}