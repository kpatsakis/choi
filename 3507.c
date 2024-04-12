void fun()
{
  int entity_7 = 67;
  char* entity_8;
  char entity_0 = 'n';
  char entity_1[entity_7] = "";
  entity_1 = NULL;
  char entity_9 = 'Y';
  memset(entity_1, 'H', entity_7-1);
  entity_1[entity_7-1]='';
  entity_8 = (char*)malloc(9*sizeof(char));
  entity_8[9-1]='';
  strcpy(entity_8, entity_1);
}