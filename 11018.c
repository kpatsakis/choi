void fun()
{
  char entity_7[11] = "";
  char* entity_3;
  entity_3 = (char*)malloc(82*sizeof(char));
  entity_3[0]='0';
  memset(entity_7, 'x', 11-1);
  entity_7[11-1]='0';
  strcpy(entity_3, entity_7);
}