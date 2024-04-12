void fun()
{
  char* entity_0;
  char entity_7[3] = "";
  char* entity_6;
  entity_6 = (char*)malloc(33*sizeof(char));
  entity_6[0]='0';
  memset(entity_7, 'm', 3-1);
  entity_7[3-1]='0';
  entity_0 = (char*)malloc(70*sizeof(char));
  entity_0[0]='0';
  strcpy(entity_0, entity_7);
}