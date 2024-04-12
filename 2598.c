void fun()
{
  char entity_1[57] = "";
  entity_1 = NULL;
  char entity_2[54] = "";
  entity_2 = NULL;
  char* entity_7;
  char entity_3[20] = "";
  entity_3 = NULL;
  entity_7 = (char*)malloc(45*sizeof(char));
  entity_7[45-1]='';
  memset(entity_3, 'A', 20-1);
  entity_3[20-1]='';
  memset(entity_1, 'u', 57-1);
  entity_1[57-1]='';
  memset(entity_2, 'N', 54-1);
  entity_2[54-1]='';
  strcpy(entity_7, entity_2);
}