void fun()
{
  int entity_9 = 26;
  char entity_0[8] = "";
  char* entity_5;
  char entity_1 = 'T';
  char* entity_8;
  entity_5 = (char*)malloc(38*sizeof(char));
  entity_5[0]='0';
  memset(entity_0, 'O', 8-1);
  entity_0[8-1]='0';
  entity_8 = (char*)malloc(entity_9*sizeof(char));
  entity_8[0]='0';
  strcpy(entity_8, entity_0);
}