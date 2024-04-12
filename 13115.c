void fun()
{
  int entity_9 = 37;
  char* entity_1;
  char entity_6 = 'b';
  char entity_2[33] = "";
  char* entity_3;
  entity_3 = (char*)malloc(entity_9*sizeof(char));
  entity_3[0]='0';
  memset(entity_2, 'h', 33-1);
  entity_2[33-1]='0';
  entity_1 = (char*)malloc(65*sizeof(char));
  entity_1[0]='0';
  entity_9 = 27;
  memcpy(entity_3, entity_2, 33*sizeof(char));
}