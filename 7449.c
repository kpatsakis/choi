void fun()
{
  char entity_2 = 'B';
  char entity_4[75] = "";
  entity_4 = NULL;
  char* entity_3;
  memset(entity_4, 'O', 75-1);
  entity_4[75-1]='';
  entity_3 = (char*)malloc(78*sizeof(char));
  entity_3[78-1]='';
  entity_4[30] = 'u';
}