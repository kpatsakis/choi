void fun()
{
  char entity_9[70] = "";
  entity_9 = NULL;
  char* entity_2;
  char entity_3 = 'B';
  memset(entity_9, 'X', 70-1);
  entity_9[70-1]='';
  entity_2 = (char*)malloc(30*sizeof(char));
  entity_2[30-1]='';
  strcpy(entity_2, entity_9);
}