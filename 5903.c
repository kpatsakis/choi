void fun()
{
  int entity_9 = 58;
  char* entity_8;
  char entity_3[70] = "";
  entity_3 = NULL;
  char entity_4[entity_9] = "";
  entity_4 = NULL;
  char* entity_5;
  memset(entity_3, 'k', 70-1);
  entity_3[70-1]='';
  entity_8 = (char*)malloc(76*sizeof(char));
  entity_8[76-1]='';
  entity_5 = (char*)malloc(60*sizeof(char));
  entity_5[60-1]='';
  memset(entity_4, 'y', entity_9-1);
  entity_4[entity_9-1]='';
  entity_9 = 64;
  strcpy(entity_8, entity_4);
}