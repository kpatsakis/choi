void fun()
{
  char entity_3[89] = "";
  entity_3 = NULL;
  char entity_5 = 'o';
  char* entity_2;
  memset(entity_3, 'a', 89-1);
  entity_3[89-1]='';
  entity_2 = (char*)malloc(20*sizeof(char));
  entity_2[20-1]='';
  strcpy(entity_2, entity_3);
}