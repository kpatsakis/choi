void fun()
{
  char* entity_4;
  char entity_0[22] = "";
  char* entity_5;
  entity_4 = (char*)malloc(35*sizeof(char));
  entity_4[0]='0';
  memset(entity_0, 'D', 22-1);
  entity_0[22-1]='0';
  entity_5 = (char*)malloc(96*sizeof(char));
  entity_5[0]='0';
  strcpy(entity_5, entity_0);
}