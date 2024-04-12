void fun()
{
  char entity_3[28] = "";
  char* entity_7;
  memset(entity_3, 'J', 28-1);
  entity_3[28-1]='0';
  entity_7 = (char*)malloc(43*sizeof(char));
  entity_7[0]='0';
  strcpy(entity_7, entity_3);
}