void fun()
{
  int entity_2 = 23;
  int entity_0 = 97;
  char* entity_9;
  char entity_5[60] = "";
  entity_5 = NULL;
  char entity_8[93] = "";
  entity_8 = NULL;
  memset(entity_8, 'q', 93-1);
  entity_8[93-1]='';
  entity_9 = (char*)malloc(entity_0*sizeof(char));
  entity_9[entity_0-1]='';
  memset(entity_5, 'l', 60-1);
  entity_5[60-1]='';
  entity_0 = 61;
  memcpy(entity_9, entity_5, 60*sizeof(char));
}