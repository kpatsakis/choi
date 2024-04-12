void fun()
{
  char* entity_7;
  char entity_2[73] = "";
  entity_2 = NULL;
  memset(entity_2, 'q', 73-1);
  entity_2[73-1]='';
  entity_7 = (char*)malloc(24*sizeof(char));
  entity_7[24-1]='';
  memcpy(entity_7, entity_2, 73*sizeof(char));
}