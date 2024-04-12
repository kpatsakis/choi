void fun()
{
  char* entity_1;
  char entity_6[59] = "";
  memset(entity_6, 'W', 59-1);
  entity_6[59-1]='0';
  entity_1 = (char*)malloc(100*sizeof(char));
  entity_1[0]='0';
  memcpy(entity_1, entity_6, 59*sizeof(char));
}