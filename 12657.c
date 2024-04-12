void fun()
{
  int entity_3 = 60;
  int entity_9 = 25;
  char entity_0[entity_9] = "";
  char* entity_4;
  char entity_7[95] = "";
  memset(entity_0, 'U', entity_9-1);
  entity_0[entity_9-1]='0';
  entity_4 = (char*)malloc(6*sizeof(char));
  entity_4[0]='0';
  memset(entity_7, 'N', 95-1);
  entity_7[95-1]='0';
  strcpy(entity_4, entity_0);
}