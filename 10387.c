void fun()
{
  char* entity_8;
  char entity_5[11] = "";
  char entity_6 = 'g';
  char entity_1[89] = "";
  entity_8 = (char*)malloc(20*sizeof(char));
  entity_8[0]='0';
  memset(entity_1, 'f', 89-1);
  entity_1[89-1]='0';
  memset(entity_5, 'Q', 11-1);
  entity_5[11-1]='0';
  entity_1[59] = 'm';
}