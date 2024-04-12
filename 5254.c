void fun()
{
  int entity_8 = 4;
  char entity_6 = 'P';
  char entity_7[entity_8] = "";
  entity_7 = NULL;
  memset(entity_7, 'D', entity_8-1);
  entity_7[entity_8-1]='';
  entity_7[11] = 'T';
}