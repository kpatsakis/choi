void fun()
{
  int entity_3 = 73;
  int entity_8 = 57;
  char entity_5[37] = "";
  char* entity_9;
  char entity_7[36] = "";
  memset(entity_7, 'w', 36-1);
  entity_7[36-1]='0';
  memset(entity_5, 'C', 37-1);
  entity_5[37-1]='0';
  entity_9 = (char*)malloc(entity_3*sizeof(char));
  entity_9[0]='0';
  strcpy(entity_9, entity_7);
}