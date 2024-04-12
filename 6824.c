void fun()
{
  int entity_5 = 61;
  entity_5 = 80;
  char* entity_1;
  char entity_9[45] = "";
  entity_9 = NULL;
  char entity_8[13] = "";
  entity_8 = NULL;
  entity_1 = (char*)malloc(entity_5*sizeof(char));
  entity_1[entity_5-1]='';
  memset(entity_9, 'x', 45-1);
  entity_9[45-1]='';
  memset(entity_8, 'f', 13-1);
  entity_8[13-1]='';
  memcpy(entity_1, entity_9, 45*sizeof(char));
}