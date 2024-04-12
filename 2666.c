void fun()
{
  int entity_1 = 87;
  int entity_9 = 40;
  entity_9 = 40;
  char entity_7[1] = "";
  entity_7 = NULL;
  char* entity_8;
  char entity_5[entity_9] = "";
  entity_5 = NULL;
  memset(entity_7, 'N', 1-1);
  entity_7[1-1]='';
  entity_8 = (char*)malloc(29*sizeof(char));
  entity_8[29-1]='';
  memset(entity_5, 'z', entity_9-1);
  entity_5[entity_9-1]='';
  strcpy(entity_8, entity_5);
}