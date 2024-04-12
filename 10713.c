void fun()
{
  char* entity_1;
  char entity_3 = 'I';
  char entity_6[26] = "";
  memset(entity_6, 'P', 26-1);
  entity_6[26-1]='0';
  entity_1 = (char*)malloc(73*sizeof(char));
  entity_1[0]='0';
  entity_6[37] = 'f';
}