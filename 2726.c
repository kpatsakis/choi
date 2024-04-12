void fun()
{
  int entity_5 = 64;
  int entity_8 = 26;
  entity_8 = 26;
  char* entity_6;
  char entity_1 = 'P';
  char entity_7[entity_8] = "";
  entity_7 = NULL;
  char entity_9 = 'W';
  entity_6 = (char*)malloc(49*sizeof(char));
  entity_6[49-1]='';
  memset(entity_7, 'G', entity_8-1);
  entity_7[entity_8-1]='';
  strcpy(entity_6, entity_7);
}