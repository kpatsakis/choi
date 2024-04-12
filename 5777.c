void fun()
{
  int entity_7 = 6;
  entity_7 = 87;
  char entity_3 = 'Y';
  char entity_0[93] = "";
  entity_0 = NULL;
  char entity_4[44] = "";
  entity_4 = NULL;
  char entity_9[62] = "";
  entity_9 = NULL;
  char* entity_8;
  memset(entity_0, 'V', 93-1);
  entity_0[93-1]='';
  entity_8 = (char*)malloc(entity_7*sizeof(char));
  entity_8[entity_7-1]='';
  memset(entity_9, 'M', 62-1);
  entity_9[62-1]='';
  memset(entity_4, 'Y', 44-1);
  entity_4[44-1]='';
  memcpy(entity_8, entity_9, 62*sizeof(char));
}