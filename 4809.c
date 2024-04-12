void fun()
{
  int entity_7 = 82;
  int entity_5 = 70;
  char entity_6[63] = "";
  entity_6 = NULL;
  char entity_9[86] = "";
  entity_9 = NULL;
  char entity_2 = 'y';
  char* entity_0;
  memset(entity_6, 'Z', 63-1);
  entity_6[63-1]='';
  entity_0 = (char*)malloc(entity_7*sizeof(char));
  entity_0[entity_7-1]='';
  memset(entity_9, 'f', 86-1);
  entity_9[86-1]='';
  strcpy(entity_0, entity_9);
}