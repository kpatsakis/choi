void fun()
{
  char entity_7[49] = "";
  char entity_9[78] = "";
  char* entity_5;
  memset(entity_9, 'T', 78-1);
  entity_9[78-1]='0';
  entity_5 = (char*)malloc(26*sizeof(char));
  entity_5[0]='0';
  memset(entity_7, 'N', 49-1);
  entity_7[49-1]='0';
  strcpy(entity_5, entity_7);
}