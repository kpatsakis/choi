void fun()
{
  int entity_7 = 63;
  char* entity_2;
  char* entity_1;
  char entity_5[64] = "";
  memset(entity_5, 'g', 64-1);
  entity_5[64-1]='0';
  entity_2 = (char*)malloc(16*sizeof(char));
  entity_2[0]='0';
  entity_1 = (char*)malloc(93*sizeof(char));
  entity_1[0]='0';
  memcpy(entity_1, entity_5, 64*sizeof(char));
}