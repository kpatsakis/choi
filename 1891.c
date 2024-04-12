void fun()
{
  int entity_0 = 62;
  char entity_8[11] = "";
  entity_8 = NULL;
  char entity_5 = 'e';
  char* entity_7;
  char entity_1[entity_0] = "";
  entity_1 = NULL;
  char entity_4 = 'P';
  memset(entity_8, 'z', 11-1);
  entity_8[11-1]='';
  entity_7 = (char*)malloc(60*sizeof(char));
  entity_7[60-1]='';
  memset(entity_1, 't', entity_0-1);
  entity_1[entity_0-1]='';
  memcpy(entity_7, entity_1, entity_0*sizeof(char));
}