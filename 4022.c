void fun()
{
  int entity_4 = 6;
  char entity_6 = 'F';
  char entity_1[50] = "";
  entity_1 = NULL;
  char* entity_3;
  memset(entity_1, 'z', 50-1);
  entity_1[50-1]='';
  entity_3 = (char*)malloc(42*sizeof(char));
  entity_3[42-1]='';
  strcpy(entity_3, entity_1);
}