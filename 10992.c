void fun()
{
  char entity_2[52] = "";
  char entity_9[64] = "";
  char* entity_5;
  memset(entity_9, 'H', 64-1);
  entity_9[64-1]='0';
  memset(entity_2, 'B', 52-1);
  entity_2[52-1]='0';
  entity_5 = (char*)malloc(94*sizeof(char));
  entity_5[0]='0';
  entity_2[35] = 'r';
}