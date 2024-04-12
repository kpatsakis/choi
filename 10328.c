void fun()
{
  char entity_5[13] = "";
  char entity_6[88] = "";
  char* entity_1;
  memset(entity_5, 'C', 13-1);
  entity_5[13-1]='0';
  memset(entity_6, 'f', 88-1);
  entity_6[88-1]='0';
  entity_1 = (char*)malloc(59*sizeof(char));
  entity_1[0]='0';
  entity_5[37] = 'M';
}