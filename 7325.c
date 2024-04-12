void fun()
{
  int entity_1 = 52;
  entity_1 = 52;
  char entity_0[entity_1] = "";
  entity_0 = NULL;
  char* entity_2;
  memset(entity_0, 'Z', entity_1-1);
  entity_0[entity_1-1]='';
  entity_2 = (char*)malloc(63*sizeof(char));
  entity_2[63-1]='';
  strcpy(entity_2, entity_0);
}