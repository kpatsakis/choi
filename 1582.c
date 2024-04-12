void fun()
{
  int entity_7 = 10;
  int entity_5 = 80;
  entity_7 = 10;
  char entity_6[entity_7] = "";
  entity_6 = NULL;
  char* entity_4;
  char entity_8 = 'F';
  char* entity_9;
  entity_4 = (char*)malloc(76*sizeof(char));
  entity_4[76-1]='';
  entity_9 = (char*)malloc(24*sizeof(char));
  entity_9[24-1]='';
  memset(entity_6, 'M', entity_7-1);
  entity_6[entity_7-1]='';
  strcpy(entity_9, entity_6);
}