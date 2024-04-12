void fun()
{
  int entity_8 = 29;
  char entity_6[45] = "";
  entity_6 = NULL;
  char entity_4 = 'D';
  char entity_7 = 'E';
  char entity_3[29] = "";
  entity_3 = NULL;
  memset(entity_6, 'D', 45-1);
  entity_6[45-1]='';
  memset(entity_3, 'Z', 29-1);
  entity_3[29-1]='';
  entity_6[entity_8] = 'f';
}