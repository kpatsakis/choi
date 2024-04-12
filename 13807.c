void fun()
{
  int entity_9 = 51;
  char entity_5[35] = "";
  char* entity_8;
  char entity_1[entity_9] = "";
  memset(entity_1, 't', entity_9-1);
  entity_1[entity_9-1]='0';
  entity_8 = (char*)malloc(22*sizeof(char));
  entity_8[0]='0';
  memset(entity_5, 'e', 35-1);
  entity_5[35-1]='0';
  entity_9 = 71;
  strcpy(entity_8, entity_1);
}