void fun()
{
  int entity_9 = 74;
  char* entity_5;
  char entity_6 = 'l';
  char entity_1[entity_9] = "";
  entity_1 = NULL;
  memset(entity_1, 'M', entity_9-1);
  entity_1[entity_9-1]='';
  entity_5 = (char*)malloc(33*sizeof(char));
  entity_5[33-1]='';
  memcpy(entity_5, entity_1, entity_9*sizeof(char));
}