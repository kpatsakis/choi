void fun()
{
  int entity_1 = 93;
  char entity_8[15] = "";
  entity_8 = NULL;
  char* entity_0;
  char entity_9[80] = "";
  entity_9 = NULL;
  char* entity_6;
  entity_6 = (char*)malloc(entity_1*sizeof(char));
  entity_6[entity_1-1]='';
  memset(entity_9, 'p', 80-1);
  entity_9[80-1]='';
  entity_0 = (char*)malloc(87*sizeof(char));
  entity_0[87-1]='';
  memset(entity_8, 'N', 15-1);
  entity_8[15-1]='';
  memcpy(entity_6, entity_8, 15*sizeof(char));
}