void fun()
{
  char* entity_2;
  char* entity_1;
  char entity_6[46] = "";
  memset(entity_6, 'q', 46-1);
  entity_6[46-1]='0';
  entity_1 = (char*)malloc(93*sizeof(char));
  entity_1[0]='0';
  entity_2 = (char*)malloc(66*sizeof(char));
  entity_2[0]='0';
  memcpy(entity_1, entity_6, 46*sizeof(char));
}