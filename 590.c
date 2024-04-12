void fun()
{
  int entity_2 = 94;
  int entity_1 = 46;
  char* entity_8;
  char entity_9[entity_1] = "";
  entity_9 = NULL;
  char entity_6 = 'p';
  memset(entity_9, 'A', entity_1-1);
  entity_9[entity_1-1]='';
  entity_8 = (char*)malloc(63*sizeof(char));
  entity_8[63-1]='';
  memcpy(entity_8, entity_9, entity_1*sizeof(char));
}