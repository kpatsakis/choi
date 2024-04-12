void fun()
{
  int entity_3 = 21;
  int entity_2 = 55;
  char* entity_9;
  char entity_0[44] = "";
  entity_0 = NULL;
  char* entity_6;
  char entity_5 = 'C';
  memset(entity_0, 'U', 44-1);
  entity_0[44-1]='';
  entity_9 = (char*)malloc(63*sizeof(char));
  entity_9[63-1]='';
  entity_6 = (char*)malloc(entity_2*sizeof(char));
  entity_6[entity_2-1]='';
  memcpy(entity_6, entity_0, 44*sizeof(char));
}