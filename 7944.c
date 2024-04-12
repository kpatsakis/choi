void fun()
{
  int entity_9 = 59;
  int entity_7 = 18;
  char entity_0[entity_7] = "";
  entity_0 = NULL;
  char* entity_8;
  entity_8 = (char*)malloc(89*sizeof(char));
  entity_8[89-1]='';
  memset(entity_0, 'A', entity_7-1);
  entity_0[entity_7-1]='';
  strcpy(entity_8, entity_0);
}