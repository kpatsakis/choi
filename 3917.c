void fun()
{
  char* entity_7;
  char entity_3 = 'T';
  char entity_9[7] = "";
  entity_9 = NULL;
  entity_7 = (char*)malloc(26*sizeof(char));
  entity_7[26-1]='';
  memset(entity_9, 'R', 7-1);
  entity_9[7-1]='';
  strcpy(entity_7, entity_9);
}