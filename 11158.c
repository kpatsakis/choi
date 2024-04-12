void fun()
{
  char* entity_7;
  char entity_2[18] = "";
  entity_7 = (char*)malloc(66*sizeof(char));
  entity_7[0]='0';
  memset(entity_2, 'J', 18-1);
  entity_2[18-1]='0';
  strcpy(entity_7, entity_2);
}