void fun()
{
  char entity_1 = 'F';
  char entity_5[98] = "";
  char entity_9[93] = "";
  char* entity_3;
  char* entity_2;
  memset(entity_5, 't', 98-1);
  entity_5[98-1]='0';
  entity_3 = (char*)malloc(28*sizeof(char));
  entity_3[0]='0';
  memset(entity_9, 'a', 93-1);
  entity_9[93-1]='0';
  entity_2 = (char*)malloc(97*sizeof(char));
  entity_2[0]='0';
  strcpy(entity_2, entity_5);
}