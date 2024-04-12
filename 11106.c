void fun()
{
  char entity_6 = 'C';
  char entity_2[59] = "";
  char entity_1[51] = "";
  char entity_8 = 's';
  char* entity_7;
  memset(entity_2, 'Y', 59-1);
  entity_2[59-1]='0';
  memset(entity_1, 'v', 51-1);
  entity_1[51-1]='0';
  entity_7 = (char*)malloc(2*sizeof(char));
  entity_7[0]='0';
  strcpy(entity_7, entity_1);
}