void fun()
{
  int entity_7 = 37;
  char entity_1[77] = "";
  char* entity_5;
  char* entity_9;
  char entity_0[4] = "";
  entity_9 = (char*)malloc(entity_7*sizeof(char));
  entity_9[0]='0';
  memset(entity_1, 'E', 77-1);
  entity_1[77-1]='0';
  memset(entity_0, 'O', 4-1);
  entity_0[4-1]='0';
  entity_5 = (char*)malloc(15*sizeof(char));
  entity_5[0]='0';
  memcpy(entity_9, entity_0, 4*sizeof(char));
}