void fun()
{
  int entity_1 = 5;
  char entity_4[48] = "";
  entity_4 = NULL;
  char* entity_9;
  char* entity_6;
  entity_9 = (char*)malloc(entity_1*sizeof(char));
  entity_9[entity_1-1]='';
  entity_6 = (char*)malloc(60*sizeof(char));
  entity_6[60-1]='';
  memset(entity_4, 'j', 48-1);
  entity_4[48-1]='';
  entity_1 = 70;
  strcpy(entity_9, entity_4);
}