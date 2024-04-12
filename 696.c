void fun()
{
  int entity_5 = 96;
  char entity_1[24] = "";
  entity_1 = NULL;
  char* entity_7;
  char entity_0[51] = "";
  entity_0 = NULL;
  memset(entity_1, 'P', 24-1);
  entity_1[24-1]='';
  memset(entity_0, 'X', 51-1);
  entity_0[51-1]='';
  entity_7 = (char*)malloc(entity_5*sizeof(char));
  entity_7[entity_5-1]='';
  memcpy(entity_7, entity_0, 51*sizeof(char));
}