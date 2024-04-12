void fun()
{
  int entity_8 = 3;
  int entity_0 = 23;
  char entity_4[19] = "";
  entity_4 = NULL;
  char* entity_3;
  char entity_7[entity_8] = "";
  entity_7 = NULL;
  memset(entity_4, 'V', 19-1);
  entity_4[19-1]='';
  entity_3 = (char*)malloc(95*sizeof(char));
  entity_3[95-1]='';
  memset(entity_7, 'd', entity_8-1);
  entity_7[entity_8-1]='';
  memcpy(entity_3, entity_7, entity_8*sizeof(char));
}