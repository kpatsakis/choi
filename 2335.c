void fun()
{
  int entity_0 = 86;
  entity_0 = 24;
  char* entity_8;
  char entity_3[entity_0] = "";
  entity_3 = NULL;
  char entity_9[52] = "";
  entity_9 = NULL;
  char* entity_6;
  memset(entity_9, 't', 52-1);
  entity_9[52-1]='';
  entity_8 = (char*)malloc(87*sizeof(char));
  entity_8[87-1]='';
  entity_6 = (char*)malloc(58*sizeof(char));
  entity_6[58-1]='';
  memset(entity_3, 't', entity_0-1);
  entity_3[entity_0-1]='';
  memcpy(entity_6, entity_3, entity_0*sizeof(char));
}