void fun()
{
  char* entity_0;
  char entity_3[69] = "";
  entity_3 = NULL;
  char entity_9[37] = "";
  entity_9 = NULL;
  memset(entity_3, 'u', 69-1);
  entity_3[69-1]='';
  entity_0 = (char*)malloc(62*sizeof(char));
  entity_0[62-1]='';
  memset(entity_9, 'p', 37-1);
  entity_9[37-1]='';
  strcpy(entity_0, entity_3);
}