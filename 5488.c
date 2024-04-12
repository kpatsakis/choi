void fun()
{
  int entity_9 = 17;
  int entity_4 = 64;
  char entity_0[60] = "";
  entity_0 = NULL;
  char* entity_8;
  char entity_6[entity_9] = "";
  entity_6 = NULL;
  char* entity_2;
  entity_8 = (char*)malloc(44*sizeof(char));
  entity_8[44-1]='';
  memset(entity_0, 'i', 60-1);
  entity_0[60-1]='';
  entity_2 = (char*)malloc(96*sizeof(char));
  entity_2[96-1]='';
  memset(entity_6, 'X', entity_9-1);
  entity_6[entity_9-1]='';
  memcpy(entity_8, entity_6, entity_9*sizeof(char));
}