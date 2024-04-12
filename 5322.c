void fun()
{
  int entity_1 = 81;
  char* entity_4;
  char entity_9[66] = "";
  entity_9 = NULL;
  char entity_5[entity_1] = "";
  entity_5 = NULL;
  memset(entity_9, 'y', 66-1);
  entity_9[66-1]='';
  entity_4 = (char*)malloc(66*sizeof(char));
  entity_4[66-1]='';
  memset(entity_5, 'B', entity_1-1);
  entity_5[entity_1-1]='';
  entity_1 = 97;
  memcpy(entity_4, entity_5, entity_1*sizeof(char));
}