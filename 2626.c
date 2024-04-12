void fun()
{
  char entity_2 = 'b';
  char entity_9[57] = "";
  entity_9 = NULL;
  char* entity_1;
  char entity_5 = 'B';
  entity_1 = (char*)malloc(42*sizeof(char));
  entity_1[42-1]='';
  memset(entity_9, 'i', 57-1);
  entity_9[57-1]='';
  entity_9[89] = 's';
}