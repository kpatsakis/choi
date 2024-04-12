void fun()
{
  char entity_1[12] = "";
  char* entity_2;
  memset(entity_1, 'a', 12-1);
  entity_1[12-1]='0';
  entity_2 = (char*)malloc(93*sizeof(char));
  entity_2[0]='0';
  memcpy(entity_2, entity_1, 12*sizeof(char));
}