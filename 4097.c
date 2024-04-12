void fun()
{
  int entity_9 = 48;
  char* entity_2;
  char* entity_7;
  char* entity_8;
  char entity_0[entity_9] = "";
  entity_0 = NULL;
  entity_8 = (char*)malloc(63*sizeof(char));
  entity_8[63-1]='';
  memset(entity_0, 'j', entity_9-1);
  entity_0[entity_9-1]='';
  entity_7 = (char*)malloc(3*sizeof(char));
  entity_7[3-1]='';
  entity_2 = (char*)malloc(72*sizeof(char));
  entity_2[72-1]='';
  strcpy(entity_7, entity_0);
}