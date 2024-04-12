void fun()
{
  int entity_7 = 7;
  int entity_3 = 20;
  char entity_5[entity_3] = "";
  entity_5 = NULL;
  char entity_6 = 'i';
  memset(entity_5, 'A', entity_3-1);
  entity_5[entity_3-1]='';
  entity_3 = 54;
  entity_5[54] = 'j';
}