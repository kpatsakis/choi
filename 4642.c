void fun()
{
  int entity_0 = 21;
  char* entity_3;
  char entity_8 = 't';
  char entity_9[72] = "";
  entity_9 = NULL;
  char* entity_7;
  char entity_1[entity_0] = "";
  entity_1 = NULL;
  memset(entity_1, 'i', entity_0-1);
  entity_1[entity_0-1]='';
  memset(entity_9, 'x', 72-1);
  entity_9[72-1]='';
  entity_3 = (char*)malloc(44*sizeof(char));
  entity_3[44-1]='';
  entity_7 = (char*)malloc(57*sizeof(char));
  entity_7[57-1]='';
  entity_0 = 53;
  strcpy(entity_3, entity_1);
}