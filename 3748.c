void fun()
{
  int entity_2 = 18;
  char entity_6[entity_2] = "";
  entity_6 = NULL;
  char entity_8 = 'G';
  memset(entity_6, 'y', entity_2-1);
  entity_6[entity_2-1]='';
  entity_2 = 53;
  entity_6[10] = 'Y';
}