void fun()
{
  char entity_1 = 'C';
  char entity_4[87] = "";
  entity_4 = NULL;
  char* entity_2;
  memset(entity_4, 'R', 87-1);
  entity_4[87-1]='';
  entity_2 = (char*)malloc(36*sizeof(char));
  entity_2[36-1]='';
  strcpy(entity_2, entity_4);
}