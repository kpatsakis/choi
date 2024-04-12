void fun()
{
  char entity_2[8] = "";
  entity_2 = NULL;
  char* entity_3;
  memset(entity_2, 'm', 8-1);
  entity_2[8-1]='';
  entity_3 = (char*)malloc(68*sizeof(char));
  entity_3[68-1]='';
  strcpy(entity_3, entity_2);
}