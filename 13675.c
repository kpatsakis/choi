void fun()
{
  int entity_2 = 87;
  char entity_1[16] = "";
  char entity_3[99] = "";
  char* entity_5;
  memset(entity_1, 'T', 16-1);
  entity_1[16-1]='0';
  memset(entity_3, 'E', 99-1);
  entity_3[99-1]='0';
  entity_5 = (char*)malloc(entity_2*sizeof(char));
  entity_5[0]='0';
  entity_2 = 1;
  strcpy(entity_5, entity_1);
}