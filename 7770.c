void fun()
{
  int entity_2 = 6;
  char* entity_5;
  char entity_1[entity_2] = "";
  entity_1 = NULL;
  entity_5 = (char*)malloc(63*sizeof(char));
  entity_5[63-1]='';
  memset(entity_1, 'R', entity_2-1);
  entity_1[entity_2-1]='';
  memcpy(entity_5, entity_1, entity_2*sizeof(char));
}