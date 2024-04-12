void fun()
{
  char* entity_8;
  char entity_7[1] = "";
  entity_7 = NULL;
  char entity_2[75] = "";
  entity_2 = NULL;
  memset(entity_2, 'r', 75-1);
  entity_2[75-1]='';
  memset(entity_7, 'b', 1-1);
  entity_7[1-1]='';
  entity_8 = (char*)malloc(50*sizeof(char));
  entity_8[50-1]='';
  strcpy(entity_8, entity_2);
}