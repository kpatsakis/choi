void fun()
{
  int entity_4 = 28;
  int entity_7 = 1;
  char* entity_6;
  char entity_0[61] = "";
  char* entity_5;
  memset(entity_0, 'C', 61-1);
  entity_0[61-1]='0';
  entity_6 = (char*)malloc(54*sizeof(char));
  entity_6[0]='0';
  entity_5 = (char*)malloc(entity_4*sizeof(char));
  entity_5[0]='0';
  strcpy(entity_5, entity_0);
}