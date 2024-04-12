void fun()
{
  int entity_6 = 55;
  char entity_7[entity_6] = "";
  entity_7 = NULL;
  memset(entity_7, 'd', entity_6-1);
  entity_7[entity_6-1]='';
  entity_6 = 85;
  entity_7[43] = 'z';
}