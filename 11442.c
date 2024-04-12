void fun()
{
  int entity_1 = 58;
  char* entity_5;
  char entity_7[81] = "";
  char* entity_3;
  entity_5 = (char*)malloc(85*sizeof(char));
  entity_5[0]='0';
  entity_3 = (char*)malloc(93*sizeof(char));
  entity_3[0]='0';
  memset(entity_7, 't', 81-1);
  entity_7[81-1]='0';
  memcpy(entity_5, entity_7, 81*sizeof(char));
}