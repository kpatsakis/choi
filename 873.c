void fun()
{
  int entity_1 = 53;
  char* entity_3;
  char entity_2[41] = "";
  entity_2 = NULL;
  char entity_4 = 's';
  char entity_0[45] = "";
  entity_0 = NULL;
  entity_3 = (char*)malloc(11*sizeof(char));
  entity_3[11-1]='';
  memset(entity_2, 'Z', 41-1);
  entity_2[41-1]='';
  memset(entity_0, 'Z', 45-1);
  entity_0[45-1]='';
  memcpy(entity_3, entity_0, 45*sizeof(char));
}