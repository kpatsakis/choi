void fun()
{
  int entity_4 = 87;
  entity_4 = 34;
  char* entity_6;
  char entity_9[81] = "";
  entity_9 = NULL;
  char entity_8 = 'x';
  entity_6 = (char*)malloc(entity_4*sizeof(char));
  entity_6[entity_4-1]='';
  memset(entity_9, 'e', 81-1);
  entity_9[81-1]='';
  memcpy(entity_6, entity_9, 81*sizeof(char));
}