void fun()
{
  char entity_7[89] = "";
  entity_7 = NULL;
  char* entity_3;
  memset(entity_7, 'F', 89-1);
  entity_7[89-1]='';
  entity_3 = (char*)malloc(67*sizeof(char));
  entity_3[67-1]='';
  strcpy(entity_3, entity_7);
}