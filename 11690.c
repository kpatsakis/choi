void fun()
{
  char* entity_5;
  char entity_3[99] = "";
  memset(entity_3, 'V', 99-1);
  entity_3[99-1]='0';
  entity_5 = (char*)malloc(28*sizeof(char));
  entity_5[0]='0';
  strcpy(entity_5, entity_3);
}