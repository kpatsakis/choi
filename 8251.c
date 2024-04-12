void fun()
{
  char* entity_6;
  char entity_2[31] = "";
  entity_2 = NULL;
  memset(entity_2, 'z', 31-1);
  entity_2[31-1]='';
  entity_6 = (char*)malloc(100*sizeof(char));
  entity_6[100-1]='';
  strcpy(entity_6, entity_2);
}