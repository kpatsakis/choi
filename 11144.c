void fun()
{
  char entity_5[91] = "";
  char* entity_1;
  memset(entity_5, 'd', 91-1);
  entity_5[91-1]='0';
  entity_1 = (char*)malloc(25*sizeof(char));
  entity_1[0]='0';
  strcpy(entity_1, entity_5);
}