void fun()
{
  int entity_1 = 39;
  char entity_8 = 'c';
  char entity_0[70] = "";
  entity_0 = NULL;
  char* entity_4;
  char entity_7[4] = "";
  entity_7 = NULL;
  memset(entity_0, 'N', 70-1);
  entity_0[70-1]='';
  memset(entity_7, 'U', 4-1);
  entity_7[4-1]='';
  entity_4 = (char*)malloc(entity_1*sizeof(char));
  entity_4[entity_1-1]='';
  entity_1 = 92;
  memcpy(entity_4, entity_0, 70*sizeof(char));
}