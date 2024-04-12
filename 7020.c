void fun()
{
  int entity_5 = 38;
  char entity_7[54] = "";
  entity_7 = NULL;
  char entity_0 = 'Q';
  char* entity_2;
  memset(entity_7, 'T', 54-1);
  entity_7[54-1]='';
  entity_2 = (char*)malloc(84*sizeof(char));
  entity_2[84-1]='';
  memcpy(entity_2, entity_7, 54*sizeof(char));
}