void fun()
{
  char* entity_5;
  char entity_6[30] = "";
  char entity_7[59] = "";
  memset(entity_7, 'j', 59-1);
  entity_7[59-1]='0';
  memset(entity_6, 'D', 30-1);
  entity_6[30-1]='0';
  entity_5 = (char*)malloc(76*sizeof(char));
  entity_5[0]='0';
  entity_6[18] = 'F';
}