void fun()
{
  int entity_1 = 63;
  char entity_4[54] = "";
  entity_4 = NULL;
  char entity_3 = 'w';
  char* entity_6;
  memset(entity_4, 'y', 54-1);
  entity_4[54-1]='';
  entity_6 = (char*)malloc(32*sizeof(char));
  entity_6[32-1]='';
  strcpy(entity_6, entity_4);
}