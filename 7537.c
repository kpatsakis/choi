void fun()
{
  int entity_9 = 49;
  int entity_7 = 22;
  char entity_3[26] = "";
  entity_3 = NULL;
  char entity_8[57] = "";
  entity_8 = NULL;
  memset(entity_8, 'l', 57-1);
  entity_8[57-1]='';
  memset(entity_3, 'j', 26-1);
  entity_3[26-1]='';
  entity_3[entity_9] = 'e';
}