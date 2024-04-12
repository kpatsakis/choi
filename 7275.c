void fun()
{
  char* entity_3;
  char entity_4[78] = "";
  entity_4 = NULL;
  entity_3 = (char*)malloc(82*sizeof(char));
  entity_3[82-1]='';
  memset(entity_4, 'p', 78-1);
  entity_4[78-1]='';
  strcpy(entity_3, entity_4);
}