void fun()
{
  char entity_7 = 'c';
  char* entity_4;
  char entity_2[82] = "";
  entity_2 = NULL;
  memset(entity_2, 'B', 82-1);
  entity_2[82-1]='';
  entity_4 = (char*)malloc(25*sizeof(char));
  entity_4[25-1]='';
  strcpy(entity_4, entity_2);
}