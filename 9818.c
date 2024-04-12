void fun()
{
  char* entity_5;
  char entity_3[16] = "";
  entity_3 = NULL;
  entity_5 = (char*)malloc(100*sizeof(char));
  entity_5[100-1]='';
  memset(entity_3, 'b', 16-1);
  entity_3[16-1]='';
  strcpy(entity_5, entity_3);
}