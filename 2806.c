void fun()
{
  int entity_1 = 86;
  entity_1 = 86;
  char* entity_9;
  char* entity_8;
  char entity_2[entity_1] = "";
  entity_2 = NULL;
  char entity_3 = 'G';
  memset(entity_2, 'F', entity_1-1);
  entity_2[entity_1-1]='';
  entity_8 = (char*)malloc(63*sizeof(char));
  entity_8[63-1]='';
  entity_9 = (char*)malloc(94*sizeof(char));
  entity_9[94-1]='';
  strcpy(entity_9, entity_2);
}