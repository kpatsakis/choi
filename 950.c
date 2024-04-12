void fun()
{
  char* entity_3;
  char* entity_0;
  char entity_7[25] = "";
  entity_7 = NULL;
  memset(entity_7, 'w', 25-1);
  entity_7[25-1]='';
  entity_3 = (char*)malloc(78*sizeof(char));
  entity_3[78-1]='';
  entity_0 = (char*)malloc(15*sizeof(char));
  entity_0[15-1]='';
  strcpy(entity_3, entity_7);
}