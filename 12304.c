void fun()
{
  int entity_0 = 37;
  char entity_5[45] = "";
  char* entity_1;
  memset(entity_5, 'G', 45-1);
  entity_5[45-1]='0';
  entity_1 = (char*)malloc(entity_0*sizeof(char));
  entity_1[0]='0';
  memcpy(entity_1, entity_5, 45*sizeof(char));
}