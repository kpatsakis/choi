void fun()
{
  char entity_1[59] = "";
  char* entity_2;
  memset(entity_1, 'N', 59-1);
  entity_1[59-1]='0';
  entity_2 = (char*)malloc(77*sizeof(char));
  entity_2[0]='0';
  memcpy(entity_2, entity_1, 59*sizeof(char));
}