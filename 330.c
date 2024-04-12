void fun()
{
  int entity_8 = 63;
  char* entity_9;
  char* entity_4;
  char entity_0 = 'B';
  char entity_1[38] = "";
  entity_1 = NULL;
  entity_9 = (char*)malloc(67*sizeof(char));
  entity_9[67-1]='';
  memset(entity_1, 'K', 38-1);
  entity_1[38-1]='';
  entity_4 = (char*)malloc(entity_8*sizeof(char));
  entity_4[entity_8-1]='';
  strcpy(entity_4, entity_1);
}