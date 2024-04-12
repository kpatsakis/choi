void fun()
{
  char* entity_2;
  char* entity_0;
  char entity_6 = 'u';
  char entity_4[11] = "";
  entity_4 = NULL;
  memset(entity_4, 'D', 11-1);
  entity_4[11-1]='';
  entity_0 = (char*)malloc(100*sizeof(char));
  entity_0[100-1]='';
  entity_2 = (char*)malloc(45*sizeof(char));
  entity_2[45-1]='';
  strcpy(entity_0, entity_4);
}