void fun()
{
  int entity_6 = 13;
  char entity_0[entity_6] = "";
  entity_0 = NULL;
  char entity_4[71] = "";
  entity_4 = NULL;
  char* entity_7;
  char* entity_1;
  memset(entity_4, 'i', 71-1);
  entity_4[71-1]='';
  memset(entity_0, 'M', entity_6-1);
  entity_0[entity_6-1]='';
  entity_7 = (char*)malloc(64*sizeof(char));
  entity_7[64-1]='';
  entity_1 = (char*)malloc(53*sizeof(char));
  entity_1[53-1]='';
  entity_6 = 42;
  memcpy(entity_7, entity_0, entity_6*sizeof(char));
}