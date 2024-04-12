void fun()
{
  char entity_8[95] = "";
  char* entity_5;
  char entity_7 = 'y';
  entity_5 = (char*)malloc(63*sizeof(char));
  entity_5[0]='0';
  memset(entity_8, 'a', 95-1);
  entity_8[95-1]='0';
  strcpy(entity_5, entity_8);
}