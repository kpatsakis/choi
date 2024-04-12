void fun()
{
  int entity_5 = 98;
  int entity_0 = 46;
  char entity_4[63] = "";
  entity_4 = NULL;
  char* entity_7;
  char entity_6[51] = "";
  entity_6 = NULL;
  memset(entity_4, 'E', 63-1);
  entity_4[63-1]='';
  memset(entity_6, 'Z', 51-1);
  entity_6[51-1]='';
  entity_7 = (char*)malloc(entity_0*sizeof(char));
  entity_7[entity_0-1]='';
  memcpy(entity_7, entity_6, 51*sizeof(char));
}