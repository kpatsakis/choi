void fun()
{
  char entity_0[75] = "";
  entity_0 = NULL;
  char* entity_2;
  char* entity_3;
  char entity_7[35] = "";
  entity_7 = NULL;
  memset(entity_7, 'X', 35-1);
  entity_7[35-1]='';
  entity_3 = (char*)malloc(94*sizeof(char));
  entity_3[94-1]='';
  entity_2 = (char*)malloc(70*sizeof(char));
  entity_2[70-1]='';
  memset(entity_0, 'n', 75-1);
  entity_0[75-1]='';
  strcpy(entity_2, entity_0);
}