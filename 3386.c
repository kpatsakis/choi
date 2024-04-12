void fun()
{
  char* entity_3;
  char entity_2[29] = "";
  entity_2 = NULL;
  char entity_4 = 'b';
  entity_3 = (char*)malloc(78*sizeof(char));
  entity_3[78-1]='';
  memset(entity_2, 'A', 29-1);
  entity_2[29-1]='';
  strcpy(entity_3, entity_2);
}