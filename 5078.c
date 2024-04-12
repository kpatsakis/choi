void fun()
{
  int entity_5 = 49;
  char* entity_4;
  char* entity_7;
  char* entity_0;
  char entity_8[65] = "";
  entity_8 = NULL;
  entity_7 = (char*)malloc(6*sizeof(char));
  entity_7[6-1]='';
  entity_4 = (char*)malloc(60*sizeof(char));
  entity_4[60-1]='';
  memset(entity_8, 'S', 65-1);
  entity_8[65-1]='';
  entity_0 = (char*)malloc(entity_5*sizeof(char));
  entity_0[entity_5-1]='';
  entity_5 = 39;
  memcpy(entity_0, entity_8, 65*sizeof(char));
}