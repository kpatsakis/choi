void fun()
{
  char entity_6[5] = "";
  char* entity_9;
  char* entity_2;
  entity_2 = (char*)malloc(5*sizeof(char));
  entity_2[0]='0';
  memset(entity_6, 'C', 5-1);
  entity_6[5-1]='0';
  entity_9 = (char*)malloc(34*sizeof(char));
  entity_9[0]='0';
  strcpy(entity_9, entity_6);
}