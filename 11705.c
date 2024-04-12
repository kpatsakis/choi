void fun()
{
  char entity_5[49] = "";
  char* entity_1;
  char* entity_2;
  memset(entity_5, 'e', 49-1);
  entity_5[49-1]='0';
  entity_1 = (char*)malloc(96*sizeof(char));
  entity_1[0]='0';
  entity_2 = (char*)malloc(1*sizeof(char));
  entity_2[0]='0';
  strcpy(entity_1, entity_5);
}