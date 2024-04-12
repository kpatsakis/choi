void fun()
{
  int entity_0 = 60;
  int entity_5 = 95;
  char entity_9[entity_0] = "";
  entity_9 = NULL;
  char entity_7[95] = "";
  entity_7 = NULL;
  char* entity_4;
  memset(entity_9, 'V', entity_0-1);
  entity_9[entity_0-1]='';
  memset(entity_7, 'z', 95-1);
  entity_7[95-1]='';
  entity_4 = (char*)malloc(44*sizeof(char));
  entity_4[44-1]='';
  strcpy(entity_4, entity_9);
}