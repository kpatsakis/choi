void fun()
{
  char entity_4 = 'n';
  char entity_2[29] = "";
  entity_2 = NULL;
  char* entity_1;
  char* entity_9;
  entity_1 = (char*)malloc(47*sizeof(char));
  entity_1[47-1]='';
  memset(entity_2, 'A', 29-1);
  entity_2[29-1]='';
  entity_9 = (char*)malloc(65*sizeof(char));
  entity_9[65-1]='';
  entity_2[65] = 'O';
}