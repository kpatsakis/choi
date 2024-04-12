void fun()
{
  char entity_2 = 'D';
  char entity_7[50] = "";
  char* entity_4;
  entity_4 = (char*)malloc(66*sizeof(char));
  entity_4[0]='0';
  memset(entity_7, 'z', 50-1);
  entity_7[50-1]='0';
  strcpy(entity_4, entity_7);
}