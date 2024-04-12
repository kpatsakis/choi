void fun()
{
  int entity_9 = 86;
  char* entity_8;
  char entity_2 = 'S';
  char entity_0[entity_9] = "";
  entity_0 = NULL;
  entity_8 = (char*)malloc(73*sizeof(char));
  entity_8[73-1]='';
  memset(entity_0, 'o', entity_9-1);
  entity_0[entity_9-1]='';
  strcpy(entity_8, entity_0);
}