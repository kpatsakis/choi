void fun()
{
  char* entity_2;
  char entity_1[69] = "";
  entity_1 = NULL;
  char entity_7[71] = "";
  entity_7 = NULL;
  entity_2 = (char*)malloc(19*sizeof(char));
  entity_2[19-1]='';
  memset(entity_1, 'I', 69-1);
  entity_1[69-1]='';
  memset(entity_7, 'A', 71-1);
  entity_7[71-1]='';
  strcpy(entity_2, entity_1);
}