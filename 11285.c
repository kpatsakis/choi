void fun()
{
  char* entity_3;
  char entity_5[47] = "";
  char entity_1 = 'F';
  memset(entity_5, 'y', 47-1);
  entity_5[47-1]='0';
  entity_3 = (char*)malloc(74*sizeof(char));
  entity_3[0]='0';
  strcpy(entity_3, entity_5);
}