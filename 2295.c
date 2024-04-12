void fun()
{
  int entity_0 = 49;
  entity_0 = 49;
  char entity_6 = 'P';
  char* entity_8;
  char entity_4[64] = "";
  entity_4 = NULL;
  char entity_1[entity_0] = "";
  entity_1 = NULL;
  char entity_9 = 'N';
  memset(entity_1, 'A', entity_0-1);
  entity_1[entity_0-1]='';
  memset(entity_4, 't', 64-1);
  entity_4[64-1]='';
  entity_8 = (char*)malloc(35*sizeof(char));
  entity_8[35-1]='';
  strcpy(entity_8, entity_1);
}