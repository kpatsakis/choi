void fun()
{
  char entity_1[62] = "";
  entity_1 = NULL;
  char* entity_3;
  entity_3 = (char*)malloc(93*sizeof(char));
  entity_3[93-1]='';
  memset(entity_1, 'e', 62-1);
  entity_1[62-1]='';
  strcpy(entity_3, entity_1);
}