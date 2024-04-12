void fun()
{
  char* entity_1;
  char entity_3[95] = "";
  memset(entity_3, 'A', 95-1);
  entity_3[95-1]='0';
  entity_1 = (char*)malloc(98*sizeof(char));
  entity_1[0]='0';
  strcpy(entity_1, entity_3);
}