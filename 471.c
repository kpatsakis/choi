void fun()
{
  char* entity_2;
  char entity_3[29] = "";
  entity_3 = NULL;
  char* entity_0;
  memset(entity_3, 'b', 29-1);
  entity_3[29-1]='';
  entity_2 = (char*)malloc(19*sizeof(char));
  entity_2[19-1]='';
  entity_0 = (char*)malloc(70*sizeof(char));
  entity_0[70-1]='';
  strcpy(entity_0, entity_3);
}