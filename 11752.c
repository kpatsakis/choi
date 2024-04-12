void fun()
{
  char* entity_1;
  char entity_0[47] = "";
  char entity_9[44] = "";
  memset(entity_9, 'P', 44-1);
  entity_9[44-1]='0';
  entity_1 = (char*)malloc(36*sizeof(char));
  entity_1[0]='0';
  memset(entity_0, 'f', 47-1);
  entity_0[47-1]='0';
  strcpy(entity_1, entity_0);
}