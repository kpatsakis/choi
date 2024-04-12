void fun()
{
  int entity_6 = 77;
  char entity_7[entity_6] = "";
  entity_7 = NULL;
  memset(entity_7, 'L', entity_6-1);
  entity_7[entity_6-1]='';
  entity_6 = 54;
  entity_7[50] = 'i';
}