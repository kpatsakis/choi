void fun()
{
  int entity_9 = 52;
  char* entity_0;
  char entity_3 = 'g';
  char entity_1[88] = "";
  char* entity_2;
  char* entity_5;
  entity_2 = (char*)malloc(62*sizeof(char));
  entity_2[0]='0';
  memset(entity_1, 'W', 88-1);
  entity_1[88-1]='0';
  entity_5 = (char*)malloc(entity_9*sizeof(char));
  entity_5[0]='0';
  entity_0 = (char*)malloc(97*sizeof(char));
  entity_0[0]='0';
  memcpy(entity_5, entity_1, 88*sizeof(char));
}