void fun()
{
  int entity_0 = 77;
  char* entity_6;
  char entity_4 = 'e';
  char entity_7[entity_0] = "";
  char entity_5[31] = "";
  char* entity_9;
  entity_6 = (char*)malloc(63*sizeof(char));
  entity_6[0]='0';
  memset(entity_7, 'Q', entity_0-1);
  entity_7[entity_0-1]='0';
  memset(entity_5, 's', 31-1);
  entity_5[31-1]='0';
  entity_9 = (char*)malloc(15*sizeof(char));
  entity_9[0]='0';
  strcpy(entity_9, entity_7);
}