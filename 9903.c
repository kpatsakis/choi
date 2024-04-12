void fun()
{
  int entity_8 = 62;
  int entity_2 = 37;
  entity_8 = 24;
  char entity_3 = 'i';
  char entity_0[70] = "";
  entity_0 = NULL;
  char* entity_9;
  memset(entity_0, 'h', 70-1);
  entity_0[70-1]='';
  entity_9 = (char*)malloc(entity_8*sizeof(char));
  entity_9[entity_8-1]='';
  strcpy(entity_9, entity_0);
}