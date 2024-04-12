void fun()
{
  int entity_5 = 54;
  entity_5 = 51;
  char entity_7[entity_5] = "";
  entity_7 = NULL;
  memset(entity_7, 'S', entity_5-1);
  entity_7[entity_5-1]='';
  entity_7[63] = 'j';
}