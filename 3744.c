void fun()
{
  int entity_5 = 11;
  int entity_0 = 70;
  entity_5 = 11;
  char* entity_9;
  char* entity_6;
  char entity_4[entity_5] = "";
  entity_4 = NULL;
  entity_6 = (char*)malloc(90*sizeof(char));
  entity_6[90-1]='';
  entity_9 = (char*)malloc(100*sizeof(char));
  entity_9[100-1]='';
  memset(entity_4, 'M', entity_5-1);
  entity_4[entity_5-1]='';
  strcpy(entity_9, entity_4);
}