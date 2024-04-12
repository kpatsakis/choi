void fun()
{
  char* entity_3;
  char* entity_7;
  char entity_0[65] = "";
  entity_7 = (char*)malloc(35*sizeof(char));
  entity_7[0]='0';
  entity_3 = (char*)malloc(76*sizeof(char));
  entity_3[0]='0';
  memset(entity_0, 'N', 65-1);
  entity_0[65-1]='0';
  strcpy(entity_7, entity_0);
}