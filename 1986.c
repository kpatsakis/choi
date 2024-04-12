void fun()
{
  int entity_9 = 67;
  entity_9 = 91;
  char entity_8 = 'v';
  char entity_6[94] = "";
  entity_6 = NULL;
  char* entity_5;
  char entity_4[37] = "";
  entity_4 = NULL;
  memset(entity_4, 'S', 37-1);
  entity_4[37-1]='';
  entity_5 = (char*)malloc(entity_9*sizeof(char));
  entity_5[entity_9-1]='';
  memset(entity_6, 'I', 94-1);
  entity_6[94-1]='';
  strcpy(entity_5, entity_6);
}