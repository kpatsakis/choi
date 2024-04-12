void fun()
{
  int entity_6 = 51;
  entity_6 = 12;
  char entity_1[entity_6] = "";
  entity_1 = NULL;
  memset(entity_1, 'J', entity_6-1);
  entity_1[entity_6-1]='';
  entity_1[6] = 'M';
}