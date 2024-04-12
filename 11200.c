void fun()
{
  char* entity_2;
  char entity_9[46] = "";
  char* entity_6;
  memset(entity_9, 'X', 46-1);
  entity_9[46-1]='0';
  entity_6 = (char*)malloc(77*sizeof(char));
  entity_6[0]='0';
  entity_2 = (char*)malloc(37*sizeof(char));
  entity_2[0]='0';
  memcpy(entity_6, entity_9, 46*sizeof(char));
}