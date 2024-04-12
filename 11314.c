void fun()
{
  int entity_2 = 83;
  int entity_4 = 42;
  char entity_1[96] = "";
  char entity_7 = 'v';
  char* entity_6;
  memset(entity_1, 'c', 96-1);
  entity_1[96-1]='0';
  entity_6 = (char*)malloc(13*sizeof(char));
  entity_6[0]='0';
  memcpy(entity_6, entity_1, 96*sizeof(char));
}