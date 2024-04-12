void fun()
{
  int entity_6 = 81;
  char* entity_9;
  char* entity_1;
  char entity_5[entity_6] = "";
  memset(entity_5, 'm', entity_6-1);
  entity_5[entity_6-1]='0';
  entity_1 = (char*)malloc(70*sizeof(char));
  entity_1[0]='0';
  entity_9 = (char*)malloc(90*sizeof(char));
  entity_9[0]='0';
  memcpy(entity_1, entity_5, entity_6*sizeof(char));
}