void fun()
{
  int entity_9 = 75;
  int entity_6 = 56;
  entity_6 = 8;
  char* entity_7;
  char entity_8[45] = "";
  entity_8 = NULL;
  char entity_0 = 'a';
  entity_7 = (char*)malloc(entity_6*sizeof(char));
  entity_7[entity_6-1]='';
  memset(entity_8, 'c', 45-1);
  entity_8[45-1]='';
  strcpy(entity_7, entity_8);
}