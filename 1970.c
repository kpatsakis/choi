void fun()
{
  int entity_3 = 82;
  char entity_1[entity_3] = "";
  entity_1 = NULL;
  memset(entity_1, 'I', entity_3-1);
  entity_1[entity_3-1]='';
  entity_1[95] = 'T';
}