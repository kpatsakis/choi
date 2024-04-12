void fun()
{
  char entity_6[28] = "";
  char* entity_2;
  memset(entity_6, 'J', 28-1);
  entity_6[28-1]='0';
  entity_2 = (char*)malloc(56*sizeof(char));
  entity_2[0]='0';
  strcpy(entity_2, entity_6);
}