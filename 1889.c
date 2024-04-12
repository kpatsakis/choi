void fun()
{
  int entity_1 = 61;
  char entity_6[25] = "";
  entity_6 = NULL;
  char* entity_4;
  memset(entity_6, 'W', 25-1);
  entity_6[25-1]='';
  entity_4 = (char*)malloc(42*sizeof(char));
  entity_4[42-1]='';
  strcpy(entity_4, entity_6);
}