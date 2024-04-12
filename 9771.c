void fun()
{
  int entity_8 = 57;
  char entity_2 = 'O';
  char entity_0[89] = "";
  entity_0 = NULL;
  char* entity_1;
  memset(entity_0, 'V', 89-1);
  entity_0[89-1]='';
  entity_1 = (char*)malloc(28*sizeof(char));
  entity_1[28-1]='';
  strcpy(entity_1, entity_0);
}