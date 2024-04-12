void fun()
{
  int entity_7 = 97;
  int entity_8 = 51;
  char entity_5 = 'J';
  char entity_1[77] = "";
  char* entity_6;
  entity_6 = (char*)malloc(entity_7*sizeof(char));
  entity_6[0]='0';
  memset(entity_1, 'V', 77-1);
  entity_1[77-1]='0';
  memcpy(entity_6, entity_1, 77*sizeof(char));
}