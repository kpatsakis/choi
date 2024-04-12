void fun()
{
  char entity_9 = 'f';
  char entity_8[10] = "";
  char entity_0 = 'o';
  char* entity_2;
  char* entity_4;
  entity_4 = (char*)malloc(10*sizeof(char));
  entity_4[0]='0';
  entity_2 = (char*)malloc(35*sizeof(char));
  entity_2[0]='0';
  memset(entity_8, 'R', 10-1);
  entity_8[10-1]='0';
  strcpy(entity_4, entity_8);
}