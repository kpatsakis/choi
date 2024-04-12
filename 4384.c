void fun()
{
  int entity_4 = 41;
  int entity_1 = 63;
  char* entity_6;
  char entity_3 = 'p';
  char entity_7[entity_4] = "";
  entity_7 = NULL;
  entity_6 = (char*)malloc(95*sizeof(char));
  entity_6[95-1]='';
  memset(entity_7, 'l', entity_4-1);
  entity_7[entity_4-1]='';
  entity_4 = 30;
  strcpy(entity_6, entity_7);
}