void fun()
{
  int entity_9 = 71;
  char entity_4 = 'C';
  char entity_2[entity_9] = "";
  entity_2 = NULL;
  char* entity_6;
  char entity_8 = 'Y';
  entity_6 = (char*)malloc(81*sizeof(char));
  entity_6[81-1]='';
  memset(entity_2, 'k', entity_9-1);
  entity_2[entity_9-1]='';
  entity_9 = 42;
  strcpy(entity_6, entity_2);
}