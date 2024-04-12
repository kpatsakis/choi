void fun()
{
  char entity_1[78] = "";
  entity_1 = NULL;
  char* entity_2;
  memset(entity_1, 'c', 78-1);
  entity_1[78-1]='';
  entity_2 = (char*)malloc(19*sizeof(char));
  entity_2[19-1]='';
  strcpy(entity_2, entity_1);
}