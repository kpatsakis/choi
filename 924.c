void fun()
{
  int entity_9 = 20;
  char entity_1 = 'f';
  char* entity_2;
  char entity_6[64] = "";
  entity_6 = NULL;
  char entity_8[76] = "";
  entity_8 = NULL;
  entity_2 = (char*)malloc(entity_9*sizeof(char));
  entity_2[entity_9-1]='';
  memset(entity_8, 'k', 76-1);
  entity_8[76-1]='';
  memset(entity_6, 'E', 64-1);
  entity_6[64-1]='';
  memcpy(entity_2, entity_6, 64*sizeof(char));
}