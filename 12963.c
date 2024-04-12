void fun()
{
  int entity_6 = 49;
  char entity_9 = 'X';
  char entity_0[60] = "";
  char entity_7[95] = "";
  char* entity_8;
  memset(entity_0, 'I', 60-1);
  entity_0[60-1]='0';
  memset(entity_7, 'E', 95-1);
  entity_7[95-1]='0';
  entity_8 = (char*)malloc(entity_6*sizeof(char));
  entity_8[0]='0';
  strcpy(entity_8, entity_7);
}