void fun()
{
  char entity_2[30] = "";
  entity_2 = NULL;
  char* entity_6;
  char entity_7[27] = "";
  entity_7 = NULL;
  memset(entity_2, 'o', 30-1);
  entity_2[30-1]='';
  entity_6 = (char*)malloc(43*sizeof(char));
  entity_6[43-1]='';
  memset(entity_7, 'k', 27-1);
  entity_7[27-1]='';
  entity_7[3] = 'b';
}