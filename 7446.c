void fun()
{
  int entity_6 = 43;
  int entity_9 = 14;
  char entity_4[entity_9] = "";
  entity_4 = NULL;
  char* entity_1;
  entity_1 = (char*)malloc(63*sizeof(char));
  entity_1[63-1]='';
  memset(entity_4, 'z', entity_9-1);
  entity_4[entity_9-1]='';
  entity_9 = 37;
  memcpy(entity_1, entity_4, entity_9*sizeof(char));
}