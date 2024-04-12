void fun()
{
  int entity_5 = 51;
  int entity_1 = 66;
  char* entity_4;
  char entity_6[54] = "";
  entity_6 = NULL;
  char entity_0[entity_1] = "";
  entity_0 = NULL;
  char entity_9 = 'g';
  memset(entity_0, 'k', entity_1-1);
  entity_0[entity_1-1]='';
  entity_4 = (char*)malloc(12*sizeof(char));
  entity_4[12-1]='';
  memset(entity_6, 'Z', 54-1);
  entity_6[54-1]='';
  memcpy(entity_4, entity_0, entity_1*sizeof(char));
}