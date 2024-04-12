void fun()
{
  int entity_7 = 16;
  char* entity_9;
  char* entity_6;
  char entity_5[84] = "";
  char entity_1 = 'd';
  char* entity_8;
  memset(entity_5, 'S', 84-1);
  entity_5[84-1]='0';
  entity_9 = (char*)malloc(entity_7*sizeof(char));
  entity_9[0]='0';
  entity_6 = (char*)malloc(75*sizeof(char));
  entity_6[0]='0';
  entity_8 = (char*)malloc(93*sizeof(char));
  entity_8[0]='0';
  memcpy(entity_9, entity_5, 84*sizeof(char));
}