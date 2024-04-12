void fun()
{
  char entity_6[17] = "";
  char* entity_1;
  entity_1 = (char*)malloc(84*sizeof(char));
  entity_1[0]='0';
  memset(entity_6, 'A', 17-1);
  entity_6[17-1]='0';
  memcpy(entity_1, entity_6, 17*sizeof(char));
}