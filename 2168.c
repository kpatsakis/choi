void fun()
{
  int entity_6 = 26;
  char entity_5[entity_6] = "";
  entity_5 = NULL;
  memset(entity_5, 'j', entity_6-1);
  entity_5[entity_6-1]='';
  entity_6 = 57;
  entity_5[24] = 'z';
}