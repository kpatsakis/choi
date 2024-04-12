void fun()
{
  int entity_3 = 94;
  char entity_6[85] = "";
  char entity_9[23] = "";
  char* entity_1;
  memset(entity_9, 'f', 23-1);
  entity_9[23-1]='0';
  memset(entity_6, 'T', 85-1);
  entity_6[85-1]='0';
  entity_1 = (char*)malloc(entity_3*sizeof(char));
  entity_1[0]='0';
  strcpy(entity_1, entity_6);
}