void fun()
{
  int entity_7 = 72;
  int entity_9 = 52;
  char entity_6[entity_9] = "";
  entity_6 = NULL;
  char* entity_5;
  char* entity_2;
  memset(entity_6, 'j', entity_9-1);
  entity_6[entity_9-1]='';
  entity_5 = (char*)malloc(44*sizeof(char));
  entity_5[44-1]='';
  entity_2 = (char*)malloc(17*sizeof(char));
  entity_2[17-1]='';
  strcpy(entity_2, entity_6);
}