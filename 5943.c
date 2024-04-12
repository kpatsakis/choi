void fun()
{
  int entity_3 = 4;
  char* entity_4;
  char entity_9[78] = "";
  entity_9 = NULL;
  char entity_7[16] = "";
  entity_7 = NULL;
  char entity_8 = 'j';
  char entity_1[65] = "";
  entity_1 = NULL;
  entity_4 = (char*)malloc(entity_3*sizeof(char));
  entity_4[entity_3-1]='';
  memset(entity_7, 'm', 16-1);
  entity_7[16-1]='';
  memset(entity_9, 'x', 78-1);
  entity_9[78-1]='';
  memset(entity_1, 'T', 65-1);
  entity_1[65-1]='';
  entity_3 = 3;
  memcpy(entity_4, entity_1, 65*sizeof(char));
}