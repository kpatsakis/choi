void fun()
{
  char* entity_9;
  char entity_3 = 'f';
  char entity_2[46] = "";
  entity_2 = NULL;
  entity_9 = (char*)malloc(31*sizeof(char));
  entity_9[31-1]='';
  memset(entity_2, 'A', 46-1);
  entity_2[46-1]='';
  memcpy(entity_9, entity_2, 46*sizeof(char));
}