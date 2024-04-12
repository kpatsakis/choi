void fun()
{
  char* entity_0;
  char* entity_6;
  char entity_4[52] = "";
  char entity_1 = 'G';
  entity_6 = (char*)malloc(59*sizeof(char));
  entity_6[0]='0';
  entity_0 = (char*)malloc(35*sizeof(char));
  entity_0[0]='0';
  memset(entity_4, 'p', 52-1);
  entity_4[52-1]='0';
  strcpy(entity_0, entity_4);
}