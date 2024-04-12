void fun()
{
  int entity_1 = 57;
  entity_1 = 55;
  char entity_0[entity_1] = "";
  entity_0 = NULL;
  char entity_8 = 'c';
  char* entity_4;
  entity_4 = (char*)malloc(63*sizeof(char));
  entity_4[63-1]='';
  memset(entity_0, 'g', entity_1-1);
  entity_0[entity_1-1]='';
  memcpy(entity_4, entity_0, entity_1*sizeof(char));
}