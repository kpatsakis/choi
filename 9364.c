void fun()
{
  int entity_1 = 20;
  char* entity_2;
  char entity_8 = 'y';
  char* entity_0;
  char entity_9[entity_1] = "";
  entity_9 = NULL;
  entity_2 = (char*)malloc(63*sizeof(char));
  entity_2[63-1]='';
  entity_0 = (char*)malloc(27*sizeof(char));
  entity_0[27-1]='';
  memset(entity_9, 'P', entity_1-1);
  entity_9[entity_1-1]='';
  entity_1 = 3;
  entity_9[84] = 'u';
}