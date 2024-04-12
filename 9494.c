void fun()
{
  int entity_5 = 3;
  int entity_2 = 87;
  char entity_9 = 'E';
  char* entity_1;
  char entity_6[10] = "";
  entity_6 = NULL;
  memset(entity_6, 'I', 10-1);
  entity_6[10-1]='';
  entity_1 = (char*)malloc(entity_5*sizeof(char));
  entity_1[entity_5-1]='';
  memcpy(entity_1, entity_6, 10*sizeof(char));
}