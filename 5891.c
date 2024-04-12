void fun()
{
  char entity_9[81] = "";
  entity_9 = NULL;
  char entity_4 = 'n';
  char* entity_8;
  char entity_1[55] = "";
  entity_1 = NULL;
  memset(entity_9, 'F', 81-1);
  entity_9[81-1]='';
  memset(entity_1, 'V', 55-1);
  entity_1[55-1]='';
  entity_8 = (char*)malloc(43*sizeof(char));
  entity_8[43-1]='';
  memcpy(entity_8, entity_1, 55*sizeof(char));
}