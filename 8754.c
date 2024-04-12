void fun()
{
  int entity_6 = 98;
  int entity_4 = 82;
  char* entity_9;
  char* entity_2;
  char entity_0[91] = "";
  entity_0 = NULL;
  memset(entity_0, 'W', 91-1);
  entity_0[91-1]='';
  entity_2 = (char*)malloc(63*sizeof(char));
  entity_2[63-1]='';
  entity_9 = (char*)malloc(entity_4*sizeof(char));
  entity_9[entity_4-1]='';
  strcpy(entity_9, entity_0);
}