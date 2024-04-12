void fun()
{
  char entity_1[18] = "";
  entity_1 = NULL;
  char* entity_3;
  entity_3 = (char*)malloc(49*sizeof(char));
  entity_3[49-1]='';
  memset(entity_1, 'Z', 18-1);
  entity_1[18-1]='';
  strcpy(entity_3, entity_1);
}