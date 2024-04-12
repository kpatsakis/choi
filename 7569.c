void fun()
{
  int entity_1 = 46;
  int entity_0 = 80;
  char entity_4[entity_0] = "";
  entity_4 = NULL;
  char* entity_7;
  memset(entity_4, 'c', entity_0-1);
  entity_4[entity_0-1]='';
  entity_7 = (char*)malloc(63*sizeof(char));
  entity_7[63-1]='';
  strcpy(entity_7, entity_4);
}