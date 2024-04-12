void fun()
{
  char* entity_8;
  char entity_7[78] = "";
  entity_7 = NULL;
  memset(entity_7, 's', 78-1);
  entity_7[78-1]='';
  entity_8 = (char*)malloc(86*sizeof(char));
  entity_8[86-1]='';
  strcpy(entity_8, entity_7);
}