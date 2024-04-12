void fun()
{
  char* entity_5;
  char entity_0[82] = "";
  entity_0 = NULL;
  entity_5 = (char*)malloc(67*sizeof(char));
  entity_5[67-1]='';
  memset(entity_0, 'd', 82-1);
  entity_0[82-1]='';
  strcpy(entity_5, entity_0);
}