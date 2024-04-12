void fun()
{
  int entity_6 = 33;
  char* entity_4;
  char entity_1[23] = "";
  entity_1 = NULL;
  char entity_9[85] = "";
  entity_9 = NULL;
  entity_4 = (char*)malloc(entity_6*sizeof(char));
  entity_4[entity_6-1]='';
  memset(entity_9, 'M', 85-1);
  entity_9[85-1]='';
  memset(entity_1, 't', 23-1);
  entity_1[23-1]='';
  entity_6 = 37;
  strcpy(entity_4, entity_1);
}