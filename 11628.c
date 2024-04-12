void fun()
{
  int entity_0 = 65;
  char entity_7 = 'R';
  char entity_6[4] = "";
  char* entity_5;
  entity_5 = (char*)malloc(33*sizeof(char));
  entity_5[0]='0';
  memset(entity_6, 'm', 4-1);
  entity_6[4-1]='0';
  strcpy(entity_5, entity_6);
}