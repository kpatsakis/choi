void fun()
{
  int entity_0 = 19;
  entity_0 = 47;
  char entity_7[entity_0] = "";
  entity_7 = NULL;
  char entity_1[15] = "";
  entity_1 = NULL;
  char* entity_9;
  entity_9 = (char*)malloc(84*sizeof(char));
  entity_9[84-1]='';
  memset(entity_1, 'g', 15-1);
  entity_1[15-1]='';
  memset(entity_7, 'G', entity_0-1);
  entity_7[entity_0-1]='';
  memcpy(entity_9, entity_7, entity_0*sizeof(char));
}