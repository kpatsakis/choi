void fun()
{
  int entity_3 = 60;
  int entity_9 = 22;
  char entity_6[77] = "";
  entity_6 = NULL;
  char entity_8[entity_9] = "";
  entity_8 = NULL;
  char* entity_7;
  memset(entity_6, 'h', 77-1);
  entity_6[77-1]='';
  memset(entity_8, 'q', entity_9-1);
  entity_8[entity_9-1]='';
  entity_7 = (char*)malloc(13*sizeof(char));
  entity_7[13-1]='';
  entity_9 = 88;
  strcpy(entity_7, entity_8);
}