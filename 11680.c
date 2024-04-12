void fun()
{
  char* entity_1;
  char entity_6[64] = "";
  memset(entity_6, 'M', 64-1);
  entity_6[64-1]='0';
  entity_1 = (char*)malloc(69*sizeof(char));
  entity_1[0]='0';
  strcpy(entity_1, entity_6);
}