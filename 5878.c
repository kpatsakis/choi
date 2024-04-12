void fun()
{
  char entity_5[69] = "";
  entity_5 = NULL;
  char* entity_8;
  memset(entity_5, 'y', 69-1);
  entity_5[69-1]='';
  entity_8 = (char*)malloc(36*sizeof(char));
  entity_8[36-1]='';
  strcpy(entity_8, entity_5);
}