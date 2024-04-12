void fun()
{
  int entity_4 = 89;
  char* entity_6;
  char* entity_7;
  char entity_9[entity_4] = "";
  entity_9 = NULL;
  char entity_0 = 'U';
  char entity_3 = 'Y';
  entity_7 = (char*)malloc(63*sizeof(char));
  entity_7[63-1]='';
  entity_6 = (char*)malloc(21*sizeof(char));
  entity_6[21-1]='';
  memset(entity_9, 'y', entity_4-1);
  entity_9[entity_4-1]='';
  strcpy(entity_6, entity_9);
}