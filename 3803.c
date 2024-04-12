void fun()
{
  char entity_1 = 'Q';
  char entity_8 = 'B';
  char entity_3[82] = "";
  entity_3 = NULL;
  char* entity_9;
  char entity_2 = 'O';
  entity_9 = (char*)malloc(61*sizeof(char));
  entity_9[61-1]='';
  memset(entity_3, 'G', 82-1);
  entity_3[82-1]='';
  strcpy(entity_9, entity_3);
}