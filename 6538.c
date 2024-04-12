void fun()
{
  int entity_5 = 53;
  int entity_8 = 51;
  int entity_6 = 67;
  entity_6 = 65;
  char entity_3 = 'E';
  char* entity_1;
  char entity_9[2] = "";
  entity_9 = NULL;
  entity_1 = (char*)malloc(entity_6*sizeof(char));
  entity_1[entity_6-1]='';
  memset(entity_9, 'l', 2-1);
  entity_9[2-1]='';
  memcpy(entity_1, entity_9, 2*sizeof(char));
}