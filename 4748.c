void fun()
{
  int entity_1 = 44;
  int entity_3 = 66;
  entity_3 = 24;
  char entity_6[entity_3] = "";
  entity_6 = NULL;
  memset(entity_6, 'r', entity_3-1);
  entity_6[entity_3-1]='';
  entity_6[42] = 'T';
}