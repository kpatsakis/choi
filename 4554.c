void fun()
{
  int entity_8 = 48;
  int entity_9 = 77;
  int entity_6 = 57;
  entity_6 = 93;
  char* entity_2;
  char entity_5[32] = "";
  entity_5 = NULL;
  char entity_1 = 'i';
  entity_2 = (char*)malloc(entity_6*sizeof(char));
  entity_2[entity_6-1]='';
  memset(entity_5, 'c', 32-1);
  entity_5[32-1]='';
  strcpy(entity_2, entity_5);
}