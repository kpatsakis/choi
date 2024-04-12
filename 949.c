void fun()
{
  int entity_7 = 84;
  char* entity_8;
  char entity_9[24] = "";
  entity_9 = NULL;
  char entity_4 = 'N';
  char entity_6[45] = "";
  entity_6 = NULL;
  entity_8 = (char*)malloc(entity_7*sizeof(char));
  entity_8[entity_7-1]='';
  memset(entity_6, 'D', 45-1);
  entity_6[45-1]='';
  memset(entity_9, 'q', 24-1);
  entity_9[24-1]='';
  entity_7 = 17;
  strcpy(entity_8, entity_6);
}