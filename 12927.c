void fun()
{
  int entity_9 = 23;
  int entity_4 = 91;
  char* entity_6;
  char entity_1[45] = "";
  char* entity_8;
  char* entity_7;
  entity_7 = (char*)malloc(entity_4*sizeof(char));
  entity_7[0]='0';
  memset(entity_1, 'L', 45-1);
  entity_1[45-1]='0';
  entity_8 = (char*)malloc(60*sizeof(char));
  entity_8[0]='0';
  entity_6 = (char*)malloc(32*sizeof(char));
  entity_6[0]='0';
  memcpy(entity_7, entity_1, 45*sizeof(char));
}