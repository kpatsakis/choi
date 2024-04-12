void fun()
{
  int entity_9 = 88;
  char entity_5[entity_9] = "";
  entity_5 = NULL;
  char entity_3 = 'G';
  char* entity_1;
  memset(entity_5, 'Q', entity_9-1);
  entity_5[entity_9-1]='';
  entity_1 = (char*)malloc(68*sizeof(char));
  entity_1[68-1]='';
  entity_9 = 21;
  strcpy(entity_1, entity_5);
}