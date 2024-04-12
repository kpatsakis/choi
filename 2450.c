void fun()
{
  int entity_6 = 38;
  char entity_5[entity_6] = "";
  entity_5 = NULL;
  char entity_9 = 'B';
  char entity_1 = 'H';
  char* entity_2;
  memset(entity_5, 'v', entity_6-1);
  entity_5[entity_6-1]='';
  entity_2 = (char*)malloc(23*sizeof(char));
  entity_2[23-1]='';
  memcpy(entity_2, entity_5, entity_6*sizeof(char));
}