void fun()
{
  char entity_3[10] = "";
  char* entity_7;
  memset(entity_3, 'l', 10-1);
  entity_3[10-1]='0';
  entity_7 = (char*)malloc(37*sizeof(char));
  entity_7[0]='0';
  strcpy(entity_7, entity_3);
}