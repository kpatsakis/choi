void fun()
{
  int entity_1 = 2;
  char* entity_9;
  char entity_7[5] = "";
  char* entity_8;
  entity_8 = (char*)malloc(65*sizeof(char));
  entity_8[0]='0';
  memset(entity_7, 'L', 5-1);
  entity_7[5-1]='0';
  entity_9 = (char*)malloc(entity_1*sizeof(char));
  entity_9[0]='0';
  memcpy(entity_9, entity_7, 5*sizeof(char));
}