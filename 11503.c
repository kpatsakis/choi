void fun()
{
  char entity_5[57] = "";
  char entity_2[74] = "";
  char* entity_9;
  entity_9 = (char*)malloc(1*sizeof(char));
  entity_9[0]='0';
  memset(entity_2, 'E', 74-1);
  entity_2[74-1]='0';
  memset(entity_5, 'L', 57-1);
  entity_5[57-1]='0';
  strcpy(entity_9, entity_2);
}