void fun()
{
  char entity_3[80] = "";
  entity_3 = NULL;
  char* entity_2;
  entity_2 = (char*)malloc(84*sizeof(char));
  entity_2[84-1]='';
  memset(entity_3, 'e', 80-1);
  entity_3[80-1]='';
  strcpy(entity_2, entity_3);
}