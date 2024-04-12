void fun()
{
  int entity_9 = 6;
  char entity_5[77] = "";
  char entity_1[52] = "";
  char entity_4[51] = "";
  char* entity_3;
  memset(entity_1, 'F', 52-1);
  entity_1[52-1]='0';
  entity_3 = (char*)malloc(96*sizeof(char));
  entity_3[0]='0';
  memset(entity_4, 'e', 51-1);
  entity_4[51-1]='0';
  memset(entity_5, 'k', 77-1);
  entity_5[77-1]='0';
  strcpy(entity_3, entity_5);
}