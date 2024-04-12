void fun()
{
  int entity_9 = 96;
  entity_9 = 69;
  char* entity_0;
  char* entity_3;
  char entity_1 = 'm';
  char entity_5[entity_9] = "";
  memset(entity_5, 'v', entity_9-1);
  entity_5[entity_9-1]='0';
  entity_0 = (char*)malloc(92*sizeof(char));
  entity_0[0]='0';
  entity_3 = (char*)malloc(1*sizeof(char));
  entity_3[0]='0';
  memcpy(entity_0, entity_5, entity_9*sizeof(char));
}