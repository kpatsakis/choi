void fun()
{
  char entity_2[74] = "";
  entity_2 = NULL;
  char* entity_0;
  char* entity_3;
  entity_3 = (char*)malloc(13*sizeof(char));
  entity_3[13-1]='';
  memset(entity_2, 'm', 74-1);
  entity_2[74-1]='';
  entity_0 = (char*)malloc(80*sizeof(char));
  entity_0[80-1]='';
  strcpy(entity_0, entity_2);
}