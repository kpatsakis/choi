void fun()
{
  int entity_3 = 19;
  int entity_9 = 56;
  char entity_8[entity_3] = "";
  entity_8 = NULL;
  char* entity_5;
  memset(entity_8, 'e', entity_3-1);
  entity_8[entity_3-1]='';
  entity_5 = (char*)malloc(59*sizeof(char));
  entity_5[59-1]='';
  strcpy(entity_5, entity_8);
}