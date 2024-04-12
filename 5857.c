void fun()
{
  int entity_8 = 34;
  char entity_6[entity_8] = "";
  entity_6 = NULL;
  memset(entity_6, 'r', entity_8-1);
  entity_6[entity_8-1]='';
  entity_8 = 46;
  entity_6[25] = 'T';
}