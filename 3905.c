void fun()
{
  int entity_0 = 70;
  entity_0 = 70;
  char entity_9[entity_0] = "";
  entity_9 = NULL;
  char* entity_3;
  char* entity_7;
  entity_3 = (char*)malloc(80*sizeof(char));
  entity_3[80-1]='';
  entity_7 = (char*)malloc(63*sizeof(char));
  entity_7[63-1]='';
  memset(entity_9, 'H', entity_0-1);
  entity_9[entity_0-1]='';
  strcpy(entity_7, entity_9);
}