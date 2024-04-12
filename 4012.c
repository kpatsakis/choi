void fun()
{
  int entity_7 = 9;
  char entity_8[entity_7] = "";
  entity_8 = NULL;
  char entity_0 = 'q';
  char* entity_1;
  char entity_4[18] = "";
  entity_4 = NULL;
  char* entity_9;
  entity_1 = (char*)malloc(76*sizeof(char));
  entity_1[76-1]='';
  memset(entity_8, 'e', entity_7-1);
  entity_8[entity_7-1]='';
  memset(entity_4, 'v', 18-1);
  entity_4[18-1]='';
  entity_9 = (char*)malloc(43*sizeof(char));
  entity_9[43-1]='';
  strcpy(entity_9, entity_8);
}