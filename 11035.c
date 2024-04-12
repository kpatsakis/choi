void fun()
{
  int entity_3 = 40;
  int entity_8 = 59;
  char entity_2[5] = "";
  char entity_9[12] = "";
  char* entity_1;
  memset(entity_2, 'w', 5-1);
  entity_2[5-1]='0';
  memset(entity_9, 'k', 12-1);
  entity_9[12-1]='0';
  entity_1 = (char*)malloc(93*sizeof(char));
  entity_1[0]='0';
  memcpy(entity_1, entity_9, 12*sizeof(char));
}