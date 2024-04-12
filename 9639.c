void fun()
{
  char entity_2[34] = "";
  entity_2 = NULL;
  char* entity_3;
  char entity_7[73] = "";
  entity_7 = NULL;
  memset(entity_7, 'S', 73-1);
  entity_7[73-1]='';
  memset(entity_2, 'a', 34-1);
  entity_2[34-1]='';
  entity_3 = (char*)malloc(63*sizeof(char));
  entity_3[63-1]='';
  entity_2[66] = 'p';
}