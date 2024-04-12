void fun()
{
  char* entity_9;
  char entity_1[20] = "";
  char entity_5[34] = "";
  memset(entity_5, 'g', 34-1);
  entity_5[34-1]='0';
  entity_9 = (char*)malloc(31*sizeof(char));
  entity_9[0]='0';
  memset(entity_1, 'X', 20-1);
  entity_1[20-1]='0';
  memcpy(entity_9, entity_5, 34*sizeof(char));
}