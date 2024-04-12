void fun()
{
  int entity_8 = 12;
  entity_8 = 12;
  char entity_7[entity_8] = "";
  entity_7 = NULL;
  char entity_9 = 'N';
  char* entity_1;
  memset(entity_7, 'A', entity_8-1);
  entity_7[entity_8-1]='';
  entity_1 = (char*)malloc(63*sizeof(char));
  entity_1[63-1]='';
  strcpy(entity_1, entity_7);
}