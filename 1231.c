void fun()
{
  int entity_8 = 66;
  int entity_5 = 10;
  entity_8 = 4;
  char entity_6[entity_8] = "";
  entity_6 = NULL;
  memset(entity_6, 'Z', entity_8-1);
  entity_6[entity_8-1]='';
  entity_6[70] = 'e';
}