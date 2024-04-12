void fun()
{
  int entity_0 = 53;
  int entity_8 = 56;
  int entity_1 = 11;
  char entity_4[76] = "";
  entity_4 = NULL;
  char* entity_3;
  char entity_7[entity_0] = "";
  entity_7 = NULL;
  entity_3 = (char*)malloc(12*sizeof(char));
  entity_3[12-1]='';
  memset(entity_4, 'W', 76-1);
  entity_4[76-1]='';
  memset(entity_7, 'n', entity_0-1);
  entity_7[entity_0-1]='';
  memcpy(entity_3, entity_7, entity_0*sizeof(char));
}