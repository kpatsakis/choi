void fun()
{
  int entity_2 = 26;
  entity_2 = 84;
  char entity_6[86] = "";
  entity_6 = NULL;
  char entity_1[45] = "";
  entity_1 = NULL;
  char* entity_0;
  memset(entity_1, 'F', 45-1);
  entity_1[45-1]='';
  memset(entity_6, 'r', 86-1);
  entity_6[86-1]='';
  entity_0 = (char*)malloc(57*sizeof(char));
  entity_0[57-1]='';
  entity_1[entity_2] = 'e';
}