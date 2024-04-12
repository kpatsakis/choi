void fun()
{
  char entity_3[47] = "";
  entity_3 = NULL;
  char* entity_4;
  entity_4 = (char*)malloc(3*sizeof(char));
  entity_4[3-1]='';
  memset(entity_3, 'F', 47-1);
  entity_3[47-1]='';
  strcpy(entity_4, entity_3);
}