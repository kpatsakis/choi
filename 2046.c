void fun()
{
  int entity_6 = 27;
  int entity_1 = 72;
  entity_1 = 81;
  char* entity_9;
  char entity_7[entity_1] = "";
  entity_7 = NULL;
  memset(entity_7, 'b', entity_1-1);
  entity_7[entity_1-1]='';
  entity_9 = (char*)malloc(74*sizeof(char));
  entity_9[74-1]='';
  memcpy(entity_9, entity_7, entity_1*sizeof(char));
}