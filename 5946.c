void fun()
{
  int entity_5 = 86;
  int entity_4 = 84;
  char entity_1[45] = "";
  entity_1 = NULL;
  char* entity_8;
  memset(entity_1, 'K', 45-1);
  entity_1[45-1]='';
  entity_8 = (char*)malloc(entity_4*sizeof(char));
  entity_8[entity_4-1]='';
  entity_4 = 3;
  memcpy(entity_8, entity_1, 45*sizeof(char));
}