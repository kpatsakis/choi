void fun()
{
  char* entity_9;
  char entity_1[93] = "";
  char* entity_3;
  entity_9 = (char*)malloc(54*sizeof(char));
  entity_9[0]='0';
  memset(entity_1, 'M', 93-1);
  entity_1[93-1]='0';
  entity_3 = (char*)malloc(98*sizeof(char));
  entity_3[0]='0';
  strcpy(entity_9, entity_1);
}