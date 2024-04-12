void fun()
{
  int entity_2 = 51;
  char* entity_1;
  char entity_5[entity_2] = "";
  entity_5 = NULL;
  entity_1 = (char*)malloc(63*sizeof(char));
  entity_1[63-1]='';
  memset(entity_5, 'g', entity_2-1);
  entity_5[entity_2-1]='';
  memcpy(entity_1, entity_5, entity_2*sizeof(char));
}