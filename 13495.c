void fun()
{
  int entity_9 = 34;
  int entity_2 = 44;
  char* entity_6;
  char entity_8[39] = "";
  char* entity_5;
  char* entity_4;
  entity_4 = (char*)malloc(45*sizeof(char));
  entity_4[0]='0';
  entity_6 = (char*)malloc(77*sizeof(char));
  entity_6[0]='0';
  entity_5 = (char*)malloc(entity_9*sizeof(char));
  entity_5[0]='0';
  memset(entity_8, 'r', 39-1);
  entity_8[39-1]='0';
  entity_9 = 39;
  memcpy(entity_5, entity_8, 39*sizeof(char));
}