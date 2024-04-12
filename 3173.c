void fun()
{
  char entity_3[6] = "";
  entity_3 = NULL;
  char* entity_1;
  entity_1 = (char*)malloc(90*sizeof(char));
  entity_1[90-1]='';
  memset(entity_3, 'W', 6-1);
  entity_3[6-1]='';
  strcpy(entity_1, entity_3);
}