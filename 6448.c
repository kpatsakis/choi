void fun()
{
  char entity_7 = 'I';
  char* entity_2;
  char entity_6[78] = "";
  entity_6 = NULL;
  char entity_3[60] = "";
  entity_3 = NULL;
  memset(entity_3, 'l', 60-1);
  entity_3[60-1]='';
  memset(entity_6, 'O', 78-1);
  entity_6[78-1]='';
  entity_2 = (char*)malloc(67*sizeof(char));
  entity_2[67-1]='';
  strcpy(entity_2, entity_3);
}