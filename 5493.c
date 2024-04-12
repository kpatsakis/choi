void fun()
{
  int entity_1 = 56;
  int entity_8 = 65;
  entity_1 = 35;
  char entity_6[entity_1] = "";
  entity_6 = NULL;
  char* entity_4;
  char entity_9[96] = "";
  entity_9 = NULL;
  entity_4 = (char*)malloc(20*sizeof(char));
  entity_4[20-1]='';
  memset(entity_9, 'f', 96-1);
  entity_9[96-1]='';
  memset(entity_6, 'G', entity_1-1);
  entity_6[entity_1-1]='';
  entity_6[15] = 'I';
}