void fun()
{
  int entity_3 = 1;
  char* entity_2;
  char entity_9[59] = "";
  entity_9 = NULL;
  char entity_1 = 'E';
  char* entity_4;
  memset(entity_9, 'I', 59-1);
  entity_9[59-1]='';
  entity_4 = (char*)malloc(22*sizeof(char));
  entity_4[22-1]='';
  entity_2 = (char*)malloc(entity_3*sizeof(char));
  entity_2[entity_3-1]='';
  strcpy(entity_2, entity_9);
}