void fun()
{
  int entity_9 = 8;
  int entity_6 = 20;
  char* entity_1;
  char entity_7[entity_9] = "";
  entity_7 = NULL;
  memset(entity_7, 'M', entity_9-1);
  entity_7[entity_9-1]='';
  entity_1 = (char*)malloc(11*sizeof(char));
  entity_1[11-1]='';
  entity_9 = 3;
  memcpy(entity_1, entity_7, entity_9*sizeof(char));
}