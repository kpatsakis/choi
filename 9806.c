void fun()
{
  int entity_8 = 97;
  char entity_5[65] = "";
  entity_5 = NULL;
  char* entity_3;
  char* entity_9;
  entity_9 = (char*)malloc(entity_8*sizeof(char));
  entity_9[entity_8-1]='';
  entity_3 = (char*)malloc(84*sizeof(char));
  entity_3[84-1]='';
  memset(entity_5, 'm', 65-1);
  entity_5[65-1]='';
  memcpy(entity_9, entity_5, 65*sizeof(char));
}