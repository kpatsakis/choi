void fun()
{
  char entity_7[42] = "";
  char* entity_3;
  memset(entity_7, 'O', 42-1);
  entity_7[42-1]='0';
  entity_3 = (char*)malloc(21*sizeof(char));
  entity_3[0]='0';
  strcpy(entity_3, entity_7);
}