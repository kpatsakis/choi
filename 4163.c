void fun()
{
  int entity_0 = 58;
  char entity_1[64] = "";
  entity_1 = NULL;
  char* entity_4;
  char* entity_3;
  char entity_9 = 'a';
  memset(entity_1, 'h', 64-1);
  entity_1[64-1]='';
  entity_4 = (char*)malloc(49*sizeof(char));
  entity_4[49-1]='';
  entity_3 = (char*)malloc(entity_0*sizeof(char));
  entity_3[entity_0-1]='';
  strcpy(entity_3, entity_1);
}