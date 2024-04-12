void fun()
{
  int entity_7 = 93;
  entity_7 = 60;
  char* entity_3;
  char* entity_5;
  char entity_9[entity_7] = "";
  entity_5 = (char*)malloc(50*sizeof(char));
  entity_5[0]='0';
  memset(entity_9, 'T', entity_7-1);
  entity_9[entity_7-1]='0';
  entity_3 = (char*)malloc(15*sizeof(char));
  entity_3[0]='0';
  memcpy(entity_3, entity_9, entity_7*sizeof(char));
}