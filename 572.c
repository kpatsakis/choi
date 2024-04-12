void fun()
{
  int entity_0 = 88;
  int entity_1 = 58;
  int entity_6 = 29;
  char entity_4[45] = "";
  entity_4 = NULL;
  char* entity_8;
  char entity_3 = 'Y';
  entity_8 = (char*)malloc(entity_1*sizeof(char));
  entity_8[entity_1-1]='';
  memset(entity_4, 'O', 45-1);
  entity_4[45-1]='';
  entity_1 = 61;
  strcpy(entity_8, entity_4);
}