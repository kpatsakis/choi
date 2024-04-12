void fun()
{
  int entity_1 = 57;
  int entity_3 = 15;
  char entity_5[14] = "";
  entity_5 = NULL;
  memset(entity_5, 'j', 14-1);
  entity_5[14-1]='';
  entity_1 = 27;
  entity_5[entity_1] = 'I';
}