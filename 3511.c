void fun()
{
  char entity_1[19] = "";
  entity_1 = NULL;
  char* entity_3;
  memset(entity_1, 'F', 19-1);
  entity_1[19-1]='';
  entity_3 = (char*)malloc(73*sizeof(char));
  entity_3[73-1]='';
  memcpy(entity_3, entity_1, 19*sizeof(char));
}