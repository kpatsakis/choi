void fun()
{
  char entity_0[16] = "";
  char* entity_3;
  char* entity_6;
  entity_3 = (char*)malloc(86*sizeof(char));
  entity_3[0]='0';
  memset(entity_0, 'L', 16-1);
  entity_0[16-1]='0';
  entity_6 = (char*)malloc(21*sizeof(char));
  entity_6[0]='0';
  strcpy(entity_6, entity_0);
}