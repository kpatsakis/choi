void fun()
{
  char entity_2 = 'a';
  char* entity_1;
  char entity_3[47] = "";
  entity_3 = NULL;
  char entity_0[40] = "";
  entity_0 = NULL;
  memset(entity_0, 'i', 40-1);
  entity_0[40-1]='';
  memset(entity_3, 's', 47-1);
  entity_3[47-1]='';
  entity_1 = (char*)malloc(3*sizeof(char));
  entity_1[3-1]='';
  strcpy(entity_1, entity_3);
}