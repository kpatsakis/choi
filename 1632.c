void fun()
{
  char* entity_1;
  char entity_7[27] = "";
  entity_7 = NULL;
  entity_1 = (char*)malloc(89*sizeof(char));
  entity_1[89-1]='';
  memset(entity_7, 'L', 27-1);
  entity_7[27-1]='';
  strcpy(entity_1, entity_7);
}