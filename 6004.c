void fun()
{
  int entity_8 = 89;
  char entity_9[38] = "";
  entity_9 = NULL;
  char entity_7[85] = "";
  entity_7 = NULL;
  char* entity_1;
  memset(entity_9, 'k', 38-1);
  entity_9[38-1]='';
  memset(entity_7, 'M', 85-1);
  entity_7[85-1]='';
  entity_1 = (char*)malloc(entity_8*sizeof(char));
  entity_1[entity_8-1]='';
  strcpy(entity_1, entity_7);
}