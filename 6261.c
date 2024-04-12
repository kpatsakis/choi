void fun()
{
  char* entity_6;
  char entity_2[22] = "";
  entity_2 = NULL;
  entity_6 = (char*)malloc(59*sizeof(char));
  entity_6[59-1]='';
  memset(entity_2, 'Z', 22-1);
  entity_2[22-1]='';
  strcpy(entity_6, entity_2);
}