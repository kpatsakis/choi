void fun()
{
  int entity_3 = 52;
  char entity_4 = 'c';
  char entity_0[26] = "";
  entity_0 = NULL;
  char entity_7[29] = "";
  entity_7 = NULL;
  memset(entity_0, 'E', 26-1);
  entity_0[26-1]='';
  memset(entity_7, 'N', 29-1);
  entity_7[29-1]='';
  entity_7[entity_3] = 'e';
}