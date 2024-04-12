void fun()
{
  int entity_9 = 31;
  entity_9 = 7;
  char entity_3[91] = "";
  char* entity_2;
  char* entity_5;
  char entity_7[32] = "";
  entity_2 = (char*)malloc(60*sizeof(char));
  entity_2[0]='0';
  memset(entity_3, 'w', 91-1);
  entity_3[91-1]='0';
  memset(entity_7, 'n', 32-1);
  entity_7[32-1]='0';
  entity_5 = (char*)malloc(entity_9*sizeof(char));
  entity_5[0]='0';
  memcpy(entity_5, entity_3, 91*sizeof(char));
}