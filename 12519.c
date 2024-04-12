void fun()
{
  int entity_3 = 37;
  char entity_1[12] = "";
  char* entity_7;
  char* entity_9;
  entity_9 = (char*)malloc(61*sizeof(char));
  entity_9[0]='0';
  memset(entity_1, 'W', 12-1);
  entity_1[12-1]='0';
  entity_7 = (char*)malloc(entity_3*sizeof(char));
  entity_7[0]='0';
  memcpy(entity_7, entity_1, 12*sizeof(char));
}