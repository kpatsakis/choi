void fun()
{
  char entity_4[57] = "";
  char* entity_2;
  char entity_9[76] = "";
  entity_2 = (char*)malloc(72*sizeof(char));
  entity_2[0]='0';
  memset(entity_9, 'I', 76-1);
  entity_9[76-1]='0';
  memset(entity_4, 'u', 57-1);
  entity_4[57-1]='0';
  strcpy(entity_2, entity_9);
}