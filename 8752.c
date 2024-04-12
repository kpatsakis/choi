void fun()
{
  int entity_6 = 40;
  char* entity_1;
  char entity_4[24] = "";
  entity_4 = NULL;
  char* entity_5;
  char entity_9[entity_6] = "";
  entity_9 = NULL;
  entity_1 = (char*)malloc(36*sizeof(char));
  entity_1[36-1]='';
  memset(entity_9, 'l', entity_6-1);
  entity_9[entity_6-1]='';
  memset(entity_4, 'J', 24-1);
  entity_4[24-1]='';
  entity_5 = (char*)malloc(58*sizeof(char));
  entity_5[58-1]='';
  entity_6 = 33;
  memcpy(entity_1, entity_9, entity_6*sizeof(char));
}