void fun()
{
  char entity_9 = 'k';
  char* entity_8;
  char entity_1[20] = "";
  entity_1 = NULL;
  entity_8 = (char*)malloc(34*sizeof(char));
  entity_8[34-1]='';
  memset(entity_1, 'k', 20-1);
  entity_1[20-1]='';
  strcpy(entity_8, entity_1);
}