void fun()
{
  int entity_1 = 18;
  char* entity_8;
  char entity_9[entity_1] = "";
  entity_9 = NULL;
  char entity_3[95] = "";
  entity_3 = NULL;
  memset(entity_9, 'i', entity_1-1);
  entity_9[entity_1-1]='';
  entity_8 = (char*)malloc(13*sizeof(char));
  entity_8[13-1]='';
  memset(entity_3, 'f', 95-1);
  entity_3[95-1]='';
  entity_1 = 13;
  strcpy(entity_8, entity_9);
}