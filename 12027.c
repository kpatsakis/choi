void fun()
{
  int entity_2 = 52;
  char entity_3[entity_2] = "";
  char entity_9 = 'L';
  char* entity_7;
  char* entity_5;
  char entity_0[70] = "";
  entity_7 = (char*)malloc(8*sizeof(char));
  entity_7[0]='0';
  memset(entity_0, 'E', 70-1);
  entity_0[70-1]='0';
  memset(entity_3, 'O', entity_2-1);
  entity_3[entity_2-1]='0';
  entity_5 = (char*)malloc(26*sizeof(char));
  entity_5[0]='0';
  memcpy(entity_5, entity_3, entity_2*sizeof(char));
}