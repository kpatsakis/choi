void fun()
{
  int entity_6 = 66;
  entity_6 = 66;
  char entity_7[entity_6] = "";
  entity_7 = NULL;
  memset(entity_7, 'm', entity_6-1);
  entity_7[entity_6-1]='';
  entity_7[25] = 'z';
}