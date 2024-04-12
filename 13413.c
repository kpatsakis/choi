void fun()
{
  int entity_1 = 74;
  int entity_9 = 96;
  entity_9 = 69;
  char* entity_5;
  char entity_6 = 'L';
  char entity_3[33] = "";
  char entity_2 = 'V';
  memset(entity_3, 'y', 33-1);
  entity_3[33-1]='0';
  entity_5 = (char*)malloc(entity_9*sizeof(char));
  entity_5[0]='0';
  memcpy(entity_5, entity_3, 33*sizeof(char));
}