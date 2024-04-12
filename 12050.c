void fun()
{
  int entity_7 = 93;
  char entity_0 = 'Z';
  char entity_2[46] = "";
  char* entity_3;
  char* entity_9;
  char entity_1[99] = "";
  entity_3 = (char*)malloc(entity_7*sizeof(char));
  entity_3[0]='0';
  entity_9 = (char*)malloc(2*sizeof(char));
  entity_9[0]='0';
  memset(entity_1, 'Q', 99-1);
  entity_1[99-1]='0';
  memset(entity_2, 'G', 46-1);
  entity_2[46-1]='0';
  memcpy(entity_3, entity_2, 46*sizeof(char));
}