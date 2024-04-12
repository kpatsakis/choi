void fun()
{
  int entity_2 = 32;
  char entity_4[entity_2] = "";
  entity_4 = NULL;
  char* entity_0;
  char* entity_1;
  entity_0 = (char*)malloc(4*sizeof(char));
  entity_0[4-1]='';
  memset(entity_4, 'M', entity_2-1);
  entity_4[entity_2-1]='';
  entity_1 = (char*)malloc(63*sizeof(char));
  entity_1[63-1]='';
  memcpy(entity_1, entity_4, entity_2*sizeof(char));
}