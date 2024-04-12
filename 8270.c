void fun()
{
  int entity_8 = 85;
  int entity_9 = 21;
  char* entity_0;
  char entity_6[78] = "";
  entity_6 = NULL;
  char* entity_1;
  entity_1 = (char*)malloc(entity_8*sizeof(char));
  entity_1[entity_8-1]='';
  entity_0 = (char*)malloc(84*sizeof(char));
  entity_0[84-1]='';
  memset(entity_6, 'T', 78-1);
  entity_6[78-1]='';
  strcpy(entity_1, entity_6);
}