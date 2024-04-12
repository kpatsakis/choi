void fun()
{
  char* entity_4;
  char entity_1[3] = "";
  entity_1 = NULL;
  memset(entity_1, 'w', 3-1);
  entity_1[3-1]='';
  entity_4 = (char*)malloc(19*sizeof(char));
  entity_4[19-1]='';
  memcpy(entity_4, entity_1, 3*sizeof(char));
}