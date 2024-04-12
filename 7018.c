void fun()
{
  char entity_3[80] = "";
  entity_3 = NULL;
  char* entity_8;
  char entity_4 = 'w';
  char entity_9[13] = "";
  entity_9 = NULL;
  memset(entity_9, 'c', 13-1);
  entity_9[13-1]='';
  memset(entity_3, 'N', 80-1);
  entity_3[80-1]='';
  entity_8 = (char*)malloc(78*sizeof(char));
  entity_8[78-1]='';
  strcpy(entity_8, entity_9);
}