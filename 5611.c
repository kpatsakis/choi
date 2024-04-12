void fun()
{
  int entity_4 = 28;
  int entity_0 = 13;
  char* entity_6;
  char entity_7[entity_0] = "";
  entity_7 = NULL;
  entity_6 = (char*)malloc(84*sizeof(char));
  entity_6[84-1]='';
  memset(entity_7, 'w', entity_0-1);
  entity_7[entity_0-1]='';
  strcpy(entity_6, entity_7);
}