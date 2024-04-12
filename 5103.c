void fun()
{
  int entity_2 = 79;
  entity_2 = 54;
  char* entity_0;
  char entity_9[83] = "";
  entity_9 = NULL;
  char entity_8[42] = "";
  entity_8 = NULL;
  memset(entity_9, 'q', 83-1);
  entity_9[83-1]='';
  entity_0 = (char*)malloc(entity_2*sizeof(char));
  entity_0[entity_2-1]='';
  memset(entity_8, 'z', 42-1);
  entity_8[42-1]='';
  strcpy(entity_0, entity_8);
}