void fun()
{
  int entity_6 = 57;
  int entity_4 = 92;
  int entity_0 = 3;
  char entity_7[45] = "";
  entity_7 = NULL;
  char* entity_5;
  char* entity_9;
  memset(entity_7, 'D', 45-1);
  entity_7[45-1]='';
  entity_9 = (char*)malloc(entity_4*sizeof(char));
  entity_9[entity_4-1]='';
  entity_5 = (char*)malloc(41*sizeof(char));
  entity_5[41-1]='';
  strcpy(entity_9, entity_7);
}