void fun()
{
  char entity_2[78] = "";
  entity_2 = NULL;
  char* entity_3;
  char entity_6 = 'y';
  entity_3 = (char*)malloc(21*sizeof(char));
  entity_3[21-1]='';
  memset(entity_2, 'l', 78-1);
  entity_2[78-1]='';
  strcpy(entity_3, entity_2);
}