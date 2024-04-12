void fun()
{
  int entity_7 = 27;
  char entity_5[8] = "";
  char* entity_1;
  char* entity_6;
  entity_1 = (char*)malloc(entity_7*sizeof(char));
  entity_1[0]='0';
  memset(entity_5, 'v', 8-1);
  entity_5[8-1]='0';
  entity_6 = (char*)malloc(81*sizeof(char));
  entity_6[0]='0';
  entity_7 = 65;
  memcpy(entity_1, entity_5, 8*sizeof(char));
}