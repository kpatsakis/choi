void fun()
{
  int entity_7 = 3;
  char* entity_8;
  char entity_9[70] = "";
  entity_9 = NULL;
  char entity_1[entity_7] = "";
  entity_1 = NULL;
  memset(entity_9, 'v', 70-1);
  entity_9[70-1]='';
  entity_8 = (char*)malloc(36*sizeof(char));
  entity_8[36-1]='';
  memset(entity_1, 'G', entity_7-1);
  entity_1[entity_7-1]='';
  strcpy(entity_8, entity_1);
}