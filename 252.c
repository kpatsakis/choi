void fun()
{
  int entity_4 = 77;
  int entity_8 = 88;
  int entity_0 = 27;
  char entity_6[entity_0] = "";
  entity_6 = NULL;
  char* entity_3;
  char entity_7[1] = "";
  entity_7 = NULL;
  memset(entity_6, 'j', entity_0-1);
  entity_6[entity_0-1]='';
  memset(entity_7, 'V', 1-1);
  entity_7[1-1]='';
  entity_3 = (char*)malloc(27*sizeof(char));
  entity_3[27-1]='';
  entity_0 = 53;
  memcpy(entity_3, entity_6, entity_0*sizeof(char));
}