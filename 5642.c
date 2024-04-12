void fun()
{
  int entity_9 = 83;
  char* entity_8;
  char entity_5 = 'A';
  char entity_4[88] = "";
  entity_4 = NULL;
  entity_8 = (char*)malloc(entity_9*sizeof(char));
  entity_8[entity_9-1]='';
  memset(entity_4, 'G', 88-1);
  entity_4[88-1]='';
  strcpy(entity_8, entity_4);
}