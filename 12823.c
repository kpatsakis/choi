void fun()
{
  int entity_5 = 24;
  int entity_4 = 28;
  char entity_9 = 'L';
  char entity_8[entity_5] = "";
  char* entity_7;
  char* entity_1;
  memset(entity_8, 'C', entity_5-1);
  entity_8[entity_5-1]='0';
  entity_1 = (char*)malloc(63*sizeof(char));
  entity_1[0]='0';
  entity_7 = (char*)malloc(35*sizeof(char));
  entity_7[0]='0';
  strcpy(entity_7, entity_8);
}