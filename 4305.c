void fun()
{
  int entity_9 = 0;
  int entity_8 = 80;
  char entity_0[1] = "";
  entity_0 = NULL;
  char* entity_2;
  memset(entity_0, 'b', 1-1);
  entity_0[1-1]='';
  entity_2 = (char*)malloc(entity_8*sizeof(char));
  entity_2[entity_8-1]='';
  strcpy(entity_2, entity_0);
}