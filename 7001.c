void fun()
{
  int entity_6 = 40;
  entity_6 = 15;
  char entity_9[entity_6] = "";
  entity_9 = NULL;
  char entity_1[9] = "";
  entity_1 = NULL;
  char* entity_5;
  entity_5 = (char*)malloc(41*sizeof(char));
  entity_5[41-1]='';
  memset(entity_9, 'B', entity_6-1);
  entity_9[entity_6-1]='';
  memset(entity_1, 's', 9-1);
  entity_1[9-1]='';
  memcpy(entity_5, entity_9, entity_6*sizeof(char));
}