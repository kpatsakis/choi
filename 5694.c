void fun()
{
  int entity_4 = 93;
  char entity_7[33] = "";
  entity_7 = NULL;
  char* entity_1;
  char entity_3[entity_4] = "";
  entity_3 = NULL;
  entity_1 = (char*)malloc(36*sizeof(char));
  entity_1[36-1]='';
  memset(entity_7, 'T', 33-1);
  entity_7[33-1]='';
  memset(entity_3, 'm', entity_4-1);
  entity_3[entity_4-1]='';
  strcpy(entity_1, entity_3);
}