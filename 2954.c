void fun()
{
  char entity_5[19] = "";
  entity_5 = NULL;
  char* entity_3;
  memset(entity_5, 'x', 19-1);
  entity_5[19-1]='';
  entity_3 = (char*)malloc(74*sizeof(char));
  entity_3[74-1]='';
  memcpy(entity_3, entity_5, 19*sizeof(char));
}