void fun()
{
  char* entity_6;
  char* entity_7;
  char entity_2 = 'R';
  char entity_8[51] = "";
  entity_7 = (char*)malloc(6*sizeof(char));
  entity_7[0]='0';
  entity_6 = (char*)malloc(61*sizeof(char));
  entity_6[0]='0';
  memset(entity_8, 'G', 51-1);
  entity_8[51-1]='0';
  strcpy(entity_6, entity_8);
}