void fun()
{
  int entity_4 = 53;
  entity_4 = 24;
  char* entity_5;
  char entity_7[42] = "";
  char* entity_1;
  entity_5 = (char*)malloc(entity_4*sizeof(char));
  entity_5[0]='0';
  entity_1 = (char*)malloc(17*sizeof(char));
  entity_1[0]='0';
  memset(entity_7, 'P', 42-1);
  entity_7[42-1]='0';
  memcpy(entity_5, entity_7, 42*sizeof(char));
}