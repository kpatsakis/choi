void fun()
{
  int entity_1 = 22;
  char entity_4[54] = "";
  entity_4 = NULL;
  char entity_6[entity_1] = "";
  entity_6 = NULL;
  memset(entity_6, 'Y', entity_1-1);
  entity_6[entity_1-1]='';
  memset(entity_4, 'I', 54-1);
  entity_4[54-1]='';
  entity_6[58] = 'K';
}