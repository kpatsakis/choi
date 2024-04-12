void fun()
{
  int entity_6 = 71;
  char entity_8[39] = "";
  entity_8 = NULL;
  char* entity_9;
  char entity_4[59] = "";
  entity_4 = NULL;
  char* entity_1;
  entity_9 = (char*)malloc(entity_6*sizeof(char));
  entity_9[entity_6-1]='';
  memset(entity_8, 'C', 39-1);
  entity_8[39-1]='';
  entity_1 = (char*)malloc(47*sizeof(char));
  entity_1[47-1]='';
  memset(entity_4, 'Z', 59-1);
  entity_4[59-1]='';
  strcpy(entity_9, entity_4);
}