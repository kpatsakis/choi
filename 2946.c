void fun()
{
  char entity_2[19] = "";
  entity_2 = NULL;
  char* entity_6;
  memset(entity_2, 'v', 19-1);
  entity_2[19-1]='';
  entity_6 = (char*)malloc(2*sizeof(char));
  entity_6[2-1]='';
  memcpy(entity_6, entity_2, 19*sizeof(char));
}