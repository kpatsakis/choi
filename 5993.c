void fun()
{
  char entity_4 = 'B';
  char entity_3 = 'X';
  char* entity_2;
  char entity_9[70] = "";
  entity_9 = NULL;
  memset(entity_9, 'C', 70-1);
  entity_9[70-1]='';
  entity_2 = (char*)malloc(47*sizeof(char));
  entity_2[47-1]='';
  entity_9[3] = 'L';
}