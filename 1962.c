void fun()
{
  int entity_8 = 42;
  char entity_4[78] = "";
  entity_4 = NULL;
  char* entity_9;
  entity_9 = (char*)malloc(entity_8*sizeof(char));
  entity_9[entity_8-1]='';
  memset(entity_4, 'o', 78-1);
  entity_4[78-1]='';
  strcpy(entity_9, entity_4);
}