void fun()
{
  int entity_0 = 13;
  int entity_7 = 41;
  char entity_9[99] = "";
  entity_9 = NULL;
  char* entity_8;
  char entity_3 = 'Y';
  memset(entity_9, 'j', 99-1);
  entity_9[99-1]='';
  entity_8 = (char*)malloc(entity_7*sizeof(char));
  entity_8[entity_7-1]='';
  strcpy(entity_8, entity_9);
}