void fun()
{
  char entity_7 = 'y';
  char entity_5[76] = "";
  char entity_4 = 'd';
  char* entity_3;
  char* entity_1;
  entity_3 = (char*)malloc(3*sizeof(char));
  entity_3[0]='0';
  memset(entity_5, 'S', 76-1);
  entity_5[76-1]='0';
  entity_1 = (char*)malloc(78*sizeof(char));
  entity_1[0]='0';
  strcpy(entity_3, entity_5);
}