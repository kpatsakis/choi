void fun()
{
  int entity_0 = 20;
  int entity_9 = 46;
  int entity_8 = 63;
  char* entity_2;
  char entity_7[88] = "";
  entity_7 = NULL;
  entity_2 = (char*)malloc(entity_0*sizeof(char));
  entity_2[entity_0-1]='';
  memset(entity_7, 'x', 88-1);
  entity_7[88-1]='';
  strcpy(entity_2, entity_7);
}