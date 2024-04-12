void fun()
{
  char entity_2[44] = "";
  entity_2 = NULL;
  char* entity_1;
  entity_1 = (char*)malloc(19*sizeof(char));
  entity_1[19-1]='';
  memset(entity_2, 'X', 44-1);
  entity_2[44-1]='';
  memcpy(entity_1, entity_2, 44*sizeof(char));
}