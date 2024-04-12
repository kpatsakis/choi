void fun()
{
  int entity_3 = 1;
  entity_3 = 65;
  char* entity_0;
  char* entity_7;
  char entity_9[17] = "";
  entity_9 = NULL;
  entity_0 = (char*)malloc(entity_3*sizeof(char));
  entity_0[entity_3-1]='';
  memset(entity_9, 'F', 17-1);
  entity_9[17-1]='';
  entity_7 = (char*)malloc(63*sizeof(char));
  entity_7[63-1]='';
  strcpy(entity_0, entity_9);
}